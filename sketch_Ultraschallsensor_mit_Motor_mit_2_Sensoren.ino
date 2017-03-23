int MotorL=10;
int MotorR=12;
long dauerleft=0;
long entfernungleft=0;
long dauerright=0;
long entfernungright=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, INPUT);
pinMode(MotorL, OUTPUT);
pinMode(MotorR, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, INPUT);
}

void loop() 

  // put your main code here, to run repeatedly:
{
{digitalWrite(2,LOW);
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
if(entfernungleft>=25)
{
digitalWrite(MotorR, HIGH);
}
else
{
digitalWrite(MotorR, LOW);
}
}
{
digitalWrite(4,LOW);
delay(0.01);
digitalWrite(4,HIGH);
delay(0.01);
digitalWrite(4,LOW);
dauerright = pulseIn(5, HIGH);
entfernungright = (dauerright/2)/29.1;
if(entfernungright>=100
|| entfernungright<=0,5)
{
  Serial.println("keinMesswert");
}
else
{
  Serial.print(entfernungright);
  Serial.println(" cm");
}
if(entfernungright>=25)
{
digitalWrite(MotorL, HIGH);
}
else
{
digitalWrite(MotorL, LOW);
}
}
}


