int button1 = 8;
int button2 = 9;
int ledRed = 2;
int ledGreen = 3;
int ledBlue = 4;
int ledYellow = 5;
bool ledDurum = 0;

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  for (int i = 2; i < 6; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  Serial.print(digitalRead(button1));
  Serial.print("  ");
  Serial.println(digitalRead(button2));

  if (digitalRead(button1) == 1) {
    while (digitalRead(button1) == 1) {
      delay(100);
      digitalWrite(ledRed, HIGH);
      digitalWrite(ledGreen, HIGH);
      digitalWrite(ledBlue, HIGH);
      digitalWrite(ledYellow, HIGH);
    }
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(ledYellow, LOW);
  }

  if (digitalRead(button2) == 1) {
    ledDurum = !ledDurum;
    while(digitalRead(button2) == 1){
      delay(100);
    }

    digitalWrite(ledRed, ledDurum);
    digitalWrite(ledGreen, ledDurum);
    digitalWrite(ledBlue, ledDurum);
    digitalWrite(ledYellow, ledDurum);

  }
}
