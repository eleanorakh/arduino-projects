int measurement=0;

void setup() {
  Serial.begin(9600);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
}

void loop() {
  measurement=analogRead(A0);
  Serial.print("Moisture measurement:");
  Serial.println(measurement);
  delay(500);

  if (measurement <400) {
    Serial.print("Moisture too low");
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
  }
  else {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }

}

