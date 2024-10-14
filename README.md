در این پروژه چراغ با کلمه on روشن و با کلمه off خاموش می شود
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
تفاوت این کد و کد پروژه قبل این است که پروژه قبل char , در این پروژه از string استفاده کرده ایم و به این علت است که نوع ورودی این دو پروژه متفاوت است
