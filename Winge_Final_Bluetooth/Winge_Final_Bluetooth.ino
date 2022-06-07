#include "CytronMotorDriver.h"
int value = 0;

// Configure the motor driver.
CytronMD motor(PWM_DIR, 3, 2);  // PWM = Pin A0, DIR = Pin 2.


// The setup routine runs once when you press reset.
void setup() {
  Serial.begin(115200);
}


// The loop routine runs over and over again forever.
void loop() {
  if (Serial.available() > 0) {
    //    Serial.print("LKJHGFDFGK");
    value = Serial.read();

    if ( value == 'U') {
      Serial.print("Start with orientation");

      motor.setSpeed(60);
    }
    if ( value == 'D') {
      Serial.print(" Reverse ");

      motor.setSpeed(-60);
    }
    if ( value == 'S') {
      Serial.print("Start with orientation");

      motor.setSpeed(0);
    }
    Serial.println(value);
    //    Serial.print(analogRead(pwm));

  } // Run forward
}
