int IN1_1 = 32; // Roller Inner Motor 1
int IN2_1 = 35;
int pwm_1 = A3;
int IN1_2 = 25; // Motor 2 LED
int IN2_2 = 24;
int pwm_2 = A0;
int Led1 = 40;
int Led2 = 41;
int L_in = 2;
int L_out = 3;
int flag = 1;
#define sensorpin_1 31
#define sensorpin_2 22
#define sensorpin_3 39
#define sensorpin_4 7
int val1, val2, val3, val4 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1_1, OUTPUT);
  pinMode(IN2_1, OUTPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(pwm_1, OUTPUT);
  pinMode(IN1_2, OUTPUT);
  pinMode(IN2_2, OUTPUT);
  pinMode(pwm_2, OUTPUT);
  pinMode(L_out, INPUT);
  pinMode(L_in, INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(L_in, HIGH);
  digitalWrite(L_out, HIGH);

  // put your main code here, to run repeatedly:
  val1 = digitalRead(sensorpin_1);
  val2 = digitalRead(sensorpin_2);
  val3 = digitalRead(sensorpin_3);
  val4 = digitalRead(sensorpin_4);
  //  Serial.println(val1);
  //  Serial.println(val2);
  if (flag == 1) {
    digitalWrite(IN1_1, LOW);
    digitalWrite(IN2_1, HIGH);
    analogWrite(pwm_1, 255);
    Serial.println("Motor Running");
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    if ( (digitalRead(L_out) == HIGH))
    {
      Serial.println("Pressed");
      digitalWrite(IN1_1, HIGH);
      digitalWrite(IN2_1, LOW);
      analogWrite(pwm_1, 255);
      Serial.println("Motor Reversed");
      flag = flag + 1;
    }
  }
  
  if ( (digitalRead(L_in) == HIGH) && flag == 2) {
    digitalWrite(IN1_1, LOW);
    digitalWrite(IN2_1, LOW);
    analogWrite(pwm_1, 0);
    Serial.println("Stop");
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
  }

  //  if (val3 && val4 == 0) {
  //    digitalWrite(IN1_2, LOW);
  //    digitalWrite(IN2_2, HIGH);
  //    analogWrite(pwm_2, 255);
  //    digitalWrite(Led1, LOW);
  //    digitalWrite(Led2, LOW);
  //
  //  }
  //  else {
  //    digitalWrite(IN1_2, LOW);
  //    digitalWrite(IN2_2, LOW);
  //    analogWrite(pwm_2, 0);
  //    digitalWrite(Led1, HIGH);
  //    digitalWrite(Led2, HIGH);
  //  }
}
