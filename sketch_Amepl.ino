void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
{if(digitalRead(3)==LOW)

{digitalWrite(13, HIGH);
{digitalWrite(12, HIGH);
delay(500);
digitalWrite(12, LOW);
delay(500);}
}else{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
  {digitalWrite(10, HIGH);
  digitalWrite(7,HIGH);
  delay(5000);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  }
}
}

}

   

