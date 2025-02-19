int a = 0;

void setup() {
  Serial.begin(9600);


}

void loop() {
  a = a + 1;
  Serial.println(a);

}
