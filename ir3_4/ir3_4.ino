int IN1_2 = 25; // Motor 2 LED
int IN2_2 = 24;
int pwm_2 = A0;
int flag = 1;
#define sensorpin_1 31
#define sensorpin_2 22
#define sensorpin_3 39
#define sensorpin_4 7
int val1, val2, val3, val4 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1_2, OUTPUT);
  pinMode(IN2_2, OUTPUT);
  pinMode(pwm_2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(sensorpin_1);
  val2 = digitalRead(sensorpin_2);
  val3 = digitalRead(sensorpin_3);
  val4 = digitalRead(sensorpin_4);
  //  Serial.println(val3);
  //  Serial.println(val4);
  //  if (val3 == 1 && val4 == 0) {
  //    digitalWrite(IN1_2, LOW);
  //    digitalWrite(IN2_2, HIGH);
  //    analogWrite(pwm_2, 255);
  //    Serial.println("Moving Up");
  //  }
  //  else {
  //    digitalWrite(IN1_2, LOW);
  //    digitalWrite(IN2_2, LOW);
  //    analogWrite(pwm_2, 0);
  //    flag = flag + 1;
  //    Serial.println("Stop at Up");
  //  }
  //  if (val4 == 1 && flag == 2) {
  //    digitalWrite(IN1_2, HIGH);
  //    digitalWrite(IN2_2, LOW);
  //    analogWrite(pwm_2, 255);
  //    flag = flag + 1;
  //    Serial.println("Moving Down");
  //  }
  //  if (val4 == 0 && flag == 3) {
  //    digitalWrite(IN1_2, LOW);
  //    digitalWrite(IN2_2, LOW);
  //    analogWrite(pwm_2, 0);
  //    Serial.println("Stop at Down");
  //  }

  if (val3 == 1) {
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, HIGH);
    analogWrite(pwm_2, 255);
    Serial.println("Moving Up");
  }
  else {
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, LOW);
    analogWrite(pwm_2, 0);
    //    flag = flag + 1;
    Serial.println("Stop at Up");
    delay(1000);
  }
  if (val4 == 1) {
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, HIGH);
    analogWrite(pwm_2, 255);
    Serial.println("Moving Down");
  }
  else {
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, LOW);
    analogWrite(pwm_2, 0);
    //    flag = flag + 1;
    Serial.println("Stop at Down");
  }

  //  for (val4 >= 0) {
  //    digitalWrite(IN1_2, LOW);
  //    digitalWrite(IN2_2, HIGH);
  //    analogWrite(pwm_2, 255);
  //    Serial.println("Moving Up");
  //  }
  //    for (val4 >= 0) {
  //    digitalWrite(IN1_2, HIGH);
  //    digitalWrite(IN2_2, LOW);
  //    analogWrite(pwm_2, 255);
  //    Serial.println("Moving Down");
  //  }
  //
  //  digitalWrite(IN1_2, LOW);
  //  digitalWrite(IN2_2, LOW);
  //  analogWrite(pwm_2, 0);
  //  Serial.println("Stop");

}
