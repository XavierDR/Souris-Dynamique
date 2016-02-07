# -*- coding: latin-1 -*-
"""
Created on Sun Sep 27 13:17:41 2015

@author: Utilisateur
"""
import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *
import serial
import Arduino
from CurrentMouse import CurrentMouse
from threading import Thread
import time


class MainGui(QWidget):
    """ This class holds the user interface used
        to add a mouse to the google worksheet
    """

    def __init__(self, spreadsheet, readThread, arduino):
        """ MainGui constructor
        :param ard : Arduino object used to communicate
                     through serial port with data packets
        :return: None
        """
        super(MainGui, self).__init__()

        self.ard = arduino
        self.sps = spreadsheet
        self.createLayout()
        self.t = readThread
        self.t.start()

    def closeEvent(self, event):
        """ This function is called when the GUI window is closed
        :param event: Type of close event (window closed here)
        :return: None
        """
        self.ard.closeSerial()

    def createLayout(self):
        """
        This function initializes the GUI layout
        :return: None
        """
        # Window setting
        self.mainLayout = QGridLayout()
        self.setLayout(self.mainLayout)
        self.palette = QPalette()
        self.palette.setColor(QPalette.Foreground, Qt.black)

        # Labels
        self.nameLabel = QLabel('Name')
        self.nameLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.nameLabel, 0, 0)

        self.ageLabel = QLabel('Age')
        self.ageLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.ageLabel, 0, 1)

        self.messageLabel = QLabel("Waiting for a mouse to be added")
        self.setMaximumHeight(25)
        self.mainLayout.addWidget(self.messageLabel, 3, 0, 1, 2)

        # Line edits
        # Mouse name
        self.nameLineEdit = QLineEdit("Enter the name here")
        self.nameLineEdit.setMaximumHeight(25)
        self.mainLayout.addWidget(self.nameLineEdit, 1, 0)

        # Age
        self.ageLineEdit = QLineEdit("Enter the age")
        self.ageLineEdit.setMaximumHeight(25)
        self.mainLayout.addWidget(self.ageLineEdit, 1, 1)

        # Buttons
        # Add mouse button
        self.addMouseBtn = QPushButton('Add mouse')
        self.addMouseBtn.clicked.connect(self.addMouse)
        self.addMouseBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.addMouseBtn, 2, 0)

        # Cancel button
        self.cancelBtn = QPushButton('Cancel')
        self.cancelBtn.clicked.connect(self.closeWindow)
        self.cancelBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.cancelBtn, 2, 1)

        # Fill Water button
        self.fillWaterBtn = QPushButton('Fill Water')
        self.fillWaterBtn.clicked.connect(self.fillWater)
        self.fillWaterBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.fillWaterBtn, 1, 3)

        # Stop water button
        self.fillWaterBtn = QPushButton('Stop Water')
        self.fillWaterBtn.clicked.connect(self.stopWater)
        self.fillWaterBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.fillWaterBtn, 2, 3)


        self.setWindowTitle("Mouse adding")
        self.setGeometry(200, 200, 400, 200)
        self.show()


    def addMouse(self):
        """  Callback function for the add mouse button. This function
             updates the new informations in the worksheet
        :return: None
        """
        self.t.stop()
        self.messageLabel.setPalette(self.palette)
        age = self.ageLineEdit.text()
        name = self.nameLineEdit.text()
        if age == 'Enter the age' or name == 'Enter the name here':
            self.palette.setColor(QPalette.Foreground, Qt.red)
            self.messageLabel.setPalette(self.palette)
            self.messageLabel.setText('Please enter valid a name and age')
            self.palette.setColor(QPalette.Foreground, Qt.black)
            return
        self.palette.setColor(QPalette.Foreground, Qt.black)
        self.messageLabel.setPalette(self.palette)
        self.messageLabel.setText('Please scan the RFID tag on of new mouse...')
        newTag = self.ard.addMouse()
        # Il devrait y avoir un retour du tag RFID de la souris ici
        self.messageLabel.setText('New mouse RFID: ' + str(newTag))

        self.sps.addMouseGoogle(newTag, name, age)
        self.t.restart()
        self.t.start()

    def changeSpeed(self):
        self.ard.serialCom()

    def closeWindow(self):
        """ Callback function for the 'Cancel button'
        :return: None
        """
        self.ard.closeSerial()
        QCoreApplication.instance().quit()

    def fillWater(self):
        """ Callback function for the 'Fill water' button
        :return: None
        """
        self.ard.writePort('W1')
        self.messageLabel.setText('Filling water tube...')

    def stopWater(self):
        """ Callback function for the 'Stop water' button
        :return: None
        """
        self.ard.writePort('W0')
        self.messageLabel.setText('Water stopped')


class ReadThread(QThread):
    def __init__(self, spreadsheet, ard):
        QThread.__init__(self)
        self.running = True
        self.sps = spreadsheet
        self.ard = ard

    def __del__(self):
        self.wait()

    def run(self):
        while self.running is True:
            self.sleep(1)
            if self.ard.ser.inWaiting() > 0:    # If the input buffer isn't empty
                msg = self.ard.readPort()       # Read what's in the input buffer
                self.ard.ser.flush()            # Flush the input buffer
                if msg[0] is '1' and msg[1] is '.':   # It's an RFID tag
                    print("Fetching google info...")
                    try:
                        mouse = self.sps.getMouseInfo(msg)
                        print("Mouse exists. Checking if mouse can train")
                        trainingAllowed = self.sps.canMouseTrain()
                    except:
                        print('The scanned mouse doesnt exist')
                        
                    if mouse is True:

                        if trainingAllowed is True:
                            packet = 'M1V' \
                                 + str(self.sps.trInfo[3]) + 'T' + str(self.sps.trInfo[2])
                            print(packet)
                            self.ard.writePort(packet)
                            self.sps.updateWaterDeliveryTime()

                        else:
                            packet = 'M0' 
                            print(packet)
                            self.ard.writePort(packet)

                    else:
                        self.ard.writePort('M0')

                if msg == "EOTS":
                    print("Training was successful")
                    self.sps.updateMouseInfo()

                # TODO: VERIFY IF THIS FLUSH GOES THERE OR SOMEWHERE ELSE
                self.ard.ser.flush()


    def stop(self):
        self.running = False

    def restart(self):
        self.running = True


def main():
    a = QApplication(sys.argv)
    spreadsheet = CurrentMouse()
    jsonName = 'SourisDynamique-a348c1bc1c12.json'
    worksheetName = "InterfaceSouris"
    arduino = Arduino.Arduino()
    spreadsheet.spreadsheetOpen(jsonName, worksheetName)
    spreadsheet.openLocalData()         # Used for RFID and time stamp verification

    x = ReadThread(spreadsheet, arduino)
    gui = MainGui(spreadsheet, x, arduino)
    localMouseInfo = dict()
    print('1')
    a.exec_()

    # sys.exit(a.exec_())
    print('2')


#    a.exec()

if __name__ == '__main__':
    main()
 
