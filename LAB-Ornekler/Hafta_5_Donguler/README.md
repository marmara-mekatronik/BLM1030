# Hafta 5 — Döngüler LAB Örnekleri

Bu dizin, **Bilgisayar Programlama** dersinin 5. haftasına ait uygulamalı C kaynak kodlarını içermektedir.

## Dosya Listesi

### Bölüm 3: İç İçe Döngüler ve Desen Örnekleri

| # | Dosya Adı | Konu | Açıklama |
|:-:|:----------|:-----|:---------|
| 1 | `Bolum3_Sag_Ucgen.c` | Sağ Üçgen Deseni | İç içe `for` ile yıldız üçgeni çizme |
| 2 | `Bolum3_Piramit.c` | Piramit Deseni | Ortalanmış piramit şekli çizme |
| 3 | `Bolum3_Floyd_Ucgeni.c` | Floyd Üçgeni | Ardışık sayılarla üçgen oluşturma |
| 4 | `Bolum3_Carpim_Tablosu.c` | Çarpım Tablosu | İç içe döngülerle formatlı çarpım tablosu |

### Bölüm 4: Döngü Kontrol Kavramları

| # | Dosya Adı | Konu | Açıklama |
|:-:|:----------|:-----|:---------|
| 5 | `Bolum4_Sayi_Tahmin_Oyunu.c` | Sayı Tahmin Oyunu | `while` döngüsü ve `break` ile rastgele sayı tahmin oyunu |

### Uygulamalar (Pratik Örnekler)

| # | Dosya Adı | Konu | Açıklama |
|:-:|:----------|:-----|:---------|
| 6 | `Uygulama_1_Asal_Sayi_Kontrolu.c` | Asal Sayı Kontrolü | Girilen sayının asal olup olmadığını kontrol etme |
| 7 | `Uygulama_2_Asal_Sayilari_Listeleme.c` | Asal Sayıları Listeleme | Belirli bir üst sınıra kadar tüm asal sayıları bulma |
| 8 | `Uygulama_3_Mukemmel_Sayi_Kontrolu.c` | Mükemmel Sayı Kontrolü | Bir sayının mükemmel sayı olup olmadığını kontrol etme |
| 9 | `Uygulama_4_Us_Alma.c` | Üs Alma | Döngü ile taban ve üs alarak sonuç hesaplama |
| 10 | `Uygulama_5_Not_Ortalamasi_Hesaplama.c` | Not Ortalaması Hesaplama | Sentinel değer ile not girişi ve ortalama hesaplama |
| 11 | `Uygulama_6_Sayinin_Tersini_Alma.c` | Sayının Tersini Alma | Bir tamsayının rakamlarını ters çevirme |
| 12 | `Uygulama_7_Elmas_Deseni_Cizimi.c` | Elmas Deseni Çizimi | İç içe döngülerle elmas (diamond) şekli çizme |
| 13 | `Uygulama_8_EBOB_ve_EKOK_Hesaplama.c` | EBOB ve EKOK | Öklid algoritması ile EBOB ve EKOK hesaplama |
| 14 | `Uygulama_9_Cift_Atla_Tek_Topla.c` | Çift Atla Tek Topla | Çift sayıları atlayıp tek sayıları toplama |
| 15 | `Uygulama_10_Basit_Hesap_Makinesi.c` | Basit Hesap Makinesi | Döngü-menü tabanlı 4 işlem hesap makinesi |

### Bölüm 7: Mekatronik Uygulamaları

| # | Dosya Adı | Konu | Açıklama |
|:-:|:----------|:-----|:---------|
| 16 | `Bolum7_Uygulama_1_Taylor_Serisi.c` | Taylor Serisi | e^x fonksiyonunun Taylor serisi ile yaklaşık hesabı |
| 17 | `Bolum7_Uygulama_2_Leibniz_Pi.c` | Leibniz Pi Hesabı | π sayısının Leibniz serisi ile yaklaşık hesabı |
| 18 | `Bolum7_Uygulama_3_Dizi_Islemleri.c` | Dizi İşlemleri | Dizi üzerinde toplam, ortalama, min/max ve sıralama |
| 19 | `Bolum7_Uygulama_4_Fibonacci.c` | Fibonacci Serisi | Fibonacci sayı dizisinin döngü ile hesaplanması |
| 20 | `Bolum7_Uygulama_5_Sinyal_Isleme.c` | Sinyal İşleme | Sinüs sinyali üretme ve tepe/RMS değer hesaplama |

## Derleme ve Çalıştırma

```bash
# Tek dosya derleme
gcc -std=c99 -Wall -o cikti dosya_adi.c -lm

# Çalıştırma
./cikti
```

> **Not:** `Bolum7_Uygulama_1_Taylor_Serisi.c`, `Bolum7_Uygulama_2_Leibniz_Pi.c` ve `Bolum7_Uygulama_5_Sinyal_Isleme.c` dosyaları `math.h` kullandığı için `-lm` bayrağı gereklidir.

---

*Marmara Üniversitesi – Bilgisayar Programlama Dersi – Hafta 5: Döngüler*
