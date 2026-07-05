void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(x,HIGH);
    delay(500);
    digitalWrite(x,LOW);
    delay(500);
  }

}
