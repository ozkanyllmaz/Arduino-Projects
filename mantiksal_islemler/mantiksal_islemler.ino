void setup()
{
  Serial.begin(9600);
  Serial.println(basamakTopla(0));
  Serial.println(basamakTopla(8));
  Serial.println(basamakTopla(23));
  Serial.println(basamakTopla(604));
  Serial.println(basamakTopla(2888));
  Serial.println(basamakTopla(32767));
}

void loop() {
  // Burası boş
}

int basamakTopla(int x) {
  int sum = 0;
  while(x > 0){
    sum = sum + x%10;
    x = (x-(x%10))/10;
  }
  return sum;
  
}
