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
            print('a')
        elif self.isa == True:
            self.isa = False
            self.ser.write(b'b')
            print('b')