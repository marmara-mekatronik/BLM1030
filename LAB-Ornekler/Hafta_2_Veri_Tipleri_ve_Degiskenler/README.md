# Hafta 2 — Veri Tipleri ve Değişkenler LAB Örnekleri

Bu dizin, **Bilgisayar Programlama** dersinin 2. haftasına ait uygulamalı C kaynak kodlarını içermektedir.

## Dosya Listesi

| # | Dosya Adı | Konu | Açıklama |
|:-:|:----------|:-----|:---------|
| 1 | `Pratik_1_Degisken_sizeof.c` | Değişken Tanımlama ve sizeof | Farklı veri tiplerinde değişken tanımlama, `sizeof` ve limit değerleri (`limits.h`, `float.h`) |
| 2 | `Pratik_2_printf_Tablo.c` | printf Formatlı Çıktı | Format belirleyicileri ve hizalama ile tablo yazdırma |
| 3 | `Pratik_3_scanf_Etkilesimli.c` | scanf ile Veri Okuma | Kullanıcıdan boyut bilgisi alarak hacim hesaplama |
| 4 | `Pratik_4_Daire_Kure.c` | Daire ve Küre Hesaplamaları | `math.h` kullanarak alan, çevre ve hacim hesaplama |

> **Alt Dizin:** `Ozet_Pratikler/` — Ek özet pratik örnekleri içerir.

## Derleme ve Çalıştırma

```bash
# Tek dosya derleme
gcc -std=c99 -Wall -o cikti dosya_adi.c -lm

# Çalıştırma
./cikti
```

> **Not:** `Pratik_4_Daire_Kure.c` dosyası `math.h` kullandığı için `-lm` bayrağı gereklidir.

---

*Marmara Üniversitesi – Bilgisayar Programlama Dersi – Hafta 2: Veri Tipleri ve Değişkenler*
