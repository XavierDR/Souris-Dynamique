// Sensor variables
int button = 53;

// relay variables
int relay2= 45;
int relay1= 43;

void setup() {
  Serial.begin(9600);

  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(button, INPUT);

  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH); 

}

void loop() {
  delay(100);
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
