# -*- coding: utf-8 -*-
"""
Created on Sun Sep 27 15:49:30 2015

@author: Utilisateur
"""

import serial

class Arduino():
    def __init__(self):
        
        self.ser = serial.Serial('COM7', 9600)
        self.ledState = False;
        
    def serialCom(self):
        print 'In serial COM'
        if self.ledState == False:
            self.ledState = True
            self.ser.write('a')
        elif self.ledState == True:
            self.ledState = False
            self.ser.write('b')