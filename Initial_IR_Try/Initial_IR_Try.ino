int IR1 = 22;
int IR2 = 23;
int IN1_1 = 52;
int IN2_1 = 53;
int IN1_2 = 36;
int IN2_2 = 37;
int pwm_1 = A7;
int pwm_2 = A0;

void setup()
{
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IN1_1, OUTPUT);
  pinMode(IN2_1, OUTPUT);
  pinMode(IN1_2, OUTPUT);
  pinMode(IN2_2, OUTPUT);
  pinMode(pwm_1, OUTPUT);
  pinMode(pwm_2, OUTPUT);
  //  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(IR1)  && digitalRead(IR2) == LOW)    //Check the sensor output  STOP
  {
//    Serial.println("Inside of 7 cm");
        digitalWrite(IN1_1, LOW);   // set the motor to start
        digitalWrite(IN2_1,LOW);
        analogWrite(pwm_1, 0);
  }

  if (digitalRead(IR1)  & digitalRead(IR2) == HIGH) {  // FORWARD
    digitalWrite(IN1_1, LOW);   // set the motor to start
    digitalWrite(IN2_1, HIGH);
    analogWrite(pwm_1, 150);
//    Serial.println("Outside of 7 cm");
  }
  digitalWrite(IN1_2, LOW);   // set the motor to start
  digitalWrite(IN2_2, HIGH);
  analogWrite(pwm_2, 150);
}
