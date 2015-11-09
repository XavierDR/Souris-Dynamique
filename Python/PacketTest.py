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
        self.packetBtn = QPushButton("Envoyer packet")
        self.packetBtn.move(50,50)
        self.packetBtn.clicked.connect(self.sendPacket)
        self.mainLayout.addWidget(self.packetBtn)
        
        
        self.setWindowTitle('Packet test')
        self.setGeometry(200, 200, 400, 200)
        self.show()
        
    def sendPacket(self):
        self.ard.writePort('R199M4')

    

def main():
    a = QApplication(sys.argv)
    gui = MainGui()
    sys.exit(a.exec_())
    
if __name__ == '__main__':
    main()