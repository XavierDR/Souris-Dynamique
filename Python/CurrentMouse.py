import gspread
import time
import datetime
import json
import gspread
import oauth2client
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
        self.localData = ""
        self.timeoutTime = ""

    def spreadsheetOpen(self, jsonName, sheetName):
        """
        :param jsonName: Name of the Json file (for linking google sheets)
        :param sheetName: Name of the spreadsheet
        :return: none
        """
        # Trying to bypass opening the json file in order to facilitate .exe making
        # Opening the google spreadsheet
        #json_key = json.load(open(jsonName))
        #scope = ['https://spreadsheets.google.com/feeds']
        #credentials = SignedJwtAssertionCredentials(json_key['client_email'], bytes(json_key['private_key'], 'utf-8'), scope)
        #gc = gspread.authorize(credentials)
        #wks = gc.open(sheetName)

        json_key = {'client_id': '383307907019-e6mpmmj8j93borqh0tq5885ro6t2bqg2.apps.googleusercontent.com', 'private_key': '-----BEGIN PRIVATE KEY-----\nMIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQCyeoOX5Tm5183m\nVkI5zm5khio3yg/7wUlhXOsiay+zQY5Dt7vYdY8kY+ddVe6fbpGCjIb/vr7JVmE3\njMir+la5L5xt8MiGzFJwQiE/InQrt1th96HdMHzakoR8dFmMUceSuy3Nq8touQYt\nzPGHnXgqtvn3sSVasVNNc0Kvm4PzwBmPc/3JrPr1493wQg84BieABKJqlgyFpE+l\nC60lMFVkKvvbeiSeV3mYFa/ZUZXQw8kSqxjyVWqpIZ3W1DUi9xoKf1i9xqsacizP\nu2OR/fZ7XVVuHPNEkRJogz8dPgYhS1XGkzzi57mk1TmXU3TlDEiuX+9ZesBqTinl\n5m988qhLAgMBAAECggEAfXrdIeGrIBm1TQfAL9wOiOY6sFaDvkA6UxV8ywoI00J3\nvuxiSOD97lu+wkQ0LCsUanBaSVvVzr/IQcHdI+wxJKlwlWr/0KW+H+aecUDL5CBZ\nQxtS1avNW+4+7zDt9FVatrKalUr/C3Vp/rFj7jCr13wlahtFY+nf40fxznzL3IY5\nsyNpawi+EEaMuE4vc1IhnpiJz8BAj12lNqrDEuyLldSMfrAxZzD5c4mRuojJ90Ju\nDGswFHYnzXv1RdCQydZn49HU2hrYG5o753hCX0lnEf0L7d6ErT+P6SA4lL87CwX+\nyc5LiJb65qY4l1g8leZJKNxHtYlmSwxrj6ZnoIGOYQKBgQDdUeifOl7UvI581J+z\npg9njcV8TPbl2K8y5RIw6s1ifvj6pvjatZfGJvKoWiny6yzFJhhBnOW7Xqll8ens\nTIgXl04SAitt1BHgzoTe9QB4iFTAayMxb0oZINH1jiBVYu3JfKb2VvP+KjDu0wob\neQLY/xvYjVL53vkKVX6w8f0x/QKBgQDOcg3MwXmz2lJlUI5VyJUAtBLgSStn7YdS\nYALD6e/sxTx7SV6kCBJZV6azSe+sUdG/GjFirl1qPhHiDf9Wq4BEpLLFz5ZtOJWM\nd7BikYBmwC8brHzjQnDhzrnKKjJ4nXfI33aXXCJLddXKGjkD0y93joWUmSrBKd1S\nFEW+0MfR5wKBgQC5AATRRLuMXGlG030DcGYkC4/uzW78xln80xqXpU41bSm2a+hM\n+cp6qofgTi4OjqMH0UYpYntuWjyDqOn+yiJgheuOhh3DWqfvIPJUZLwWBO/DQEtU\nwVBRHOwktL82YNGfwQDXneuqo53vpJ0oRckplmWyaL/Zepb2Gm0if8VECQKBgQDJ\n4/og4pi9TWXE1OnNdJJbFL9c/dFoGn97DI/HvlC3MQ/71X2rVoVzP+ezcDvmPkGr\n7NadFb4fN0JP2rZ5sNCI0LRQBLmsaGi/7RDe5EI4ufuXybB8oy43de51iZzAHebV\n18tnLGARgdQoiEp3tiC2f/ecocmRC/r32QF4IT84wwKBgQDR2xeZe9wqzH/s+c9K\ntDogpbEbQBq/WIKZjPPiTpARWx+88/EIj+0UkHPnEvcuVGqWtkIe+dT4a0N2xfil\n8+zZPzBXTIZ2COyLlJ+ye7X9FvnZXLMDe4C247ExjX3JpLVpqdX+ZHgzze7vOVO+\n0fipZMiR+sz5Z9ldSDMkd9gDkg==\n-----END PRIVATE KEY-----\n', 'client_email': '383307907019-e6mpmmj8j93borqh0tq5885ro6t2bqg2@developer.gserviceaccount.com', 'type': 'service_account', 'private_key_id': 'a348c1bc1c129bc9fbef6a1a6b8144a802a722d5'}
        scope = ['https://spreadsheets.google.com/feeds']
        credentials = SignedJwtAssertionCredentials(json_key['client_email'], json_key['private_key'].encode(), scope)
        gc = gspread.authorize(credentials)
        wks = gc.open(sheetName)


        # Opening the 3 worksheets from the spreadsheet
        self.shtSum = wks.worksheet("Summary")
        self.shtHist = wks.worksheet("History")
        self.shtTrain = wks.worksheet("Trainings")

        # Getting all training names and number of repetitions
        self.trainingList = self.shtTrain.col_values(1)
        self.trainingListRep = self.shtTrain.col_values(2)

        self.openLocalData()

    def addMouseGoogle(self, tagRFID, mouseName, age):
        """ This function allows to add a new mouse to the Google Spread Sheet
        :param tagRFID: RFID scanned. Info coming from Arduino
        :param mouseName: Name of the new mouse, entered in the Python interface by user
        :param age: Age of the new mouse, entered in the Python interface by user
        :return: none
        """

        # Getting all training names and number of repetitions in case of updates to training list
        self.trainingList = self.shtTrain.col_values(1)
        self.trainingListRep = self.shtTrain.col_values(2)

        if tagRFID in self.localData:
            print("Mouse already exists. If you want to replace it, please delete data manually")
            return False
        else:
            # The total number of mice is necessary to add the new mouse to the good line in the Google Sheet
            # This total number of mice is calculated inside the google spreadsheet
            numberOfMice = int(self.shtSum.cell(1, 2).value)+1

            # We need to add info on the range A# to I#
            cellRange = 'A' + str(numberOfMice + 3) + ':J' + str(numberOfMice + 3)

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
            updateCellList[9].value = 0
            self.shtSum.update_cells(updateCellList)            # UPDATING ALL RANGE

            self.shtHist.update_cell(1, numberOfMice*2-1, mouseName)    # Adding the mouse to the history worksheet

            self.localData[tagRFID] = 0        # update local data, last training stamp set at 0 so it can train immediately
            return True

    def getMouseInfo(self, tagRFID):
        """ This allows to fetch mouse information from the Google Spreadsheet
        :param tagRFID: The RFID tag of the mouse currently on the treadmill
        :return: none
        """
        print("Getting mouse info from Google Sheets")
        
        # Making sure the mouse exists
        try:
            self.cmCell = self.shtSum.find(tagRFID)    # Find cell containing the RFID tag of the current mouse
        except:
            return 0

        # Getting information in the row corresponding to the current mouse
        self.cmInfo = self.shtSum.row_values(self.cmCell.row)  # Fetch info for the current mouse
        training = self.cmInfo[3]

        try:
            # Getting information corresponding to the training of the current mouse
            self.trCell = self.shtTrain.find(training)  # This returns the cell containing training name text
            self.trInfo = self.shtTrain.row_values(self.trCell.row)
            return 1
        except:
            print("Unable to find corresponding training. Check Google Sheets to fix the problem")
            return -1

    def canMouseTrain(self):
        print("Checking if timeout between training is over")
        # Checking if the mouse is allowed to train
        timeSinceLast = time.time()-float(self.cmInfo[9])
        print("Time since last training: " + str(timeSinceLast))
        if timeSinceLast > self.timeoutTime:
            return True
        else:
            return False

    def canMouseTrainV2(self,tagRFID):

        # Checking if the mouse exists
        if (tagRFID in self.localData):
            # Checking if the mouse is allowed to train
            print("Time since last training:" + str(time.time()-float(self.localData[tagRFID])))
            if (time.time()-float(self.localData[tagRFID])) > self.timeoutTime:
                return True
            else:
                return False

        else:
            print("Mouse doesn't exist!")
            return False

    def updateWaterDeliveryTime(self):
        print("Updating water delivery time with epoch time")
        self.shtSum.update_cell(self.cmCell.row, 10, time.time())



    def updateMouseInfo(self, realTrainingTime=0):
        """ This allows to update the different worksheet once training is over
        :return: none
        """
        print("Updating mouse info on the Google Sheets")
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
        updateTime = time.time()
        updateCellList[4].value = int(updateTime)                              # Epoch time to check if mouse can train
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

        self.localData[self.cmInfo[2]] = updateTime


    def openLocalData(self):

        self.timeoutTime = float(self.shtSum.acell('D1').value)
        localRFID = self.shtSum.col_values(3)       # Get all RFID tags
        localTime = self.shtSum.col_values(10)
        localRFID[:] = (value for value in localRFID if value != '')    # Remove empty cells
        localTime[:] = (value for value in localTime if value != '')
        localRFID.pop(0)        # Remove the Timeout between training text
        localRFID.pop(0)        # Remove the header text "RFID tag"
        localTime.pop(0)

        self.localData = dict(zip(localRFID,localTime))
