# -*- coding: utf-8 -*-
"""
Created on Sun Sep 27 15:49:30 2015

@author: Utilisateur
"""

import serial
import MainGui
import time
import sys

class Arduino():
    def __init__(self):
        """ Constructor for the Arduino object
        :return: None
        """
        try:
            self.ser = serial.Serial('/dev/ttyACM0', 9600)
        except:
            print('Cannot open serial port \n Please reconnect the arduino usb cable to the Raspberry Pi')
            sys.exit(0)
            
        self.isAdd = False;
        
            
    def addMouse(self):
        """ This function sends the command 'c' to the arduino,
            that will engage in a RFID reading loop until it
            reads a tag.
        :return: The new mouse RFID
        """
        print('Adding new mouse...')
        self.writePort('c')
        newMouse = self.readPort()
        return newMouse
        
    def closeSerial(self):
        """ This function closes the serial port
        :return: None
        """
        self.ser.close()
        
    def readPort(self):
        """ This function enters a loop to read input from the serial
            port. a 5 second timeout is generated
        :return: Returns the data received from the serial port
        """
        # TODO: Trouver une facon de mettre un vrai timeout sur readline
        print('Reading port...')
        self.ser.flush()
        while True:
            message = ''
            message = self.ser.readline()[:-2]
            message = str(message)
            print(message)
            return message

    def readNow(self):
        message = ''
        message = self.ser.readline()[:-2]
        message = str(message)
        print(message)
        self.ser.flush()
        return message

        
    def writePort(self, packet):
        """ This function writes the input packet to the serial port
        :param packet: Information packet to send to serial port
        :return: None
        """
        self.ser.write(packet)

if __name__ == '__main__':
    MainGui.main()
