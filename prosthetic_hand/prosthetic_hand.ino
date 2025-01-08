// Follow us on instagram for more updates & cool projects - @ketanthorat.ai
// The following entity is licensed by robonex.in, kindly visit www.robonex.in for more information.

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define servoMIN 150 // 0
#define servoMAX 600

int servo1Pos = 0; // Initial position for servo1
int servo2Pos = 0; // Initial position for servo2
int servo3Pos = 0; // Initial position for servo3
int servo4Pos = 0; // Initial position for servo4
int servo5Pos = 0; // Initial position for servo5


void setup() {
  Serial.begin(9600); // Set the baud rate for the Serial monitor
  pwm.begin();
  pwm.setPWMFreq(60); // Set the PWM frequency for the PCA9685
  
  // Set the initial positions for servos
  pwm.setPWM(1, 0, servo1Pos);
  pwm.setPWM(2, 0, servo2Pos);
  pwm.setPWM(3, 0, servo3Pos);
  pwm.setPWM(4, 0, servo4Pos);
  pwm.setPWM(5, 0, servo5Pos);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read(); // Read the command from the Serial monitor
    
    // Control the servo motors based on the received command
    if (command == '1') { // OPEN
      pwm.setPWM(1, 0, 150); // Adjust the values according to your servo specifications
      pwm.setPWM(2, 0, 600);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 150);
      pwm.setPWM(5, 0, 150);
    } else if (command == '2') { // CLOSE
      pwm.setPWM(1, 0, 600); // Adjust the values according to your servo specifications
      pwm.setPWM(2, 0, 150);
      pwm.setPWM(3, 0, 600);
      pwm.setPWM(4, 0, 600);
      pwm.setPWM(5, 0, 600);
    } else if (command == '3') { // Victory
      // Example positions for victory command
      pwm.setPWM(1, 0, 600);
      pwm.setPWM(2, 0, 600);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 600);
      pwm.setPWM(5, 0, 600);
    } else if (command == '4') { // One
      // Example positions for one command
      pwm.setPWM(1, 0, 600);
      pwm.setPWM(2, 0, 150);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 600);
      pwm.setPWM(5, 0, 600);
    } else if (command == '5') { // Two
      // Example positions for two command
      pwm.setPWM(1, 0, 600);
      pwm.setPWM(2, 0, 600);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 600);
      pwm.setPWM(5, 0, 600);
    } else if (command == '6') { // Three
      // Example positions for three command
      pwm.setPWM(1, 0, 600);
      pwm.setPWM(2, 0, 600);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 600);
      pwm.setPWM(5, 0, 150);
    } else if (command == '7') { // Four
      // Example positions for four command
      pwm.setPWM(1, 0, 600);
      pwm.setPWM(2, 0, 600);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 150);
      pwm.setPWM(5, 0, 150);
    } else if (command == '8') { // Five
      // Example positions for five command
      pwm.setPWM(1, 0, 150);
      pwm.setPWM(2, 0, 600);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 150);
      pwm.setPWM(5, 0, 150);
    } else if (command == '9') { // Yo
      // Example positions for yo command
      pwm.setPWM(1, 0, 150); // Adjust the values according to your servo specifications
      pwm.setPWM(2, 0, 150);
      pwm.setPWM(3, 0, 150);
      pwm.setPWM(4, 0, 150);
      pwm.setPWM(5, 0, 600);

    }
  }
}
