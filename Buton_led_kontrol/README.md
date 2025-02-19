# Arduino LED Control with Buttons

Bu Arduino projesi, iki buton kullanarak bir dizi LED'i kontrol etmek için tasarlanmıştır. Bir buton ile tüm LED'leri açıp kapatırken, diğer buton ile LED'lerin durumunu değiştirir (toggle).

![Image](https://github.com/user-attachments/assets/0e52360e-529c-4669-81fe-81309ce529a1)

## Bağlantılar

- **Buton 1**: Düğme, tüm LED'leri açar ve basılı tutulduğunda LED'ler kapanana kadar açık kalır.
- **Buton 2**: Basılıp çekildiğinde LED'leri yakar tekrar basılıp çekildiğinde LED'leri söndürür.

### Bağlantı Şeması:
- **Buton 1**: Düğme 8 numaralı pine bağlı.
- **Buton 2**: Düğme 9 numaralı pine bağlı.
- **LED'ler**:
  - Kırmızı LED: Pin 2
  - Yeşil LED: Pin 3
  - Mavi LED: Pin 4
  - Sarı LED: Pin 5

## Kurulum

1. Arduino kartını bilgisayarınıza bağlayın.
2. Butonları ve LED'leri belirtilen pinlere bağlayın.
3. Arduino IDE'yi açın ve bu kodu yeni bir proje olarak yükleyin.
4. Kodu Arduino kartınıza yükleyin.

## Kod Açıklaması

### `setup()` Fonksiyonu:
- Seri iletişimi başlatır (`Serial.begin(9600)`).
- Butonları giriş olarak tanımlar (`pinMode(button1, INPUT)` ve `pinMode(button2, INPUT)`).
- LED'leri çıkış olarak tanımlar.

### `loop()` Fonksiyonu:
- Buton 1'e basıldığında, tüm LED'ler açılır ve buton bırakılana kadar açık kalır. Buton bırakıldığında LED'ler kapanır.
- Buton 2'ye basıldığında, LED'lerin durumu tersine çevrilir. Eğer LED'ler açık ise kapalı hale gelir, kapalı ise açık olur.


