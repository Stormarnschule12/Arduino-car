
long dauer=0;
long entfernung=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(11, INPUT);
pinMode(7, OUTPUT);
pinMode(5, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
}

void loop() 

  // put your main code here, to run repeatedly:
{
digitalWrite(13,LOW);
delay(5);
digitalWrite(13,HIGH);
delay(10);

digitalWrite(13,LOW);

dauer = pulseIn(11, HIGH);
entfernung = (dauer/2)/29.1;
if(entfernung>=100
|| entfernung<=0)

{
  Serial.println("keinMesswert");
}
else
{
  Serial.print(entfernung);
  Serial.println(" cm");
}



if(entfernung<=5)
{digitalWrite(5,LOW);}
else
{digitalWrite(5, HIGH);
delay(500);
digitalWrite(5,LOW);
delay(500);
}

if(entfernung>=5)
{digitalWrite(7,LOW);}
else
{digitalWrite(7, HIGH);}

}


