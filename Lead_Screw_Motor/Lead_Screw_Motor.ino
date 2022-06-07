int IN1_1 = 32; // Roller Inner Motor 1
int IN2_1 = 35;
int pwm_1 = A3;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1_1, OUTPUT);
  pinMode(IN2_1, OUTPUT);
  pinMode(pwm_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1_1, LOW);
  digitalWrite(IN2_1, HIGH);
  analogWrite(pwm_1, 255);
}
