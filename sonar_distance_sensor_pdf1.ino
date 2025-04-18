#include <Servo.h> // Include the Servo library to control servo motors

volatile long A; // Variable used to store random number for servo selection

// Function to measure distance using the ultrasonic sensor (Trigger: pin 11, Echo: pin 10)
float checkdistance_11_10() {
  digitalWrite(11, LOW);        // Ensure trigger is low
  delayMicroseconds(2);         // Wait briefly
  digitalWrite(11, HIGH);       // Send a 10µs pulse to trigger the sensor
  delayMicroseconds(10);
  digitalWrite(11, LOW);        // End the pulse
  float distance = pulseIn(10, HIGH) / 58.00; // Read echo time and convert to cm
  delay(10);                    // Short delay to stabilize sensor
  return distance;
}

// Create Servo objects for controlling three servo motors
Servo servo_3;
Servo servo_6;
Servo servo_9;

void setup() {
  A = 0;
  pinMode(11, OUTPUT); // Set ultrasonic trigger pin
  pinMode(10, INPUT);  // Set ultrasonic echo pin
  pinMode(12, OUTPUT); // Set buzzer pin

  // Attach servos to designated pins
  servo_3.attach(3);
  servo_6.attach(6);
  servo_9.attach(9);
}

void loop() {
  // Check distance from object using the ultrasonic sensor
  if (checkdistance_11_10() < 20) {
    A = random(0, 4); // Generate a random number between 0 and 3

    switch (A) {
      case 1:
        tone(12, 131);         // Play a tone on the buzzer
        delay(100);
        noTone(12);            // Stop the tone
        servo_3.write(179);    // Move servo_3 to max angle
        delay(1000);           // Hold position
        servo_3.write(90);     // Return to neutral position
        delay(500);
        break;
      case 2:
        tone(12, 131);
        delay(100);
        noTone(12);
        servo_6.write(179);
        delay(1000);
        servo_6.write(90);
        delay(500);
        break;
      case 3:
        tone(12, 131);
        delay(100);
        noTone(12);
        servo_9.write(179);
        delay(1000);
        servo_9.write(90);
        delay(500);
        break;
      // Note: case 0 does nothing
    }
  }
}
