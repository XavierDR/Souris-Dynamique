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
from WksObj import WksObj
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
        self.palette.setColor(QPalette.Foreground, Qt.red)

        # Labels
        self.nameLabel = QLabel('Name')
        self.nameLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.nameLabel, 0, 0)

        self.ageLabel = QLabel('Age')
        self.ageLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.ageLabel, 0, 1)

        self.messageLabel = QLabel("Waiting for a mouse to be added")
        self.setMaximumHeight(25)
        self.mainLayout.addWidget(self.messageLabel, 3, 0)

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

        # Thread test button
        self.threadBtn = QPushButton('Thread')
        self.threadBtn.clicked.connect(self.readEvents)
        self.mainLayout.addWidget(self.threadBtn, 4, 0)

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
            self.messageLabel.setPalette(self.palette)
            self.messageLabel.setText('Please enter valid a name and age')
            self.palette.setColor(QPalette.Foreground, Qt.black)
            return
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

    def readEvents(self):
        #t = readThread(self.ard)
        self.t.start()
        #t.start()


class readThread(QThread):
    def __init__(self, spreadsheet, ard):
        QThread.__init__(self)
        self.running = True
        self.sps = spreadsheet
        self.ard = ard

    def __del__(self):
        self.wait()

    def run(self):
        while self.running is True:
            self.sleep(0.5)
            if self.ard.ser.inWaiting() > 0:    # If the input buffer isn't empty
                msg = self.ard.readPort()       # Read what's in the input buffer
                self.ard.ser.flush()            # Flush the input buffer
                if msg[0] is '1' and msg[1] is '.':   # It's an RFID tag
                    mouse = self.sps.getMouseInfo(msg)
                    if mouse is True:
                        print('Mouse exists')
                        #TODO: send infos to the arduino
                        self.ard.writePort('M1')
                    else:
                        print("Mouse doesn't exist")
                        self.ard.writePort('M0')
                print(msg)

    def stop(self):
        self.running = False

    def restart(self):
        self.running = True


def main():
    a = QApplication(sys.argv)
    spreadsheet = WksObj()
    jsonName = 'SourisDynamique-a348c1bc1c12.json'
    worksheetName = "InterfaceSouris"
    arduino = Arduino.Arduino()
    spreadsheet.spreadsheetOpen(jsonName, worksheetName)

    x = readThread(spreadsheet, arduino)
    gui = MainGui(spreadsheet, x, arduino)
    print('1')
    a.exec_()

    # sys.exit(a.exec_())

    print('2')


#    a.exec()

if __name__ == '__main__':
    main()
