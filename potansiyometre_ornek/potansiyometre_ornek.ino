int value = 0;
int minPin = 2;
int maxPin = 6;
int voltage = 0;
int onceki_voltage = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  value = analogRead(A0);
  Serial.print(value);
  Serial.print("    ");

  voltage = (value * (5000.0 / 1023)) / 1000;
  Serial.println(voltage);

  if (voltage > onceki_voltage) {
    int pinToTurnOn = minPin + voltage - 1;
    if (pinToTurnOn <= maxPin) {
      digitalWrite(pinToTurnOn, HIGH);
    }
  }
  else if (voltage < onceki_voltage) {
    int pinToTurnOff = minPin + onceki_voltage - 1;
    digitalWrite(pinToTurnOff, LOW);
  }

  onceki_voltage = voltage;
  delay(10);



}
