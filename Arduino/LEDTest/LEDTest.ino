int msg;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);  
}

void loop() {
  msg = Serial.read();
  Serial.println(msg);
  if (msg == 'a'){
    digitalWrite(13, HIGH);
  }
  else if(msg =='b'){
    digitalWrite(13, LOW);
  }
}

// CECI EST UN AJOUT