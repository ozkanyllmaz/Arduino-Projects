int state1, state2;
int ledRed = 2;
int ledBlue = 3;
int button_open = 8;
int button_close = 9;

void setup() {
  pinMode(button_open, INPUT);
  pinMode(button_close, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  state1 = digitalRead(button_open);
  state2 = digitalRead(button_close);

  if (state1 == 1) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);
  }

  if (state2 == 1) {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
  }

  if (state1 == 1 && state2 == 1) {
    digitalWrite(ledRed, HIGH);
    delay(50);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, HIGH);
    delay(50);
    digitalWrite(ledBlue, LOW);
    delay(50);
  }
}
