int Motor1=11;
int Motor2=12;
long dauerleft=0;
long entfernungleft=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, INPUT);
pinMode(Motor1, OUTPUT);
pinMode(Motor2, OUTPUT);

}

void loop() 

  // put your main code here, to run repeatedly:
{
digitalWrite(2,LOW);
delay(0.01);
digitalWrite(2,HIGH);
delay(0.01);
digitalWrite(2,LOW);

dauerleft = pulseIn(3, HIGH);
entfernungleft = (dauerleft/2)/29.1;
if(entfernungleft>=100
|| entfernungleft<=0,5)

{
  Serial.println("keinMesswert");
}
else
{
  Serial.print(entfernungleft);
  Serial.println(" cm");
}



if(entfernungleft>=20)
{
digitalWrite(Motor1, HIGH);
digitalWrite(Motor2, HIGH);
}
else
{
digitalWrite(Motor2, HIGH);
digitalWrite(Motor1, LOW);
delay(200);

}



}


