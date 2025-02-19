int ledGreen = 2;
int ledRed = 3;
int ledYellow = 4;
int ledBlue = 5;
int ledGreen2 = 6;

int minPin = 2;
int maxPin = 6;


void setup() {
  for (int i = 2; i < 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = minPin; i <= maxPin; i++) {
    for (int j = 0; j < 10; j++) {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      delay(100);
    }
  }
  for (int i = maxPin-1; i > minPin; i--) {
    for (int j = 0; j < 10; j++) {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      delay(100);
    }
  }



}
