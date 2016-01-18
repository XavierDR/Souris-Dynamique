import time
import gspread
from CurrentMouse import CurrentMouse


jsonName = 'SourisDynamique-a348c1bc1c12.json'
worksheetName = "InterfaceSouris"

# Read RFID tag
tagRFID = "1.9.12.110.114.72.21.50.93.17.7.61"

mouse = CurrentMouse()
mouse.spreadsheetOpen(jsonName, worksheetName)

mouse.getMouseInfo(tagRFID)
mouse.updateMouseInfo()
mouse.getMouseInfo(tagRFID)
if mouse.canMouseTrain() == True:
    print("Mouse can train")
else:
    print("Training not available")

#TODO: LAST TRAINING, WHAT'S UP WITH IT

#TODO: TIMER TO STOP
# from threading import Timer
#
# def hello():
#     print "hello, world"
#
# t = Timer(30.0, hello)
# t.start() # after 30 seconds, "hello, world" will be printed