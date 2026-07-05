// Define parameters
int greenLight = 2;
int yellowLight = 1;
int redLight = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(redLight, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLight, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellowLight, LOW);
  digitalWrite(redLight, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(redLight, LOW);
  delay(1000);

}
