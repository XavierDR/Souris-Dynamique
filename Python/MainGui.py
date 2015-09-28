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
        print 'Creating window'
        # Window setting
        self.mainLayout = QGridLayout()
        self.setLayout(self.mainLayout)
        # Arduino LED button setting
        self.ledBtn = QPushButton("Activer/Desactivé LED")
        self.ledBtn.move(50,50)
        self.ledBtn.clicked.connect(self.activateLED)
        self.mainLayout.addWidget(self.ledBtn)
        
        
        self.setWindowTitle('Arduino test')
        self.setGeometry(200, 200, 400, 200)
        self.show()
        
    def activateLED(self):
        self.ard.serialCom()
    

def main():
    a = QApplication(sys.argv)
    gui = MainGui()
    sys.exit(a.exec_())
    
if __name__ == '__main__':
    main()