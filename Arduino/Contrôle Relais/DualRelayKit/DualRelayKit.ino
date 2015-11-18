/*  

Dual Relay Board Kit Arduino Uno code example (#27114).

This code turns each relay on and off at one second intervals.
    
You can monitor the status of the relays by displaying the Serial Monitor
window. Upload sketch. Open Monitor window, and Be sure communications
is set to 9600 baud. This feature of the demo is optional.

This example code is for the Arduino Uno and direct compatible boards. 
It has not been tested, nor designed for, other Arduino boards, including
the Arduino Due.
  
------------

Connections:
Dual Relay          Arduino
1 (relay 1 signal)  8
2 (relay 2 signal)  9
5 (relay 1 gnd)     GND
6 (relay 2 gnd)     GND

Important: The Dual Relay Board Kit also requires a separate 12 volt supply,
in addition to the Arduino connections shown here. See the product documentation 
for more information.

*/

int relay1 = 8;
int relay2 = 9;

void setup() {
  pinMode (relay1, OUTPUT);
  pinMode (relay2, OUTPUT);
  Serial.begin(9600);               // Use the Serial Monitor window at 9600 baud  
}

void loop() {
 


  Serial.println("Relay 2 OFF and RELAY 1 ON");  // Turn on/off both relays
  digitalWrite(relay2, LOW);
  delay(40);                  // To make sure the 2nd valve closes before valve 1 opens
  digitalWrite(relay1, HIGH);  
  delay(2000);
  
  Serial.println("Relay 1 OFF and Relay 2 ON");
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH);
  delay(5000);
}
