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
import threading as threading
import time
import Queue


class MainGui(QWidget):
    """ This class holds the user interface used
        to add a mouse to the google worksheet
    """

    def __init__(self, spreadsheet, readThread, arduino, queue):
        """ MainGui constructor
        :param ard : Arduino object used to communicate
                     through serial port with data packets
        :return: None
        """
        super(MainGui, self).__init__()

        self.ard = arduino
        self.sps = spreadsheet
        self.t = readThread
        self.queue = queue
        self.t.start()
        self.mouseAdded = False
        self.createLayout()
        self.newTag = ''

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
        self.mainLayout.addWidget(self.messageLabel, 4, 0, 1, 2)

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
        self.addMouseBtn.clicked.connect(self.addMouses)
        self.addMouseBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.addMouseBtn, 2, 0)

        # Cancel button
        self.cancelBtn = QPushButton('Cancel')
        self.cancelBtn.clicked.connect(self.cancelBtnCallback)
        self.cancelBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.cancelBtn, 2, 1)

        # Emergency stop button
        self.emergencyBtn = QPushButton('Emergency stop')
        self.emergencyBtn.clicked.connect(self.emergencyBtnCallback)
        self.emergencyBtn.setMaximumHeight(35)
        self.emergencyBtn.setStyleSheet('background-color: rgb(243, 77, 77);')
        self.mainLayout.addWidget(self.emergencyBtn, 3, 0, 1, 3)

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

    def addMouses(self):
        self.mouseAdded = False
        #QTimer.singleShot(0, self.addMouse)
        
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
        self.messageLabel.setText('Please scan the RFID tag of the new mouse...')
        #self.cancel.start()
        #newTag = self.queue.get()
        #self.cancel.terminate()
        # Il devrait y avoir un retour du tag RFID de la souris ici
        self.t.setAddMouse(True)
        
        time.sleep(0.1)
        self.queue.put(age)
        time.sleep(0.1)
        self.queue.put(name)
        #self.queue.put("Filler")
        #t1 = threading.Thread(target=self.addMouse, args=())
        #t1.start()
        t2 = threading.Thread(target = self.cancelBtnCallback, args=())
        #t1.join()

        #self.messageLabel.setText('New mouse RFID: ' + str(self.newTag))

        self.mouseAdded = False

    def addMouse(self):
        """  Callback function for the add mouse button. This function
             updates the new informations in the worksheet
        :return: None
        """
        print('In addMouse Callback!')
        
        
        while self.mouseAdded is False:
            time.sleep(0.5)
            #qApp.processEvents()
            #self.repaint()
            try:
                self.newTag = self.queue.get()
            except:
                print('Tag not found')
            if self.newTag:
                self.mouseAdded = True
            if self.mouseAdded:
                break

        
        #self.t.restart()
        # self.t.start()
        

    def changeSpeed(self):
        self.ard.serialCom()

    def cancelBtnCallback(self):
        """ Callback function for the 'Cancel button'
        :return: None
        """
        print('Mouse adding cancelled')
        self.t.setAddMouse(False)

    def emergencyBtnCallback(self):
        """ Callback function for the 'Emergence stop' button'
            Sends a packet to the Arduino to stop the current training
            when the button is pushed
        :return: None
        """
        self.t.setEmergency(True)

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
    def __init__(self, spreadsheet, ard, queue):
        QThread.__init__(self)
        self.running = True
        self.emergency = False
        self.sps = spreadsheet
        self.ard = ard
        self.isAddMouse = False
        self.q = queue

    def __del__(self):
        self.wait()

    def run(self):
        while self.running is True:
            self.sleep(1)
            if self.emergency is True:
                print('There is an emergency')
                self.ard.writePort('Q')
                self.emergency = False
            
            if self.ard.ser.inWaiting() > 0:    # If the input buffer isn't empty
                msg = self.ard.readPort()       # Read what's in the input buffer
                self.ard.ser.flush()            # Flush the input buffer
                if msg[0] is '1' and msg[1] is '.' and self.isAddMouse is False:   # It's an RFID tag
                    try:
                        mouse = self.sps.getMouseInfo(msg)
                        if mouse is 1:
                            trainingAllowed = self.sps.canMouseTrain()
                            print('Training allowed: ', trainingAllowed and mouse)
                        elif mouse is 0:
                            print("The scanned mouse doesnt exist")
                        
                    except:
                        print('The scanned mouse doesnt exist')
                        
                    if mouse is 1:
                        if trainingAllowed is True:
                            packet = 'M1V' \
                                 + str(self.sps.trInfo[3]) + 'T' + str(self.sps.trInfo[2])
                            print("Packet sent to Arduino: ", packet)
                            self.ard.writePort(packet)
                            self.sps.updateWaterDeliveryTime()

                        else:
                            packet = 'M0' 
                            print("Packet sent to Arduino: ", packet)
                            self.ard.writePort(packet)

                    else:
                        self.ard.writePort('M0')

                # This elif is executed when a new mouse is being added        
                elif self.isAddMouse is True:
                    print('\nAdding mouse new mouse')
                    self.isAddMouse = False
                    if not self.q.empty():
                        age = self.q.get()
                        print('Age: ', age)
                    if not self.q.empty():
                        name = self.q.get()
                        print('Name: ', name)

                    if msg and name and age:
                       self.sps.addMouseGoogle(msg, name, age)
                       self.ard.ser.flush()
                       self.q.queue.clear()
                    

                if msg == "EOTS":
                    print("Training was successful")
                    self.sps.updateMouseInfo()

                self.ard.ser.flush()


    def stop(self):
        self.running = False

    def restart(self):
        self.running = True

    def setAddMouse(self, val):
        self.isAddMouse = val

    def setEmergency(self, val):
        self.emergency = val

        
def main():
    a = QApplication(sys.argv)
    spreadsheet = CurrentMouse()
    jsonName = 'SourisDynamique-a348c1bc1c12.json'
    worksheetName = "InterfaceSouris"
    arduino = Arduino.Arduino()

    try:
        print("Connecting to Google SpreadSheet...")
        spreadsheet.spreadsheetOpen(jsonName, worksheetName)
        print("Creating local data...")
        queue = Queue.Queue()
        x = ReadThread(spreadsheet, arduino, queue)
        print("Creating GUI...")
        gui = MainGui(spreadsheet, x, arduino, queue)
        print('Program is ready')
        a.exec_()
    except:
        print("Error: Unable to open spreadsheet")


    # sys.exit(a.exec_())
    print('Program terminated')


#    a.exec()

if __name__ == '__main__':
    main()
 
