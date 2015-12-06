import gspread
import time
import datetime
import json
import gspread
from oauth2client.client import SignedJwtAssertionCredentials

class CurrentMouse:

    """This class allows the manipulation of the mouse informations using Google Sheets interface"""

    def __init__(self):
        """ This is the constructor of the object Worksheet
        :param shtSum: Summary worksheet
        :param shtTrain: Training Worksheet
        :param shtHist: History Worksheet
        :param cmCell: Cell containing RFID tag of current mouse
        :param cmInfo: Informations for the current mouse (from Summary worksheet)
        :param trCell: Cell containing the current training
        :param trInfo: Informations for the current training (from Training worksheet)
        :param trainingList: List of all the possible trainings
        :param trainingListRep: Number of repetitions for all trainings
        :return: none
        """
        self.shtSum = ""        # Worksheet Summary
        self.shtTrain = ""    # Worksheet Trainings
        self.shtHist = ""      # Worksheet History

        self.cmCell = ""            # Cell containing RFID tag of current mouse
        self.cmInfo = ""            # Information for the current mouse (from worksheet Summary)
        self.trCell = ""            # Cell containing the current training
        self.trInfo = ""            # Information for the current training (from worksheet trainings)
        self.trainingList = ""
        self.trainingListRep = ""

    def spreadsheetOpen(self, jsonName, sheetName):
        """
        :param jsonName: Name of the Json file (for linking google sheets)
        :param sheetName: Name of the spreadsheet
        :return: none
        """

        # Opening the google spreadsheet
        json_key = json.load(open(jsonName))
        scope = ['https://spreadsheets.google.com/feeds']

        credentials = SignedJwtAssertionCredentials(json_key['client_email'], bytes(json_key['private_key'], 'utf-8'), scope)
        gc = gspread.authorize(credentials)

        wks = gc.open(sheetName)

        # Opening the 3 worksheets from the spreadsheet
        self.shtSum = wks.worksheet("Summary")
        self.shtHist = wks.worksheet("History")
        self.shtTrain = wks.worksheet("Trainings")

        # Getting all training names and number of repetitions
        self.trainingList = self.shtTrain.col_values(1)
        self.trainingListRep = self.shtTrain.col_values(2)

    def addMouseGoogle(self, tagRFID, mouseName, age):
        """ This function allows to add a new mouse to the Google Spread Sheet
        :param tagRFID: RFID scanned. Info coming from Arduino
        :param mouseName: Name of the new mouse, entered in the Python interface by user
        :param age: Age of the new mouse, entered in the Python interface by user
        :return: none
        """

        # The total number of mice is necessary to add the new mouse to the good line in the Google Sheet
        # This total number of mice is calculated inside the google spreadsheet
        numberOfMice = int(self.shtSum.cell(1, 2).value)+1

        # We need to add info on the range A# to I#
        cellRange = 'A' + str(numberOfMice + 3) + ':I' + str(numberOfMice + 3)

        # Updating cells
        updateCellList = self.shtSum.range(cellRange)
        updateCellList[0].value = mouseName                 # Mouse name (from GUI)
        updateCellList[1].value = age                       # Mouse age (from GUI)
        updateCellList[2].value = tagRFID                   # Mouse RFID tag (from GUI)
        updateCellList[3].value = self.trainingList[1]      # New mouse = first training
        updateCellList[4].value = self.trainingListRep[1]   # Number of repetitions of the first training
        updateCellList[5].value = self.trainingListRep[1]   # Number of repetitions remaining = total number of reps)
        updateCellList[6].value = "00:00:00:00"             # Total training time
        updateCellList[7].value = 0                         # Total training distance
        updateCellList[8].value = 0                         # Total number of trainings
        self.shtSum.update_cells(updateCellList)            # UPDATING ALL RANGE

        self.shtHist.update_cell(1, numberOfMice*2-1, mouseName)    # Adding the mouse to the history worksheet


    def getMouseInfo(self, tagRFID):
        """ This allows to fetch mouse information from the Google Spreadsheet
        :param tagRFID: The RFID tag of the mouse currently on the treadmill
        :return: none
        """
        # Making sure the mouse exists
        try:
            self.cmCell = self.shtSum.find(tagRFID)    # Find cell containing the RFID tag of the current mouse
        except:
            return False

        # Getting information in the row corresponding to the current mouse
        self.cmInfo = self.shtSum.row_values(self.cmCell.row)  # Fetch info for the current mouse
        training = self.cmInfo[3]

        # Getting information corresponding to the training of the current mouse
        self.trCell = self.shtTrain.find(training)  # This returns the cell containing training name text
        self.trInfo = self.shtTrain.row_values(self.trCell.row)
        return True

    def canMouseTrain(self):
        # Checking if the mouse is allowed to train
        print(time.time()-float(self.cmInfo[9]))
        if (time.time()-float(self.cmInfo[9])) > 20:
            return True
        else:
            return False

    def updateMouseInfo(self, realTrainingTime=0):
        """ This allows to update the different worksheet once training is over
        :return: none
        """
        # Updating worksheet Summary
        cellRange = 'F' + str(self.cmCell.row) + ':J' + str(self.cmCell.row)
        updateCellList = self.shtSum.range(cellRange)
        updateCellList[0].value = int(self.cmInfo[5]) - 1                # Repetitions remaining

        # Converting DD:HH:MM:SS format to seconds, adding training time and converting back to DD:HH:MM:SS
        ts = self.cmInfo[6].split(":")
        s = int(ts[0])*86400+int(ts[1])*3600+int(ts[2])*60+int(ts[3])

        # In case the training was stopped before the end of the training, only add the real training time to the
        # spreadsheet
        if realTrainingTime == 0:       # If training complete
            s += int(self.trInfo[2])
        else:                           # If training stopped before the end
            s += int(realTrainingTime)

        # Formatting time into DD:HH:MM:SS format
        totalTimeStr = '{:02}:{:02}:{:02}:{:02}'.format(s // 86400, s % 86400 // 3600, s % 3600 // 60, s % 60)

        # Updating cells
        updateCellList[1].value = totalTimeStr                                  # Training time
        updateCellList[2].value = float(self.cmInfo[7]) + float(self.trInfo[4])     # Approximate distance
        updateCellList[3].value = int(self.cmInfo[8]) + 1                       # Total number of trainings
        updateCellList[4].value = int(time.time())                              # Epoch time to check if mouse can train
        # Updating the google sheet
        self.shtSum.update_cells(updateCellList)

        # Updating worksheet History
        cmCellHist = self.shtHist.find(self.cmInfo[0])      # Finding the current mouse
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
