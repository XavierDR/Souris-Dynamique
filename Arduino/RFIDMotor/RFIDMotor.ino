// Motor variables
char msg;
int rev = 48;   //Pin
int m0 = 50;
int m1 = 52;

// RFID variables
int incomingByte = 0;
const int DEFAULT_SIZE = 12;
int mouse [] = {0,0,0,0,0,0,0,0,0,0,0,0};
int souris3 [12];
int i=0;

// Sensor variables
int button1 = 11;
int button2 = 12;

// Relay variables
int relay1= 39;   // Blanc
int relay2= 38;   // Orange

// Linear Motor variables
int linearMotor = 10;


void setup() {
  Serial1.begin(9600);
  Serial.begin(9600);

  // Motor initializations
  pinMode(rev,OUTPUT);  
  pinMode(m0, OUTPUT);
  pinMode(m1,OUTPUT);

  // Relay initialization
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);

  // Debug LED initialization
  pinMode(13, OUTPUT);

  // Linear motor initialization
  pinMode(linearMotor,OUTPUT);

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
   digitalWrite(13, LOW);

  // Checking if it receives input from physical serial port (RFID)
  if (Serial1.available() > 0){     //Read RF-ID output
    idMice();
  }

  // Checking to see if it receives input from software serial port (Python scripts)
  if(Serial.available() > 0){       // Checks to see if there is any computer input;
    msg = Serial.read();
    
    if (msg == 'a'){
      digitalWrite(m0, LOW);  
      digitalWrite(m1, LOW);
    }
    else if(msg =='b'){
      digitalWrite(m0, HIGH);
      digitalWrite(m1, LOW);
    }
    else if(msg == 'c'){
      addMouse();
    }
    else if(msg == 'M'){
      mouseReadyForTraining();
    }
  }
}

// Activate the pistons to trap the mouse
void activatePistons(){
  digitalWrite(relay2, LOW);
  delay(40);                  // To make sure the 2nd valve closes before valve 1 opens
  digitalWrite(relay1, HIGH);  
}


// This function waits for and RFID tag to be scanned. It is made to add
// a new mouse RFID tag by sending it to Python.
void addMouse(){
  serialFlush();
  while(mouse[11] == 0){
    incomingByte = Serial1.read();
    if (incomingByte==1)
    {
      mouse[0]=1;
      i=1;
      while (mouse[11]==0)
      {
        if (Serial1.available() > 0)
        {
          incomingByte = Serial1.read();
          mouse[i]=incomingByte;
          i+=1;
        }
      }
     // We now need to send the RFID value to Python.
     // A conversion from int[] to char[] is needed
     String str;
     for (int i = 0; i < 12 ; i++){
        str += String(mouse[i]) + ".";
     }

     str.remove(str.length()-1);
     sendPacket(str);
    }
  }
  for (int i=0 ; i < 12; i++){
      mouse[i] = 0;
  }
}

// This function compares two arrays and returns true if
// the arrays are equal
boolean arrayCompare(int a[], int b[], int len_a, int len_b){
     int n;

     // if their lengths are different, return false
     if (len_a != len_b) return false;

     // test each element to be the same. if not, return false
     for (n=0;n<len_a;n++) if (a[n]!=b[n]) {
       return false;
     }

     //ok, if we have not returned yet, they are equal :)
     return true;
}


// This function reads the hardware serial port (Serial1) and identifies
// a specific mic, then prints it the software serial port
void idMice(){
  incomingByte = Serial1.read();
    if (incomingByte==1)
    {
      mouse[0]=1;
      i=1;
      while (mouse[11]==0)
      {
        if (Serial1.available() > 0)
        {
          incomingByte = Serial1.read();
          mouse[i]=incomingByte;
          i+=1;
        }
      }
     // We now need to send the RFID value to Python.
     // A conversion from int[] to char[] is needed
     String str;
     for (int i = 0; i < 12 ; i++){
        str += String(mouse[i]) + ".";
     }

     str.remove(str.length()-1);
     sendPacket(str);
    }
    for (int i=0 ; i < 12; i++){
        mouse[i] = 0;
      }
    i = 0;

  delay(1500);
}

// This function makes sure the mouse is ready for training by reading the confirmation
// boolean that is sent after 'M' in the packet. In then read the speed and time values
// and trains the mouse according to those.
void mouseReadyForTraining(){
  digitalWrite(13, HIGH);
  int code = Serial.parseInt();
  if (code == 1){         // The mouse can start its training
  releaseWater();
    if(Serial.available() > 0){
      char msg = Serial.read();
      if (msg == 'V'){
        code = Serial.parseInt();
        if (Serial.available() > 0){
          if (Serial.read() == 'T'){
            int trainingTime = Serial.parseInt()*1000;
            bool expired = 0;
            int timeout = 10000;
            unsigned long timer = millis();
            while( digitalRead(button1) == LOW && digitalRead(button2) == LOW && expired == 0){
              if(millis()-timer > timeout){
                expired = 1;
              }
            }
            if (expired == 0){          // The buttons were pressed
              activatePistons();
              setMotorSpeed(code);
              timer = millis();
              unsigned long elapsedTime = 0;
              while(elapsedTime < trainingTime){       
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
              serialFlush();
              sendPacket("EOTS");                  // End of Training Successfull
            }
          }
        }
      }
    }
  }
}

// Moves the linear motor to advance or take back the sweet water dispenser. Advancing
// it makes it available from drinking. The motor is taken back after 2 seconds
void releaseWater(){
  analogWrite(linearMotor, 125);
  delay(4000);
  analogWrite(linearMotor, 25);
}

// Releases the pistons to untrap the mouse after a training or if something goes wrong.
void releasePistons(){
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH); 
  delay(500);
  digitalWrite(relay2, LOW);
}

// Packet sending to Python script through software serial port
// param: input - Packet to send to Python script
void sendPacket(String input){
  Serial.println(input);
}

// Flushes the hardware serial buffer (in case the RFID motor reads the same RFID tag
// value multiple times. We don't want a Queue of RFID tags in the buffer.
void serialFlush(){
  while(Serial1.available() > 0){
    char t = Serial1.read();
  }
}

// Starts the motor speed to the input given speed.
// param: motorSpeed - Motor speed in [0,4] interval
// 0: Stop
// 1: 350  RPM
// 2: 1000 RPM
// 3: 2000 RPM
// 4: 3000 RPM 
void setMotorSpeed(int motorSpeed){
  switch(motorSpeed){
    case 0:
      digitalWrite(rev, HIGH);
      break;
    
    case 1:
      digitalWrite(13, HIGH);
      digitalWrite(rev, LOW);
      digitalWrite(m0, LOW);
      digitalWrite(m1, LOW);
      break;

    case 2:
      digitalWrite(13, LOW);
      digitalWrite(rev, LOW);
      digitalWrite(m0, LOW);
      digitalWrite(m1, HIGH);
      break;

    case 3:
      digitalWrite(13, HIGH);
      digitalWrite(rev, LOW);
      digitalWrite(m0, HIGH);
      digitalWrite(m1, HIGH);
      break;

    case 4:
      digitalWrite(13, LOW);
      digitalWrite(rev, LOW);
      digitalWrite(m0, HIGH);
      digitalWrite(m1, LOW);
      break;
  }
}

