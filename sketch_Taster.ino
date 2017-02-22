void setup() {
  // put your setup code here, to run once:
pinMode(3, INPUT);
pinMode(12, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
{if(digitalRead(3)== HIGH){
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  delay(5000);
} else {
  digitalWrite(12, LOW);
  digitalWrite(10,HIGH);
}}
{ digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
}
}

