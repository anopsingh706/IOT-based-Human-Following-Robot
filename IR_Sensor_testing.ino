// Define IR sensor pins
int leftIRSensorPin = A3;
int rightIRSensorPin = A2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(leftIRSensorPin, INPUT);
  pinMode(rightIRSensorPin, INPUT);
}

void loop() {
  // Read IR sensor values
  
  int rightIRValue = digitalRead(rightIRSensorPin);
  int leftIRValue = digitalRead(leftIRSensorPin);

  
  if (rightIRValue == LOW) {
    Serial.println("Right");
    // Add your code to turn right or take any specific action here
  }
  else if (leftIRValue == LOW){
        Serial.println("left");

    
  }

  // Add a delay to prevent rapid serial prints
  delay(500);
}
