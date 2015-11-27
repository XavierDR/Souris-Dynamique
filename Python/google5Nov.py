import time
from CurrentMouse import CurrentMouse


jsonName = 'SourisDynamique-a348c1bc1c12.json'
worksheetName = "InterfaceSouris"

# Read RFID tag
tagRFID = "12345"



# time1 = time.time()
mouse = CurrentMouse()
# time2 = time.time()
mouse.spreadsheetOpen(jsonName, worksheetName)
# time3 = time.time()
# mouse.getMouseInfo(tagRFID)
# time4 = time.time()
# mouse.updateMouseInfo()
# time5 = time.time()
mouse.addMouseGoogle("123456", "Mouse4", 3)
print("ALLO")
# time6 = time.time()

# print("Creation objet:", time2-time1)
# print("Ouverture spreadsheet", time3-time2)
# print("Get info", time4-time3)
# print("Update info",time5-time4)
# print("Adding new mouse",time6-time5)

#TODO: LAST TRAINING, WHAT'S UP WITH IT

#TODO: TIMER TO STOP
# from threading import Timer
#
# def hello():
#     print "hello, world"
#
# t = Timer(30.0, hello)
# t.start() # after 30 seconds, "hello, world" will be printed