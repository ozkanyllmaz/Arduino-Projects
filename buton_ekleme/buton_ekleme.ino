int state;
int button = 8;
int ledRed = 2;
int ledBlue = 3;
int ledGreen = 4;
int ledYellow = 5;

void setup() {
  pinMode(button, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(button);
  Serial.println(state);

  if (state == 1) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledYellow, HIGH);
  }
  else{
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, LOW);
  }



}
