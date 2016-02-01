import time
import gspread
import json

from CurrentMouse import CurrentMouse


jsonName = 'SourisDynamique-a348c1bc1c12.json'
worksheetName = "InterfaceSouris"

# Read RFID tag
tagRFID = "1.9.12.110.114.72.21.50.93.17.7.61"

mouse = CurrentMouse()
mouse.spreadsheetOpen(jsonName, worksheetName)

mouse.getMouseInfo(tagRFID)

mouse.addMouseGoogle("1.2.3.4.5","Alex",2)


print(mouse.localData)
print(mouse.localData[tagRFID])