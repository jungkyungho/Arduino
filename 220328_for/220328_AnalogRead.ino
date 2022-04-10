int LED_Pin[3]={4, 3, 2};

void setup(){
  int n;
  for(n=0; n<=2; n++)
  {
    pinMode(LED_Pin[n], OUTPUT);
  }
}

void loop() {
  int n;
  for(n=0; n<=2; n++)
  {
    digitalWrite(LED_Pin[n], HIGH);
    delay(500);
    digitalWrite(LED_Pin[n], LOW);
    delay(500);
  }
}
