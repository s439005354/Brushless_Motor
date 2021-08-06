int pot1 = A3;
int pot2 = A4;
int sw1 = 12;
int sw2 = 13;
int VR = 9;
int ZF = 7;
int sig = 5;
int EL = 10;

float VR1;
float VR2;
float sig1;
float sig2;
int EL1;
int ZF1;

void setup() {
  // put your setup code here, to run once:
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(VR,OUTPUT);
  pinMode(ZF,OUTPUT);
  pinMode(sig,OUTPUT);
  pinMode(EL,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
EL1= digitalRead(sw1);
digitalWrite(EL,EL1);

ZF1= digitalRead(sw2);
digitalWrite(ZF,ZF1);

VR1=analogRead(pot1);
VR2= VR1*5/1024;
analogWrite(VR,VR2);

sig1=analogRead(pot2);
sig2= sig1*5/1024;
analogWrite(sig,sig2);




  

}
