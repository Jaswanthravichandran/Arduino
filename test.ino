const int LED_PIN = 3;
const int SWT_PIN = 7;
int swtstate;

void setup() {
  pinMode(LED_PIN,OUTPUT);
  pinMode(SWT_PIN,INPUT);
}

void loop() {
  swtstate = digitalRead(SWT_PIN);
  if(swtstate==HIGH)
  {
    digitalWrite(LED_PIN,HIGH);
  }
  else
  {
    digitalWrite(LED_PIN,LOW);
  }

}
  

