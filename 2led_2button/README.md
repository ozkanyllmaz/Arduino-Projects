# Arduino LED Kontrol Projesi

Bu proje, iki buton kullanarak kırmızı ve mavi LED'leri açıp kapatmayı sağlar.  
Ayrıca, iki butona aynı anda basıldığında LED'ler yanıp söner.

![Image](https://github.com/user-attachments/assets/5f190805-9ea4-4fb6-a157-f7caf51f459c)

## Kullanılan Malzemeler
- Arduino Uno
- 2x LED (Kırmızı, Mavi)
- 2x 220Ω Direnç
- 2x Buton
- 2x 10kΩ Direnç (Opsiyonel, pull-down için)
- Bağlantı kabloları

## Bağlantılar
| Arduino Pin | Bileşen |
|------------|---------|
| 2 | **Kırmızı LED (ledRed)** |
| 3 | **Mavi LED (ledBlue)** |
| 8 | **Button Open** |
| 9 | **Button Close** |

## Kod Açıklaması
- **Button Open (Pin 8)** basıldığında, **kırmızı ve mavi LED'ler yanar**.
- **Button Close (Pin 9)** basıldığında, **kırmızı ve mavi LED'ler kapanır**.
- **İki butona aynı anda basıldığında**, LED'ler **yanıp sönme efekti** verir.

## Kod
```cpp
int state1, state2;
int ledRed = 2;
int ledBlue = 3;
int button_open = 8;
int button_close = 9;

void setup() {
  pinMode(button_open, INPUT);
  pinMode(button_close, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  state1 = digitalRead(button_open);
  state2 = digitalRead(button_close);

  if (state1 == 1) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);
  }

  if (state2 == 1) {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
  }

  if (state1 == 1 && state2 == 1) {
    digitalWrite(ledRed, HIGH);
    delay(50);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, HIGH);
    delay(50);
    digitalWrite(ledBlue, LOW);
    delay(50);
  }
}
