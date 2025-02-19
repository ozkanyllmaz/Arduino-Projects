int value = 0;
float voltage = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  value = analogRead(A0);
  Serial.print("value = ");
  Serial.print(value);

  voltage = value *(5000.0 / 1023);

  Serial.print("    voltage = ");
  Serial.println(voltage);

  

}
