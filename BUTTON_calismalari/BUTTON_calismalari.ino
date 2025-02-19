int button_up = 2;
int button_down = 3;
int state1 = 0, state2 = 0;
int sayac = 0;

void setup() {
  Serial.begin(9600);
  pinMode(button_up, INPUT);
  pinMode(button_down, INPUT);

}

void loop() {

  if (digitalRead(button_up) == 1) {
    sayac++;
    Serial.print("sayac = ");
    Serial.println(sayac);
    int sure1 = millis();
    while (digitalRead(button_up) == 1) {
      delay(100);
      if (digitalRead(button_down) == 1) {
        while ((millis() - sure1) >= 5000) {
          sayac = 0;
          Serial.print("sayac = ");
          Serial.println(sayac);
          break;
        }
      }
    }
  }
  else if (digitalRead(button_down) == 1) {
    sayac--;
    Serial.print("sayac = ");
    Serial.println(sayac);
    int sure = millis();
    while (digitalRead(button_down) == 1) {
      delay(100);
      if (digitalRead(button_up) == 1) {
        while ((millis() - sure) >= 5000) {
          sayac = 0;
          Serial.print("sayac = ");
          Serial.println(sayac);
          break;
        }
      }

    }
  }
}
