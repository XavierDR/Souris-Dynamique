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


class MainGui(QWidget):
    def __init__(self):
        super(MainGui, self).__init__()
        self.ard = Arduino.Arduino()
        self.createLayout()
        
    def closeEvent(self, event):
        self.ard.closeSerial()
        
    def createLayout(self):
        # Window setting
        self.mainLayout = QGridLayout()
        self.setLayout(self.mainLayout)
        self.palette = QPalette()
        self.palette.setColor(QPalette.Foreground,Qt.red)
        
        # Labels
        self.nameLabel = QLabel('Name')
        self.nameLabel.setMaximumHeight(25)
        self.mainLayout.addWidget(self.nameLabel,0, 0)
        
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

        
        self.setWindowTitle("Mouse adding")
        self.setGeometry(200, 200, 400, 200)
        self.show()
        
    def addMouse(self):
        self.messageLabel.setPalette(self.palette)
        age = self.ageLineEdit.text()
        name = self.nameLineEdit.text()
        if age == 'Enter the age' or name == 'Enter the name here':
            self.messageLabel.setPalette(self.palette)
            self.messageLabel.setText('Please enter valid a name and age')
            self.palette.setColor(QPalette.Foreground,Qt.black)
            return
        self.messageLabel.setText('Please scan the RFID tag on of new mouse')
#        self.ard.addMouse()
        # Il devrait y avoir un retour du tag RFID de la souris ici
        self.messageLabel.setText('New mouse RFID: ')
        
        # addMouseGoogle(RFID, name, age)
        
    def changeSpeed(self):
        self.ard.serialCom()
        
    def closeWindow(self):
        self.ard.closeSerial()
        QCoreApplication.instance().quit()
        
    

def main():
    a = QApplication(sys.argv)
    gui = MainGui()
    sys.exit(a.exec_())
#    a.exec()
    
if __name__ == '__main__':
    main()