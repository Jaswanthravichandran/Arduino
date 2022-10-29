const int A_IN = A2;
int analog_value;
const LED_PIN = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN,OUTPUT);
}

void loop()
{
  analog_value = analogRead(A_IN);
  Serial.print("The Analog Value is:");
  if(analog_value < 500)
  {
    digitalWrite(LED_PIN,HIGH);
  }
  else
  {
    digitalWrite(LED_PIN,LOW);        
  }

  
}
