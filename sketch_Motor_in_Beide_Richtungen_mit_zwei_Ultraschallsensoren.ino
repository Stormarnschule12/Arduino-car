
int Motor11=11;
int Motor12=12;
int Motor21=10;
int Motor22=9;
long dauerleft=0;
long entfernungleft=0;
long dauerright=0;
long entfernungright=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, INPUT);
pinMode(4, OUTPUT);
pinMode(5, INPUT);
pinMode(Motor11, OUTPUT);
pinMode(Motor21, OUTPUT);
pinMode(Motor12, OUTPUT);
pinMode(Motor22, OUTPUT);

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



if(entfernungright>=10)
{
digitalWrite(Motor12, HIGH);
digitalWrite(Motor11, LOW);
digitalWrite(Motor22, HIGH);
digitalWrite(Motor21, LOW);
}
else
{
digitalWrite(Motor12, LOW);
digitalWrite(Motor11, HIGH);
digitalWrite(Motor22, LOW);
digitalWrite(Motor21, HIGH);
delay(2000);
digitalWrite(Motor11, LOW);
digitalWrite(Motor12, HIGH);
digitalWrite(Motor21, LOW);
analogWrite(Motor22,125);
delay(4000);
}
if(entfernungleft>=10)
{
digitalWrite(Motor12, HIGH);
digitalWrite(Motor11, LOW);
digitalWrite(Motor22, HIGH);
digitalWrite(Motor21, LOW);
}
else
{
digitalWrite(Motor12, LOW);
digitalWrite(Motor11, HIGH);
digitalWrite(Motor22, LOW);
digitalWrite(Motor21, HIGH);
delay(2000);
digitalWrite(Motor21, LOW);
digitalWrite(Motor22, HIGH);
digitalWrite(Motor11, LOW);
analogWrite(Motor12,125);
delay(4000);
}


}
}


