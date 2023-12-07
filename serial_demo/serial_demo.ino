void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  if (Serial.available() > 0) { // Check if data is available to read

    char incomingByte = Serial.read(); // Read the incoming byte
    if (incomingByte == 'H') {
      digitalWrite(LED_BUILTIN, HIGH); // Turn LED on
    } else if (incomingByte == 'L') {
      digitalWrite(LED_BUILTIN, LOW); // Turn LED off
    }
  }
}