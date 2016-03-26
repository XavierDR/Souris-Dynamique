// Motor variables
char msg;
int rev = 48;   //Pin
int m0 = 50;
int m1 = 52;

// RFID variables
int incomingByte = 0;
const int DEFAULT_SIZE = 12;
int mouse [] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int souris3 [12];
int i = 0;

// Sensor variables
int button1 = A1;
int button2 = A3;

// Relay variables
int relay1 = 39;  // Blanc
int relay2 = 38;  // Orange

// Linear Motor variables
int linearMotor = 10;

int pumpMotor = 8;

void setup() {
  Serial1 .begin(9600);
  Serial.begin(9600);

  // Motor initializations
  pinMode(rev, OUTPUT);
  pinMode(m0, OUTPUT);
  pinMode(m1, OUTPUT);

  // Relay initialization
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);

  // Debug LED initialization
  pinMode(13, OUTPUT);

  // Linear motor initialization
  pinMode(linearMotor, OUTPUT);

  // Press buttons initialization
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  // Setting the motor to OFF and releasing pistons
  digitalWrite(rev, HIGH);
  analogWrite(linearMotor, 5);
  releasePistons();
  setMotorSpeed(0);

}

void loop() {

  // Checking if it receives input from physical serial port ()
  if (Serial1.available() > 0) {    //Read RF-ID output
    idMice();
  }

  // Checking to see if it receives input from software serial port (Python scripts)
  if (Serial.available() > 0) {     // Checks to see if there is any computer input;
    msg = Serial.read();

    if (msg == 'W') {
      fillWaterPump();
    }
    else if (msg == 'c') {
      addMouse();
    }
    else if (msg == 'M') {
      mouseReadyForTraining();
    }
    else if (msg == 'P') {
      pistonTest();
    }
    else if (msg == 'T') {
      motorTest();
    }
    else if (msg == 'L') {
      linearMotorTest();
    }
  }
}

// Activate the pistons to trap the mouse
void activatePistons() {
  digitalWrite(relay2, LOW);
  delay(40);                  // To make sure the 2nd valve closes before valve 1 opens
  digitalWrite(relay1, HIGH);
}


// This function waits for and RFID tag to be scanned. It is made to add
// a new mouse RFID tag by sending it to Python.
void addMouse() {
  serialFlush();
  while (mouse[11] == 0) {
    incomingByte = Serial1.read();
    if (incomingByte == 1)
    {
      mouse[0] = 1;
      i = 1;
      while (mouse[11] == 0)
      {
        if (Serial1.available() > 0)
        {
          incomingByte = Serial1.read();
          mouse[i] = incomingByte;
          i += 1;
        }
      }
      // We now need to send the RFID value to Python.
      // A conversion from int[] to char[] is needed
      String str;
      for (int i = 0; i < 12 ; i++) {
        str += String(mouse[i]) + ".";
      }

      str.remove(str.length() - 1);
      sendPacket(str);
    }
  }
  for (int i = 0 ; i < 12; i++) {
    mouse[i] = 0;
  }
}

// This function compares two arrays and returns true if
// the arrays are equal
boolean arrayCompare(int a[], int b[], int len_a, int len_b) {
  int n;

  // if their lengths are different, return false
  if (len_a != len_b) return false;

  // test each element to be the same. if not, return false
  for (n = 0; n < len_a; n++) if (a[n] != b[n]) {
      return false;
    }

  //ok, if we have not returned yet, they are equal :)
  return true;
}


// This function reads the hardware serial port (Serial1) and identifies
// a specific mic, then prints it the software serial port
void idMice() {
  incomingByte = Serial1.read();
  if (incomingByte == 1)
  {
    mouse[0] = 1;
    i = 1;
    while (mouse[11] == 0)
    {
      if (Serial1.available() > 0)
      {
        incomingByte = Serial1.read();
        mouse[i] = incomingByte;
        i += 1;
      }
    }
    // We now need to send the RFID value to Python.
    // A conversion from int[] to char[] is needed
    String str;
    for (int i = 0; i < 12 ; i++) {
      str += String(mouse[i]) + ".";
    }

    str.remove(str.length() - 1);
    sendPacket(str);
  }
  for (int i = 0 ; i < 12; i++) {
    mouse[i] = 0;
  }
  i = 0;

  delay(1500); // Why is this here?
}

// This function makes sure the mouse is ready for training by reading the confirmation
// boolean that is sent after 'M' in the packet. In then read the speed and time values
// and trains the mouse according to those.
void mouseReadyForTraining() {
  int code = Serial.parseInt();
  if (code == 1) {        // The mouse can start its training
    releaseWaterV3(8);                    // Indicate number of droplets/increments
    if (Serial.available() > 0) {
      char msg = Serial.read();
      if (msg == 'V') {
        code = Serial.parseInt();
        if (Serial.available() > 0) {
          if (Serial.read() == 'T') {
            int trainingTime = Serial.parseInt() * 1000;
            bool expired = 0;
            int timeout = 10000;
            unsigned long timer = millis();
            while ( (digitalRead(button1) == LOW || digitalRead(button2) == LOW ) && expired == 0) { // Alex: I changed it from buton1 && button2 to button1 || button2
              if (millis() - timer > timeout) {
                expired = 1;
              }
            }
            if (expired == 0) {         // The buttons were pressed
              activatePistons();
              setMotorSpeed(code);
              timer = millis();
              unsigned long elapsedTime = 0;
              while (elapsedTime < trainingTime) {
                /*if (digitalRead(button) == LOW){                      // This would mean that the mouse detached,
                  String errMsg = "E" + String(int(elapsedTime/1000));// so we release it and print error message
                  sendPacket(errMsg);
                  setMotorSpeed(0);
                  releasePistons();
                  serialFlush();
                  return;
                }*/
                elapsedTime = millis() - timer;
              }
              // The whole training was successful, motors are stopped and mouse is released
              setMotorSpeed(0);
              releasePistons();
              sendPacket("EOTS");                  // End of Training Successfull
            }
          }
        }
      }
    }
  }
  serialFlush();
}

// OLD FUNCTION - NO LONGER IN USE
// Moves the linear motor to advance or take back the sweet water dispenser. Advancing
// it makes it available from drinking. The motor is taken back after 2 seconds
void releaseWater() {
  analogWrite(linearMotor, 125);
  delay(1500);
  activateWater(6);
  analogWrite(linearMotor, 25);
}

// OLD FUNCTION - NO LONGER IN USE
void releaseWaterV2(int nbGouttes) {
  int increment = 255 / nbGouttes;
  int value = 0;
  analogWrite(linearMotor, 255);
  delay(3000);
  
  for (int x = 1 ; x < nbGouttes ; x++)
  {
    value = 255 - x * increment;
    delay(1000);
    analogWrite(pumpMotor, 100);
    delay(90);
    analogWrite(pumpMotor, 0);
  }

  analogWrite(linearMotor, 0);
}

// Releases water in multiple increments. Allows button detection after first extension
void releaseWaterV3(int nbGouttes) {
  int increment = 255 / nbGouttes;  // Size of PWM for each increment
  int value = 0;
  int detection = 0;
  unsigned long timer = millis();
  
  analogWrite(linearMotor, 255);
  delay(2000);
  
  for (int x = 0 ; x < nbGouttes ; x++)
  {
    timer = millis();
    unsigned long elapsedTime = 0;
    while (elapsedTime < 1000) {
      if ((digitalRead(button1) == HIGH && digitalRead(button2) == HIGH )){
        activatePistons();
        analogWrite(pumpMotor,0);
        analogWrite(linearMotor, 0);
        x = nbGouttes + 1;
        detection = 1;
        break;
      }
      elapsedTime = millis() - timer;
    }

    elapsedTime = 0;
    if( detection == 0){
      analogWrite(pumpMotor, 100);
      while (elapsedTime < 90) {
        if ((digitalRead(button1) == HIGH && digitalRead(button2) == HIGH )){
          activatePistons();
          analogWrite(pumpMotor,0);
          analogWrite(linearMotor, 0);
          x = nbGouttes + 1;
          detection = 1;
          break;
        }
        elapsedTime = millis() - timer;
      }

      if( detection == 0){
        analogWrite(pumpMotor, 0);
        value = 255 - ((x+1) * increment);
        analogWrite(linearMotor, value);
      }
    }
  }
  
  analogWrite(linearMotor, 0);
}




// Releases the pistons to untrap the mouse after a training or if something goes wrong.
void releasePistons() {
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH);
  delay(100);
  digitalWrite(relay2, LOW);
}

// Packet sending to Python script through software serial port
// param: input - Packet to send to Python script
void sendPacket(String input) {
  Serial.println(input);
}

// Flushes the hardware serial buffer (in case the RFID motor reads the same RFID tag
// value multiple times. We don't want a Queue of RFID tags in the buffer.
void serialFlush() {
  while (Serial1.available() > 0) {
    char t = Serial1.read();
  }
  // Testing
  Serial1.flush();
}

// Starts the motor speed to the input given speed.
// param: motorSpeed - Motor speed in [0,4] interval
// 0: Stop
// 1: 350  RPM
// 2: 1000 RPM
// 3: 2000 RPM
// 4: 3000 RPM
void setMotorSpeed(int motorSpeed) {
  switch (motorSpeed) {
    case 0:
      digitalWrite(rev, HIGH);
      break;

    case 1:
      digitalWrite(rev, LOW);
      digitalWrite(m0, LOW);
      digitalWrite(m1, LOW);
      break;

    case 2:
      digitalWrite(rev, LOW);
      digitalWrite(m0, LOW);
      digitalWrite(m1, HIGH);
      break;

    case 3:
      digitalWrite(rev, LOW);
      digitalWrite(m0, HIGH);
      digitalWrite(m1, HIGH);
      break;

    case 4:
      digitalWrite(rev, LOW);
      digitalWrite(m0, HIGH);
      digitalWrite(m1, LOW);
      break;
  }
}

// Fonction de distribution de l'eau
// Prend en argument le nombre de gouttes que l'on veut donner à la souris
// Aucun retour
void activateWater(int nbGouttes)
{
  float timestart = millis();
  while (millis() < timestart + (1550 * nbGouttes)) // Correspond à la distribution de 4 gouttes (Peut être changer selon ce qu'on veut donner au souris)
  {
    analogWrite(pumpMotor, 100);
    delay(100);
    analogWrite(pumpMotor, 0);
    delay(750);
  }
}


void fillWaterPump()
{
  char code = Serial.parseInt();
  if (code == 0) {
    analogWrite(pumpMotor, 0);
  }
  else if (code == 1) {
    analogWrite(pumpMotor, 255);
  }
}

void pistonTest()
{
  char code = Serial.parseInt();
  if (code == 0) {
    releasePistons();
  }
  else if (code == 1) {
    activatePistons();
  }
}

void motorTest() {
  char code = Serial.parseInt();
  if (code == 0) {
    setMotorSpeed(0);
  }
  else if (code == 1) {
    setMotorSpeed(1);
  }
  else if (code == 2) {
    setMotorSpeed(2);
  }
  else if (code == 3) {
    setMotorSpeed(3);
  }
  else if (code == 4) {
    setMotorSpeed(4);
  }
}


void linearMotorTest() {
  char code = Serial.parseInt();
  if (code == 0) {
    analogWrite(linearMotor, 0);
  }
  else if (code == 1) {
    analogWrite(linearMotor, 255);
  }
}

