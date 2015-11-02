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
        
    def createLayout(self):
        print('Creating window')
        # Window setting
        self.mainLayout = QGridLayout()
        self.setLayout(self.mainLayout)
        
        # Arduino LED button setting
        self.ledBtn = QPushButton("Changer la vitesse")
        self.ledBtn.move(50,50)
        self.ledBtn.clicked.connect(self.changeSpeed)
        self.mainLayout.addWidget(self.ledBtn)
        
        # Arduino add mouse
        self.addMouseBtn = QPushButton('Ajouter souris')
        self.addMouseBtn.move(0, 0)
        self.addMouseBtn.clicked.connect(self.addMouse)
        self.mainLayout.addWidget(self.addMouseBtn)
        
        
        self.setWindowTitle('Arduino test')
        self.setGeometry(200, 200, 400, 200)
        self.show()
        
    def addMouse(self):
        self.ard.addMouse()
        
    def changeSpeed(self):
        self.ard.serialCom()
    

def main():
    a = QApplication(sys.argv)
    gui = MainGui()
    sys.exit(a.exec_())
    
if __name__ == '__main__':
    main()