const int ledpin = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0);{
  String command = Serial.readStringUntil('\n');
  if (command == "on"){
    digitalWrite(ledpin,HIGH);
  }
  else if (command == "off"){
    digitalWrite(ledpin,LOW);
  }
}
}
