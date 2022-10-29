const int A_IN = A2;
const int LED = 2;
int analog_value;

void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop()
{
  analog_value = analogRead(A_IN);
  Serial.print("Analog Value =");
  Serial.println(analog_value);
  analog_value = analog_value/4;
  analogWrite(LED,analog_value);
  
}
