#define GREENRED 3
#define BLUELED 5

void setup() {
  pinMode(GREENRED, OUTPUT);
  pinMode(BLUELED, OUTPUT);

}

void loop() {
  for (int i = 0; i  < 256; i++) {
    analogWrite(BLUELED, i);
    analogWrite(GREENRED, 255 - i);
    delay(3);
  }
  for (int i = 0; i  < 256; i++) {
    analogWrite(BLUELED, 255 - i);
    analogWrite(GREENRED, i);
    delay(3);
  }
}
