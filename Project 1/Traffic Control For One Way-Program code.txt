void setup()
{
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}