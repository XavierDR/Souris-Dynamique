import time
from WksObj import WksObj


jsonName = 'SourisDynamique-a348c1bc1c12.json'
worksheetName = "InterfaceSouris"

# Read RFID tag
tagRFID = "102.25.215.255"


mouse = WksObj()
mouse.mouseOpen(jsonName, worksheetName)
mouse.getMouseInfo(tagRFID)
mouse.updateMouseInfo()

