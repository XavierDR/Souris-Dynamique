// Sensor variables
int button = 10;

// relay variables
int relay2= 8;
int relay1= 9;

void setup() {
  Serial.begin(9600);

  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(button, INPUT);

  digitalWrite(relay1, LOW);
  
  digitalWrite(relay2, HIGH); 

}

void loop() {
  if(digitalRead(button) == HIGH) { // Button pressed

    Serial.println("Button pressed");
    digitalWrite(relay2, LOW);
    delay(40);
    digitalWrite(relay1, HIGH);
  }
  else {
    Serial.println("Not pressed");
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, HIGH);
  }

}
