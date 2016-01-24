# -*- coding: utf-8 -*-
"""
Created on Sun Sep 27 15:49:30 2015

@author: Utilisateur
"""

import serial
import MainGui
import time

class Arduino():
    def __init__(self):
        """ Constructor for the Arduino object
        :return: None
        """
        
        self.ser = serial.Serial('/dev/ttyACM0', 9600)
        self.isa = False;
        
    def serialCom(self):
        """ Old function used to debug
        :return:
        """
        #TODO: Delete this function when not needed anymore
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
        import time
        timeout = time.time() + 5   # 5 minutes from now
        while True:
            message = ''
            message = self.ser.readline()[:-2]
            message = str(message)
            print(message)
            return message

        
    def writePort(self, packet):
        """ This function writes the input packet to the serial port
        :param packet: Information packet to send to serial port
        :return: None
        """
        self.ser.write(packet)

if __name__ == '__main__':
    MainGui.main()
