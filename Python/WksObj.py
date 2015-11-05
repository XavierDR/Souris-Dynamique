import gspread
import datetime
import json
import gspread
from oauth2client.client import SignedJwtAssertionCredentials

class WksObj:

    """This class allows the manipulation of the Google Spreadsheet"""

    def __init__(self):
        """ This is the constructor of the object Worksheet
        :param shtSum: Summary worksheet
        :param shtTrain: Training Worksheet
        :param shtHist: History Worksheet
        :return: none
        """
        self.shtSum = ""        # Worksheet Summary
        self.shtTrain = ""    # Worksheet Trainings
        self.shtHist = ""      # Worksheet History
        self.cmCell = ""            # Cell containing RFID tag of current mouse
        self.cmInfo = ""            # Information for the current mouse (from worksheet Summary)
        self.trCell = ""            # Cell containing the current training
        self.trInfo = ""            # Information for the current training (from worksheet trainings)

    def mouseOpen(self, jsonName, sheetName):
        json_key = json.load(open(jsonName))
        scope = ['https://spreadsheets.google.com/feeds']

        credentials = SignedJwtAssertionCredentials(json_key['client_email'], bytes(json_key['private_key'], 'utf-8'), scope)
        gc = gspread.authorize(credentials)

        wks = gc.open(sheetName)
        self.shtSum = wks.worksheet("Summary")
        self.shtHist = wks.worksheet("History")
        self.shtTrain = wks.worksheet("Trainings")

    def getMouseInfo(self, tagRFID):
        """ This allows to fetch mouse information from the Google Spreadsheet
        :param tagRFID: The RFID tag of the mouse currently on the treadmill
        :return: none
        """
        self.cmCell = self.shtSum.find(tagRFID)    # Find cell containing the RFID tag of the current mouse
        self.cmInfo = self.shtSum.row_values(self.cmCell.row)  # Fetch info for the current mouse
        training = self.cmInfo[3]

        self.trCell = self.shtTrain.find(training)  # This returns the cell containing training name text
        self.trInfo = self.shtTrain.row_values(self.trCell.row)

    def updateMouseInfo(self):
        """ This allows to update the different worksheet once training is over
        :return: none
        """
        # Updating worksheet Summary
        cellRange = 'F' + str(self.cmCell.row) + ':I' + str(self.cmCell.row)
        updateCellList = self.shtSum.range(cellRange)
        updateCellList[0].value = int(self.cmInfo[5]) - 1                # Repetitions remaining

        # Converting DD:HH:MM:SS format to seconds, adding training time and converting back to DD:HH:MM:SS
        ts = self.cmInfo[6].split(":")
        s = int(ts[0])*86400+int(ts[1])*3600+int(ts[2])*60+int(ts[3])
        s += int(self.trInfo[2])
        totalTimeStr = '{:02}:{:02}:{:02}:{:02}'.format(s // 86400, s % 86400 // 3600, s % 3600 // 60, s % 60)

        updateCellList[1].value = totalTimeStr
        updateCellList[2].value = int(self.cmInfo[7]) + int(self.trInfo[4])   # Approximate distance
        updateCellList[3].value = int(self.cmInfo[8]) + 1                # Total number of trainings

        self.shtSum.update_cells(updateCellList)

        # Updating worksheet History
        cmCellHist = self.shtHist.find(self.cmInfo[0])
        self.shtHist.update_cell(int(self.cmInfo[8])+3, cmCellHist.col, datetime.datetime.now().strftime("%m/%d/%y at %H:%M:%S"))
        self.shtHist.update_cell(int(self.cmInfo[8])+3, cmCellHist.col+1, self.cmInfo[3])

        # Change training if current training is over
        if int(self.cmInfo[5]) == 1:
            cellRange = 'D' + str(self.cmCell.row) + ':F' + str(self.cmCell.row)
            updateCellList = self.shtSum.range(cellRange)

            newTraining = self.shtTrain.row_values(self.trCell.row + 1)
            updateCellList[0].value = newTraining[0]
            updateCellList[1].value = newTraining[1]
            updateCellList[2].value = newTraining[1]

            self.shtSum.update_cells(updateCellList)
