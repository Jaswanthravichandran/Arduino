const int LED_PIN = 3;
const int SWT_PIN = 7;
int swtstate;
int ledstate = 0;

void setup() {
  pinMode(LED_PIN,OUTPUT);
  pinMode(SWT_PIN,INPUT);
}

void loop() {
  swtstate = digitalRead(SWT_PIN);
  digitalWrite(LED_PIN,ledstate);
  
  if(swtstate==HIGH)
  {
    ledstate =! ledstate;
    delay(500);
  }
 
}
  

