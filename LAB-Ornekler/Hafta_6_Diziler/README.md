# Hafta 6 — Diziler (Arrays) LAB Örnekleri

Bu dizin, **Bilgisayar Programlama** dersinin 6. haftasına ait uygulamalı C kaynak kodlarını içermektedir.  
Tüm örnekler Bölüm 6: **Uygulamalı Mekatronik Senaryoları** başlığından derlenmiştir.

## Dosya Listesi

| # | Dosya Adı | Konu | Açıklama |
|:-:|:----------|:-----|:---------|
| 1 | `Bolum6_Uygulama_1_Hareketli_Ortalama.c` | Hareketli Ortalama Filtresi | Gürültülü sensör verisini pencere yöntemiyle yumuşatma |
| 2 | `Bolum6_Uygulama_2_Esik_Kontrolu.c` | Eşik Kontrolü | Sensör dizisinde belirli bir eşiği aşan okumaları sayma |
| 3 | `Bolum6_Uygulama_3_Bubble_Sort.c` | Bubble Sort (Kabarcık Sıralama) | En basit sıralama algoritması — O(n²) karmaşıklık |
| 4 | `Bolum6_Uygulama_4_Selection_Sort.c` | Selection Sort (Seçerek Sıralama) | Minimum elemanı bulup yerine koyarak sıralama |
| 5 | `Bolum6_Uygulama_5_Sensor_Istatistikleri.c` | Sensör Verisi İstatistikleri | Ortalama, standart sapma, min ve max hesaplama |
| 6 | `Bolum6_Uygulama_6_Median_Hesaplama.c` | Median (Ortanca) Hesaplama | Veriyi sıralayıp ortadaki değeri bulma |
| 7 | `Bolum6_Uygulama_7_Matris_Carpimi.c` | Matris Çarpımı | Robotik kolda kinematik dönüşüm matrisleri çarpımı |
| 8 | `Bolum6_Uygulama_8_Frekans_Analizi.c` | Frekans Analizi (Histogram) | Dizideki değerlerin frekans dağılımını hesaplama ve görselleştirme |

## Derleme ve Çalıştırma

```bash
# Tek dosya derleme
gcc -std=c99 -Wall -o cikti dosya_adi.c -lm

# Çalıştırma
./cikti
```

> **Not:** `Bolum6_Uygulama_5_Sensor_Istatistikleri.c` dosyası `math.h` kullandığı için `-lm` bayrağı gereklidir.

---

*Marmara Üniversitesi – Bilgisayar Programlama Dersi – Hafta 6: Diziler*
