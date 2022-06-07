int Lswitch = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(Lswitch, INPUT);
}

void loop()
{
    digitalWrite(Lswitch, HIGH);
  if ( (digitalRead(Lswitch) == HIGH))
  {
    Serial.println("Pressed");
  }

  if ( (digitalRead(Lswitch) == LOW))
  {
    Serial.println("not Pressed");
  }


}
