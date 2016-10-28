int ledCount = 2;
int ledPins[] = { 13, 12 };
int lightLevel;

void setup()
{
  Serial.begin(38400);
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
   pinMode(ledPins[thisLed], OUTPUT); 
  }
}

void loop()
{
  for (int thisLed = 0; thisLed < ledCount-1; thisLed++) {
    digitalWrite(ledPins, HIGH);
    delay(lightLevel);
    while(digitalRead
    lightLevel = analogRead(A0);
    Serial.print("Light level: ");
    Serial.println(lightLevel, DEC);
    digitalWrite(ledPins, LOW);
    delay(lightLevel);    
  }
}
