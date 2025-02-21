int led = 3;
int value = 0;
int value_n = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  value = analogRead(A0);

  // alternatif yol
  /*
    value_n = (value * (255.0/1023));
    Serial.println(value_n);
  */
  // tavsiye edilen yol
  value = map(value, 0, 1023, 0, 255);

  analogWrite(led, value);


}
