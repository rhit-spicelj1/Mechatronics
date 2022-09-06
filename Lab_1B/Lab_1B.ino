// C++ code
//
void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  
  // OUTPUTS FOR LEDS
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  // OUTPUTS FOR TRANSISTORS / H-BRIDGE
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
 
}

void loop()
{
  // DEBUGGING LEDS
  digitalWrite(4, !digitalRead(2));
  digitalWrite(5, !digitalRead(3));
  analogWrite(6, analogRead(0)/4);
  
  // OUTPUTS FOR TRANSISTORS / H_BRIDGE
  digitalWrite(12, !digitalRead(2));
  digitalWrite(13, !digitalRead(3));
  analogWrite(11, analogRead(0)/4);
  
  delay(10);
}
