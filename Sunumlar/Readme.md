# 📖 Bilgisayar Programlama — Ders Sunumları Kataloğu

Bu dizin, **BLM1030 - Bilgisayar Programlama** dersinin teorik temellerini barındıran haftalık ders sunumlarını (PDF formatında) içerir. Sunumlar, Mekatronik Mühendisliği öğrencilerinin C programlama dili temellerini, bellek yönetimini ve donanım kontrol prensiplerini kavraması amacıyla zengin içerik ve pratik şemalarla hazırlanmıştır.

---

## 📂 Ders Sunumları Listesi

| Hafta | Dosya Adı | Kapsanan Temel Konular |
| :---: | :--- | :--- |
| **1** | [Hafta_1_Giris.pdf](./Hafta_1_Giris.pdf) | Bilgisayar mantığına giriş, derleyici mimarisi, algoritma ve akış diyagramları. |
| **2** | [Hafta_2_Veri_Tipleri_ve_Degiskenler.pdf](./Hafta_2_Veri_Tipleri_ve_Degiskenler.pdf) | Bellek yapısı, bit/bayt kavramı, temel veri tipleri (char, int, float, double), değişken tanımlama ve formatlı giriş/çıkış (`printf`, `scanf`). |
| **3** | [Hafta_3_Temel_ve_Ileri_Duzey_Operatorler.pdf](./Hafta_3_Temel_ve_Ileri_Duzey_Operatorler.pdf) | Aritmetiksel, ilişkisel, mantıksal operatörler, öncelik sıralamaları ve bit seviyesinde (bitwise) operatörler (`&`, `|`, `^`, `<<`, `>>`). |
| **4** | [Hafta_4_Kontrol_Yapilari.pdf](./Hafta_4_Kontrol_Yapilari.pdf) | Karar yapıları, `if-else` koşulları, `switch-case` yapıları, ternary (`? :`) operatörü ve iç içe karar blokları. |
| **5** | [Hafta_5_Donguler.pdf](./Hafta_5_Donguler.pdf) | Tekrarlı yapılar; `for`, `while` ve `do-while` döngüleri. Döngü kontrol ifadeleri (`break`, `continue`) ve iç içe döngüler. |
| **6** | [Hafta_6_Diziler.pdf](./Hafta_6_Diziler.pdf) | Tek boyutlu ve çok boyutlu diziler (matrisler), karakter dizileri (strings) ve `string.h` kütüphanesi fonksiyonları. |
| **7** | [Hafta_7_Fonksiyonlar_I.pdf](./Hafta_7_Fonksiyonlar_I.pdf) | Modüler programlama prensibi, fonksiyon tanımlama ve prototipleri, parametre geçiş yöntemleri, yerel/global değişkenler ve bellek ömrü (scope). |
| **8** | [Hafta_8_Bellek_Yonetimi_I.pdf](./Hafta_8_Bellek_Yonetimi_I.pdf) | İşaretçiler (pointers) dünyasına giriş, bellek adresleme mantığı, adres (`&`) ve değer (`*`) operatörleri, referans ile çağrı (call by reference). |
| **9** | [Hafta_9_Fonksiyonlar_II.pdf](./Hafta_9_Fonksiyonlar_II.pdf) | Dizilerin fonksiyonlara aktarılması, öz yinelemeli (recursive) fonksiyonlar, statik (static) değişkenler ve değişken parametreli (variadic) fonksiyonlar. |
| **10** | [Hafta_10_Bellek_Yonetimi_II.pdf](./Hafta_10_Bellek_Yonetimi_II.pdf) | Dinamik bellek yönetimi (`malloc`, `calloc`, `realloc`, `free`), bellek sızıntıları (memory leaks) ve heap üzerinde dinamik matris/dizi işlemleri. |
| **11** | [Hafta_11_Numaralandirma_Tip_Tanimlama.pdf](./Hafta_11_Numaralandirma_Tip_Tanimlama.pdf) | Numaralandırma (`enum`), tip tanımlama (`typedef`), mekatronik durum makineleri ve gömülü sistem haberleşme paket yapıları tasarımı. |
| **12** | [Hafta_12_Yapilar_ve_Birliktelikler.pdf](./Hafta_12_Yapilar_ve_Birliktelikler.pdf) | Yapılar (`struct`), Birliktelikler (`union`) ve Bit Sahaları (`bitfields`). Bellek hizalaması (alignment/padding) mekanizmaları ve `#pragma pack(1)`. |

---

## 🛠️ Nasıl Çalışılmalı?

1. **Sunumu İnceleyin:** İlgili haftanın sunumunu açarak teorik altyapıyı ve örnek senaryoları okuyun.
2. **Laboratuvar Kodlarını Deneyin:** Sunumda geçen teorik ve uygulamalı örneklerin tamamını [LAB-Ornekler](../LAB-Ornekler/) klasöründe derleyerek çalıştırın ve üzerinde değişiklikler yapın.
3. **Sorular ve Hata Analizi:** Kodlardaki padding, endianness ve bit işlemleri gibi kritik bellek kavramlarını anlamak için sunumdaki görsel şemaları referans alın.

