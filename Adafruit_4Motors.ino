#include <AFMotor.h> // Include the AFMotor library

// Define motors
AF_DCMotor motor1(1); // Motor 1 connected to M1
AF_DCMotor motor2(2); // Motor 2 connected to M2
AF_DCMotor motor3(3); // Motor 3 connected to M3
AF_DCMotor motor4(4); // Motor 4 connected to M4

void setup() {
  // Set motor speeds (values between 0 and 255)
  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor3.setSpeed(200);
  motor4.setSpeed(200);
}

void loop() {
  // 1. Move forward for 10 seconds
  moveForward();
  delay(10000); // 10 seconds
  
  // 2. Move backward for 10 seconds
  moveBackward();
  delay(10000); // 10 seconds
  
  // 3. Alternate turning right and left for 60 seconds
  unsigned long startTime = millis(); // Record the start time
  while (millis() - startTime < 60000) { // Continue for 60 seconds
    turnRight(); // Turn right
    delay(10000); // Wait for 10 seconds
    turnLeft(); // Turn left
    delay(10000); // Wait for 10 seconds
  }
}

// Function to move all motors forward
void moveForward() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

// Function to move all motors backward
void moveBackward() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

// Function to turn the vehicle to the right
void turnRight() {
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD);
}

// Function to turn the vehicle to the left
void turnLeft() {
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);
}