int pin_No[3]={4,3,2};

void setup() {
  int n=0;
  while(n <= 2)
  {
    pinMode(pin_No[n], OUTPUT);
    n++;
  }
}

void loop() {
  int n=0;
  while(n <=2)
  {
    digitalWrite(pin_No[n], HIGH);
    delay(500);
    digitalWrite(pin_No[n], LOW);
    delay(500);
    n++;
  }
  while(1){}
}
