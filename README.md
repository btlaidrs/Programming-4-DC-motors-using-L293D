
# Arduino Motor Control - Four Motors with L293D Motor Driver

This project demonstrates how to control a robot with four DC motors using the **AFMotor** library and the **Adafruit L293D Motor Shield**. The robot performs basic movements, including moving forward, backward, and alternating turns (right and left).

## Components Required:
- **Arduino Board** (e.g., Arduino Uno)
- **Adafruit Motor Shield V2**
- **4 DC Motors**
- **Jumper Wires**
- **External Power Source for Motors (optional, depending on your motor specifications)**
  ![image](https://github.com/user-attachments/assets/7b0c20eb-9e0d-4e2a-afd1-6e2b941caf28)


## Libraries:
- **AFMotor Library**: This library is used to control the DC motors connected to the Adafruit Motor Shield.

## Pin Connections:
- Motor 1 connected to **M1** on the Adafruit Motor Shield
- Motor 2 connected to **M2**
- Motor 3 connected to **M3**
- Motor 4 connected to **M4**

## Demonstration:
![image](https://github.com/user-attachments/assets/9b0a6e47-7ffb-425a-b28b-6b95905b315d)


## How It Works:
- Forward Movement: All motors rotate in the same direction (forward).
- Backward Movement: All motors rotate in the opposite direction (backward).
- Right Turn: Motors on one side (1 & 3) move forward, while motors on the other side (2 & 4) move backward, causing the robot to rotate right.
- Left Turn: Motors on one side (1 & 3) move backward, while motors on the other side (2 & 4) move forward, causing the robot to rotate left.
## Robot Movement Sequence:
1. Move forward for 10 seconds.
2. Move backward for 10 seconds.
3. Alternate turning right and left every 10 seconds for a total duration of 60 seconds.

## Conclusion:
This simple motor control setup can be expanded to control more complex movements, sensors, or other features like obstacle avoidance, line-following, etc. The code provided gives the foundation for controlling the movement of a robot with four motors using an Arduino and the Adafruit Motor Shield.

### How to Use:
1. Upload this code to your Arduino.
2. Ensure the motors are connected to the Adafruit Motor Shield.
3. Provide adequate power for the motors (depending on your motor specifications).
4. Observe the robot performing the forward, backward, and turning motions as specified in the code.
