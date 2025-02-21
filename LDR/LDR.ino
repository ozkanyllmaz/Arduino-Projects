#define LED 3
#define LDR A0
int esik_deger = 10;


void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
}

void loop() {
  Serial.println(analogRead(LDR));

  // esik degeri kendi ortam kosullariniza gore seciniz  
  if(analogRead(LDR) < esik_deger) {
    digitalWrite(LED, 1);
  }
  else {
    digitalWrite(LED ,0);
  }
  
}
