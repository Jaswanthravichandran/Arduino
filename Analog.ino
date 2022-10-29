const int A_IN = A2;
int analog_value;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  analog_value = analogRead(A_IN);
  Serial.print("The Analog Value is:");
  Serial.println(A_IN);
}
