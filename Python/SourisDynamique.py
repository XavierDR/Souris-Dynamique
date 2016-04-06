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

    def __init__(self, spreadsheet, readThread, arduino, queue, rfidQ):
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
        self.rfidQueue = rfidQ
        self.t.start()
        self.mouseAdded = False
        self.createLayout()
        self.newTag = ''

    def closeEvent(self, event):
        """ This function is called when the GUI window is closed
        :param event: Type of close event (window closed here)
        :return: None
        """
        quitMsg = 'Are you sure you want to quit the program? This will exit stop the cage from functionning correctly.'
        reply = QMessageBox.question(self, 'Message', quitMsg, QMessageBox.Yes, QMessageBox.No)
        #quitPopup = QMessageBox()
        #quitPopup.setText(quitMsg)
        #quiPopup.addButton(QPushButton('Yes'), QMessageBox.YesRole)
        #quiPopup.addButton(QPushButton('No'), QMessageBox.noRole)

        if reply == QMessageBox.Yes:
            self.ard.closeSerial()
            print('Accepting quit event, quitting..')
            event.accept()

        else:
            event.ignore()
        

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

        # Vertical separator
        self.vertSep = QFrame()
        self.vertSep.setFrameStyle(QFrame.VLine)
        self.vertSep.setSizePolicy(QSizePolicy.Minimum, QSizePolicy.Expanding)
        self.mainLayout.addWidget(self.vertSep, 0, 2, 5, 1)

        # Labels
        # Name label
        self.nameLabel = QLabel('Name')
        self.nameLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.nameLabel, 0, 0)

        # Age label
        self.ageLabel = QLabel('Age')
        self.ageLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.ageLabel, 0, 1)

        # Message label
        self.messageLabel = QLabel("Program running normally")
        self.messageLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.messageLabel, 5, 0, 1, 2)
        

        # Water control label
        self.waterLabel = QLabel('Water tube controls')
        self.waterLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.waterLabel, 0, 3, 1, 1)
        
        # Line edits
        # Mouse name
        self.nameLineEdit = QLineEdit("Enter the name here")
        self.nameLineEdit.setMaximumHeight(25)
        self.mainLayout.addWidget(self.nameLineEdit, 1, 0)

        # Age
        self.ageLineEdit = QLineEdit("Enter the age here")
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
        self.mainLayout.addWidget(self.emergencyBtn, 3, 0, 1, 2)

        # Fill Water button
        self.fillWaterBtn = QPushButton('Fill tube')
        self.fillWaterBtn.clicked.connect(self.fillWater)
        self.fillWaterBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.fillWaterBtn, 1, 3)

        # Reload button
        self.reloadBtn = QPushButton('Reload')
        self.reloadBtn.clicked.connect(self.reloadCallback)
        self.reloadBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.reloadBtn, 4, 0)

        # Stop water button
        self.fillWaterBtn = QPushButton('Stop Water')
        self.fillWaterBtn.clicked.connect(self.stopWater)
        self.fillWaterBtn.setMaximumHeight(35)
        self.mainLayout.addWidget(self.fillWaterBtn, 2, 3)

        # Main window initialisation
        self.setWindowTitle("Mouse adding")
        self.setGeometry(200, 200, 500, 200)
        self.show()

    def addMouses(self):
        self.mouseAdded = False
        #QTimer.singleShot(0, self.addMouse)
        resetMsgLabelThread = threading.Thread(target = self.resetMsgLabel, args=())
        addMouseTimeout = threading.Thread(target = self.addMouseTimeoutCallback, args=())
        
        self.messageLabel.setPalette(self.palette)
        age = self.ageLineEdit.text()
        name = self.nameLineEdit.text()
        if age is 'Enter the age here' or age is '' or name is 'Enter the name here' or name is '' or self.isNumber(age) is False:
            self.palette.setColor(QPalette.Foreground, Qt.red)
            self.messageLabel.setPalette(self.palette)
            self.messageLabel.setText('Please enter valid a name and age')
            self.palette.setColor(QPalette.Foreground, Qt.black)
            resetMsgLabelThread.start()
            return
        self.palette.setColor(QPalette.Foreground, Qt.black)
        self.messageLabel.setPalette(self.palette)
        self.messageLabel.setText('Please scan the RFID tag of the new mouse...')
        self.t.setAddMouse(True)
        
        time.sleep(0.1)
        self.queue.put(age)
        time.sleep(0.1)
        self.queue.put(name)

        addMouseTimeout.start()
        t2 = threading.Thread(target = self.cancelBtnCallback, args=())

        self.mouseAdded = False


    def addMouseTimeoutCallback(self):
        timeout = 20;
        self.palette.setColor(QPalette.Foreground, Qt.black)
        self.messageLabel.setPalette(self.palette)
        for i in range(20):
            time.sleep(1)
            if not self.rfidQueue.empty():
                msg = self.rfidQueue.get()
                if msg[0] is '1' and msg[1] is '.':
                    self.messageLabel.setText('Mouse added : ' + str(msg))
                elif msg is 'Fail':
                    self.messageLabel.setText('No mouse was added, see console for details')
                time.sleep(7)
                self.messageLabel.setText('Program running normally')
                return
            self.messageLabel.setText('Please scan the mouse RFID: ' + str(timeout) + ' seconds left')
            timeout-=1
        self.t.setAddMouse(False)
        self.messageLabel.setText('Program running normally')

    def changeSpeed(self):
        self.ard.serialCom()

    def cancelBtnCallback(self):
        """ Callback function for the 'Cancel button'
        :return: None
        """
        print('Mouse adding cancelled. No new mouse was added to the database.')
        self.t.setAddMouse(False)
        self.rfidQueue.put('Fail')

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

    def isNumber(self, num):
        """ Function to verify if the input string is a number
        : return: Boolean
        """
        try:
            int(num)
            return True
        except ValueError:
            return False

    def reloadCallback(self):
        self.sps.openLocalData()

    def resetMsgLabel(self):
        time.sleep(7)
        self.palette.setColor(QPalette.Foreground, Qt.black)
        self.messageLabel.setPalette(self.palette)
        self.messageLabel.setText('Waiting for a mouse to be added')

    def stopWater(self):
        """ Callback function for the 'Stop water' button
        :return: None
        """
        self.ard.writePort('W0')
        self.messageLabel.setText('Water stopped')


class ReadThread(QThread):
    def __init__(self, spreadsheet, ard, queue, rfidQ):
        QThread.__init__(self)
        self.running = True
        self.emergency = False
        self.sps = spreadsheet
        self.ard = ard
        self.isAddMouse = False
        self.q = queue
        self.rfidQueue = rfidQ

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
                self.ard.ser.flushInput()            # Flush the input buffer
                if msg[0] is '1' and msg[1] is '.' and self.isAddMouse is False:   # It's an RFID tag
                    try:
                        mouse = self.sps.getMouseInfo(msg)
                        if mouse is 1:
                            trainingAllowed = self.sps.canMouseTrain()
                            print('Training allowed: ' + str(trainingAllowed and mouse))
                        elif mouse is 0:
                            print("The scanned mouse doesnt exist")
                        
                    except:
                        print('The scanned mouse doesnt exist')
                        
                    if mouse is 1:
                        if trainingAllowed is True:
                            packet = 'M1V' \
                                 + str(self.sps.trInfo[3]) + 'T' + str(self.sps.trInfo[2])
                            print("Packet sent to Arduino: " + str(packet))
                            self.ard.writePort(packet)
                            self.sps.updateWaterDeliveryTime()
                            self.sleep(1)

                        else:
                            packet = 'M0' 
                            print("Packet sent to Arduino: " + str(packet))
                            self.ard.writePort(packet)

                    else:
                        self.ard.writePort('M0')

                # This elif is executed when a new mouse is being added        
                elif self.isAddMouse is True:
                    print('\nAdding mouse new mouse')
                    self.isAddMouse = False
                    if not self.q.empty():
                        age = self.q.get()
                        print('Age: ' + str(age))
                    if not self.q.empty():
                        name = self.q.get()
                        print('Name: ' + str(name))

                    if msg and name and age:
                       added = self.sps.addMouseGoogle(msg, name, age)
                       if added == True:
                           self.rfidQueue.put(msg)
                       else:
                           self.rfidQueue.put('Fail')
                       self.ard.ser.flush()
                       self.q.queue.clear()
                    

                if msg == "EOTS":
                    print("Training was successful")
                    self.sps.updateMouseInfo()

                self.ard.ser.flushInput()


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
        rfidQueue = Queue.Queue()
        x = ReadThread(spreadsheet, arduino, queue, rfidQueue)
        print("Creating GUI...")
        gui = MainGui(spreadsheet, x, arduino, queue, rfidQueue)
        print('Program is ready')
        a.exec_()
    except:
        print("Error: Unable to open spreadsheet")


    # sys.exit(a.exec_())
    print('Program terminated')


#    a.exec()

if __name__ == '__main__':
    main()
 
