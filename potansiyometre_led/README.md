# LED Parlaklık Kontrolü (Arduino)

Bu proje, bir potansiyometre kullanarak bir LED'in parlaklığını ayarlamak için analog giriş okumayı ve PWM çıkışı kullanmayı gösterir.

![Image](https://github.com/user-attachments/assets/5dcc1368-e3b9-4e15-bcb4-895895ef1b54)

## Gerekli Malzemeler

- Arduino kartı (Uno, Mega vb.)
- LED
- 220Ω direnç
- Potansiyometre
- Bağlantı kabloları

## Devre Bağlantıları

- Potansiyometrenin orta bacağı A0 pinine bağlanır.
- Potansiyometrenin bir bacağı GND'ye, diğer bacağı 5V'a bağlanır.
- LED'in anot (+) ucu dijital 3 numaralı pine bağlanır.
- LED'in katot (-) ucu GND'ye bağlanır (220Ω direnç üzerinden).

## Kod Açıklaması

1. `analogRead(A0)` ile potansiyometreden gelen analog değer okunur (0-1023 aralığında).
2. Alternatif bir yöntem olarak, değerin 0-255 aralığına dönüştürülmesi için çarpma işlemi uygulanabilir ancak önerilen yol `map()` fonksiyonunu kullanmaktır.
3. `map(value, 0, 1023, 0, 255)` ile değer 0-255 aralığına ölçeklendirilir.
4. `analogWrite(led, value)` ile LED'in parlaklığı ayarlanır.
5. Seri port üzerinden okunan değerler görüntülenebilir.

## Kullanım

1. Arduino kartınızı bilgisayarınıza bağlayın.
2. Kodları Arduino IDE'ye yükleyin.
3. Potansiyometreyi çevirerek LED parlaklığını ayarlayın.

Bu proje, PWM sinyali kullanarak bir LED'in parlaklığını analog giriş ile nasıl kontrol edebileceğinizi gösterir.
