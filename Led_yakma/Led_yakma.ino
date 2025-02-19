int ledRed = 2;
int ledBlue = 3;
int ledGreen = 4;
int ledYellow = 5;
int ledRed2 = 6;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed2, OUTPUT);
}

void loop() {
  for (int i = 2; i < 7; i++) {
    //digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
    delay(1000);    
  }

  

}
