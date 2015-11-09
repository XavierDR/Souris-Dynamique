# -*- coding: utf-8 -*-
"""
Created on Sun Sep 27 15:49:30 2015

@author: Utilisateur
"""

import serial

class Arduino():
    def __init__(self):
        
        self.ser = serial.Serial('COM6', 9600)
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
        self.ser.write(b'c')
        
    def readPort(self):
        print('In read port')
        return self.ser.read(self,20)
        
    def writePort(self, packet):
        self.ser.write(bytes(packet, 'utf8'))
        print('After the write')
        while True:
            print('Before reading')
            print(self.ser.read(1))
            print('in the while')
            if(message != ''):
                print(message)
            else: 
                print('Not receiving')