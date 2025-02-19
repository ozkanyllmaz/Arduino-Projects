# Button Counter Project

Bu proje, iki buton ile bir sayacı artırıp azaltan basit bir Arduino uygulamasıdır. Butonlar belirli bir süre boyunca basılı tutulduğunda sayaç sıfırlanır.

![Image](https://github.com/user-attachments/assets/943bc3b1-1a2f-4e01-a196-4ac7bd85fc6d)

## Donanım Gereksinimleri
- Arduino (Uno, Mega vb.)
- 2x Push Button (Buton)
- 2x 10KΩ Direnç (Pull-down için)
- Breadboard ve bağlantı kabloları

## Bağlantılar
| Arduino Pin | Bağlı Bileşen |
|------------|--------------|
| 2          | Button Up    |
| 3          | Button Down  |

Her butonun bir ucu GND'ye, diğer ucu ise ilgili Arduino pinine bağlanmalıdır. Ayrıca, 10KΩ dirençler butonların GND tarafına pull-down olarak bağlanmalıdır.

## Kod Açıklaması
Kod, butonlardan gelen girdileri okuyarak bir sayaç değerini artırıp azaltır.

### Ana Mantık
- `button_up` (Pin 2) butonuna basıldığında sayaç bir artar.
- `button_down` (Pin 3) butonuna basıldığında sayaç bir azalır.
- Eğer iki butona aynı anda basılır ve 5 saniye boyunca basılı tutulursa sayaç sıfırlanır.
- Sayaç değeri `Serial Monitor` üzerinden görüntülenir.

## Kullanım
1. Arduino'yu bilgisayara bağlayın.
2. Kodu Arduino IDE ile yükleyin.
3. `Tools > Serial Monitor` seçeneği ile sayaç değerlerini takip edin.
4. `button_up` butonuna basarak sayacı artırın.
5. `button_down` butonuna basarak sayacı azaltın.
6. İki butona 5 saniye boyunca birlikte basılı tutarak sayacı sıfırlayın.

## Kod
```cpp
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
```

