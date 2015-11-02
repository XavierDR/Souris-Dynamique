import json
import gspread
import datetime
import time
from oauth2client.client import SignedJwtAssertionCredentials

json_key = json.load(open('SourisDynamique-a348c1bc1c12.json'))
scope = ['https://spreadsheets.google.com/feeds']

credentials = SignedJwtAssertionCredentials(json_key['client_email'], bytes(json_key['private_key'], 'utf-8'), scope)

gc = gspread.authorize(credentials)

wks = gc.open("InterfaceSouris")
shtSum = wks.worksheet("Summary")
shtHist = wks.worksheet("History")
shtTrain = wks.worksheet("Trainings")


# Read RFID tag
tagRFID = "102.25.215.255"

# cm stands for Current Mouse
cmCell = shtSum.find(tagRFID)    # Find cell containing the RFID tag of the current mouse
cmInfo = shtSum.row_values(cmCell.row)  # Fetch info for the current mouse
cmName = cmInfo[0]
cmTraining = cmInfo[3]
cmTotRep = int(cmInfo[4])
cmRepRem = int(cmInfo[5])
cmTrTime = int(cmInfo[6])
cmTrDist = int(cmInfo[7])
cmTotNbTr = int(cmInfo[8])

# Fetch info for the training associated to the current mouse

ctCell = shtTrain.find(cmTraining)  # This returns the cell containing training name text
ctInfo = shtTrain.row_values(ctCell.row)
ctTime = int(ctInfo[2])  # TODO: Convert time in HH:MM:SS format to int
ctSpeed = float(ctInfo[3])
ctAprxDist = int(ctInfo[4])
ctWaterBool = ctInfo[5]
ctWaterInterv = int(ctInfo[6])

# Read both touch sensors
touchSensLeft = 1
touchSensRight = 1

# Once the mouse has activated both touch sensors, proceed with following block
if touchSensLeft == 1 and touchSensRight == 1:

    # Activate both actuators for head fixation

    print("Current mouse: ", cmName)
    print("Current training: ", cmTraining)

    # Give water (wait for x seconds?)
    print("Give water? (", ctWaterBool, ") at ", ctWaterInterv, " seconds intervals")
    # Start treadmill for duration = ctTime at speed = ctSpeed
    print("Treadmill started at", ctSpeed, "m/s for", ctTime, "seconds")

    # Pause the program for ctTime seconds.

    # Release pressure in actuators

    # Apply timeout for current mouse to make sure another training session doesn't start
    # TODO: System to make sure a mouse can't run twice in a row

    print("Training completed")

    # Updating worksheet Summary
    cellRange = 'F' + str(cmCell.row) + ':I' + str(cmCell.row)
    updateCellList = shtSum.range(cellRange)
    updateCellList[0].value = cmRepRem - 1
    updateCellList[1].value = cmTrTime + ctTime   # TODO: Convert time from int to HH:MM:SS format
    updateCellList[2].value = cmTrDist + ctAprxDist
    updateCellList[3].value = cmTotNbTr + 1

    shtSum.update_cells(updateCellList)

    # Updating worksheet History
    cmCellHist = shtHist.find(cmName)
    shtHist.update_cell(cmTotNbTr+3, cmCellHist.col, datetime.datetime.now().strftime("%m/%d/%y at %H:%M:%S"))
    shtHist.update_cell(cmTotNbTr+3, cmCellHist.col+1, cmTraining)

    # Change training if current training is over
    if cmRepRem == 1:
        cellRange = 'D' + str(cmCell.row) + ':F' + str(cmCell.row)
        updateCellList = shtSum.range(cellRange)

        newTraining = shtTrain.row_values(ctCell.row + 1)
        updateCellList[0].value = newTraining[0]
        updateCellList[1].value = newTraining[1]
        updateCellList[2].value = newTraining[1]

        shtSum.update_cells(updateCellList)
# TODO: Last training
# TODO: Error management
# TODO: By Alex: Use objects and or functions for worksheets
# TODO: By Xavier: Try to add touch sensors to the program. Maybe look into packets?
