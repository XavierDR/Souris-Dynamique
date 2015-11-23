// Motor variables
char msg;
int rev = 48;
int m0 = 50;
int m1 = 52;

// RFID variables
int incomingByte = 0;
const int DEFAULT_SIZE = 12;
int rfTag [] = {0,0,0,0,0,0,0,0,0,0,0,0};
int souris1 [] = {1,9,12,110,114,72,21,50,93,17,7,61};
int souris2 [] = {1,9,13,0,0,0,0,0,0,0,0,4};
int mouse [] = {0,0,0,0,0,0,0,0,0,0,0,0};
int souris3 [12];
int i=0;

// Sensor variables
int button = 12;

// Relay variables
int relay1= 39;   // Blanc
int relay2= 38;   // Orange



void setup() {
  Serial1.begin(9600);
  Serial.begin(9600);

  // Motor initializations
  pinMode(rev,OUTPUT);  
  pinMode(m0, OUTPUT);
  pinMode(m1,OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  digitalWrite(rev, HIGH);

  releasePistons();

  setMotorSpeed(0);

}

void loop() {
   digitalWrite(13, LOW);
  //idMice();
  /*if(digitalRead(button) == HIGH) { // Button pressed
    digitalWrite(relay2, LOW);
    delay(40);
    digitalWrite(relay1, HIGH);
  }
  else {
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, HIGH);
  }*/

  if (Serial1.available() > 0){
    idMice();
  }

  // Checks to see if there is any computer input;
  if(Serial.available() > 0){
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
      digitalWrite(13, HIGH);
      int code = Serial.parseInt();
      if (code == 1){         // The mouse can start its training
        bool expired = 0;
        int timeout = 10000;
        int timer = millis();
        while(digitalRead(12) == LOW && expired == 0){
          if(millis()-timer > timeout){
            expired = 1;
          }
        }
        if (expired == 0){          // The buttons were pressed
          activatePistons();
          setMotorSpeed(4);
          delay(4000);
          setMotorSpeed(0);
          releasePistons();
        }
      }
    }
  }
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

/*if (Serial1.available() > 0) 
  {
    // read the incoming byte:
    incomingByte = Serial1.read();
    if (incomingByte==1)
    {
      mouse[0]=1;
      i=1;
      while (rfTag[11]==0)
      {
        if (Serial1.available() > 0)
        {
          incomingByte = Serial1.read();
          mouse[i]=incomingByte;
          i=i+1;
        }
      }
      String str;
       for (int i = 0; i < 12 ; i++){
          str += String(mouse[i]) + ".";
       }
  
       str.remove(str.length()-1);
       sendPacket(str);
      //if(arrayCompare(rfTag, souris1, 12, 12)) Serial.println("Souris1!");
      //if(arrayCompare(rfTag, souris2, 12, 12)) Serial.println("Souris2!");
      //if(arrayCompare(rfTag, souris3, 12, 12)) Serial.println("Souris3!");
      
      for (int i=0 ; i < 12; i++){
        mouse[i] = 0;
      }
      digitalWrite(12, LOW);
        
      i=0;
    }
  }*/
  delay(1500);
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

void sendPacket(String input){
  Serial.println(input);
}

void serialFlush(){
  while(Serial1.available() > 0){
    char t = Serial1.read();
  }
}

void activatePistons(){
  digitalWrite(relay2, LOW);
  delay(40);                  // To make sure the 2nd valve closes before valve 1 opens
  digitalWrite(relay1, HIGH);  
}

void releasePistons(){
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH); 
}

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


