int RPin=2;
int GPin=4;
int BPin=3;

void setup() {
  pinMode(RPin,OUTPUT);
  pinMode(GPin,OUTPUT);  
  pinMode(BPin,OUTPUT);
}

void loop() {
digitalWrite(RPin,HIGH);
digitalWrite(GPin,HIGH);
digitalWrite(BPin,HIGH);
delay(500);

digitalWrite(RPin,LOW);
digitalWrite(GPin,LOW);
digitalWrite(BPin,LOW);
delay(1000);

digitalWrite(RPin,HIGH);
delay(1000);
digitalWrite(RPin,LOW);
digitalWrite(GPin,HIGH);
delay(2000);
digitalWrite(GPin,LOW);
digitalWrite(BPin,100);
delay(3000);
digitalWrite(BPin,LOW);
}