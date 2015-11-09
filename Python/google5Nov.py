import time
from WksObj import WksObj


jsonName = 'SourisDynamique-a348c1bc1c12.json'
worksheetName = "InterfaceSouris"

# Read RFID tag
tagRFID = "102.25.215.255"



time1 = time.time()
mouse = WksObj()
time2 = time.time()
mouse.mouseOpen(jsonName, worksheetName)
time3 = time.time()
mouse.getMouseInfo(tagRFID)
time4 = time.time()
mouse.updateMouseInfo()
time5 =time.time()

print("Creation objet:", time2-time1)
print("Ouverture spreadsheet", time3-time2)
print("Get info", time4-time3)
print("Update info",time5-time4)