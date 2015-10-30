// Motor variables
char msg;
int rev = 48;
int m0 = 50;
int m1 = 52;

// RFID variables
int incomingByte = 0;
int Identification []= {0,0,0,0,0,0,0,0,0,0,0,0};
int souris1 [] = {1,9,12,110,114,72,21,50,93,17,7,61};
int souris2 [] = {1,9,13,0,0,0,0,0,0,0,0,4};
int souris3 [] = {1,9,12,234,145,220,10,0,0,0,0,168};
int i=0;



void setup() {
  Serial1.begin(9600);
  Serial.begin(9600);

  // Motor initializations
  pinMode(rev,OUTPUT);  
  pinMode(m0, OUTPUT);
  pinMode(m1,OUTPUT);
  digitalWrite(rev, LOW);
  digitalWrite(m0, LOW);  
  digitalWrite(m1, LOW);
  

}

void loop() {
  idMice();

  msg = Serial.read();
  
  if (msg == 'a'){
    digitalWrite(m0, LOW);  
    digitalWrite(m1, LOW);
    digitalWrite(13, LOW);
  }
  else if(msg =='b'){
    digitalWrite(m0, HIGH);
    digitalWrite(m1, LOW);
    digitalWrite(13, HIGH);
  }
}

// This function reads the hardware serial port (Serial1) and identifies
// a specific mic, then prints it the software serial port
void idMice(){
if (Serial1.available() > 0) 
  {
    // read the incoming byte:
    incomingByte = Serial1.read();
    if (incomingByte==1)
    {
      Identification[0]=1;
      i=1;
      while (Identification[11]==0)
      {
        if (Serial1.available() > 0)
        {
          incomingByte = Serial1.read();
          Identification[i]=incomingByte;
          i=i+1;
        }
      }

      for (int c=0; c < 12; c++)
      {
        if(Identification[c]!=souris1[c])
        {
          break;
        }
        if(c==11)
        {
          digitalWrite(m0, LOW);  
          digitalWrite(m1, LOW);
          Serial.println("Souris 1");
        }
      }
      for (int c=0; c < 12; c++)
      {
        if(Identification[c]!=souris2[c])
        {
          break;
        }
        if(c==11)
        {
          digitalWrite(m0, HIGH);
          digitalWrite(m1, LOW);
          Serial.println("Souris 2");
        }
      }
      for (int c=0; c < 12; c++)
      {
        if(Identification[c]!=souris3[c])
        {
          break;
        }
        if(c==11)
        {
          Serial.println("Souris 3");
        }
      }

      for (int b=0; b < 12; b++)
      {
//        Serial.println(Identification[b]);
        Identification[b]=0;
      }
        
      i=0;
    }
  }
}
