# -*- coding: utf-8 -*-
"""
Created on Sun Sep 27 15:49:30 2015

@author: Utilisateur
"""

import serial
import PacketTest

class Arduino():
    def __init__(self):
        
        self.ser = serial.Serial('COM6', 115200)
        self.isa = False;
        
    def serialCom(self):
        print('In serial COM')
        if self.isa == False:
            self.isa = True
            print(self.isa)
            self.ser.write(b'a')
#            print('a')
        elif self.isa == True:
            self.isa = False
            self.ser.write(b'b')
#            print('b')
            
    def addMouse(self):
        print('Adding new mouse...')
        self.writePort('c')
        
    def closeSerial(self):
        self.ser.close()
        
    def readPort(self):
        print('In read port')
        return self.ser.read(self,20)
        
    def writePort(self, packet):
        self.ser.write(bytes(packet, 'utf8'))
        while True:
            message = self.ser.readline()[:-2]
            message = str(message, 'utf-8')
            if message:
                print(message)
                return message
            
if __name__ == '__main__':
    PacketTest.main()