# LDR ile LED Kontrolü

Bu proje, bir LDR (Işık Bağımlı Direnç) kullanarak ortam ışığı seviyesini ölçer ve belirlenen eşik değerinin altına düştüğünde bir LED'i yakar.

![Image](https://github.com/user-attachments/assets/bbc7632f-3356-44e3-9165-b997d9d1a569)

## Gereksinimler

- Arduino kartı (Uno, Mega vb.)
- LDR (Işık Bağımlı Direnç)
- 10kΩ direnç
- LED
- Bağlantı kabloları

## Devre Bağlantısı

1. LDR'nin bir ucu 5V'a, diğer ucu A0 girişine bağlanmalıdır.
2. A0 girişine bağlanan uç aynı zamanda 10kΩ direnç ile GND'ye bağlanmalıdır.
3. LED'in anod (uzun bacak) ucu Arduino'nun 3 numaralı dijital çıkışına bağlanmalıdır.
4. LED'in katod (kısa bacak) ucu GND'ye bağlanmalıdır.

## Kod Açıklaması

- `analogRead(LDR)`: LDR'den gelen analog değeri okur.
- `esik_deger`: Ortam ışığına göre ayarlanması gereken eşik değeri.
- Eğer okunan değer eşik değerinden küçükse LED yanar, büyükse söner.
- Seri haberleşme (`Serial.begin(9600)`) ile LDR'nin okunan değerleri ekrana yazdırılır.

## Kullanım

1. Kodu Arduino'ya yükleyin.
2. Seri Monitörü (`9600 baud`) açarak LDR'nin okuduğu değerleri gözlemleyin.
3. LED'in yanıp sönmesini test edin ve `esik_deger` değişkenini ortam koşullarına göre ayarlayın.
