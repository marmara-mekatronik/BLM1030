# Hafta 4 — Kontrol Yapıları LAB Örnekleri

Bu dizin, **Bilgisayar Programlama** dersinin 4. haftasına ait uygulamalı C kaynak kodlarını içermektedir.

## Dosya Listesi

| # | Dosya Adı | Konu | Açıklama |
|:-:|:----------|:-----|:---------|
| 1 | `Uygulama_1_Temel_if_else.c` | Temel if-else | Yaş ve cinsiyet kontrolü ile koşullu karar verme |
| 2 | `Uygulama_2_else_if_Sicaklik_Uyari.c` | else-if Merdiveni | Sıcaklık birim dönüşümü ve eşik tabanlı uyarı sistemi |
| 3 | `Uygulama_3_switch_case_Menu.c` | switch-case Menü | Matematiksel hesaplama menüsü ile switch-case kullanımı |
| 4 | `Uygulama_3_b_switch_case_Fall_Through.c` | switch-case Fall-Through | `break` olmadan fall-through davranışının gösterimi |
| 5 | `Uygulama_4_Ternary_Opr.c` | Ternary (Koşul) Operatörü | `? :` operatörü ile min, max ve mutlak değer hesaplama |
| 6 | `Uygulama_5_Motor_Kontrol.c` | Motor Kontrol Sistemi | Mekatronik uygulaması: sıcaklık, akım ve gerilim kontrolü |

## Derleme ve Çalıştırma

```bash
# Tek dosya derleme
gcc -std=c99 -Wall -o cikti dosya_adi.c -lm

# Çalıştırma
./cikti
```

> **Not:** `Uygulama_3_switch_case_Menu.c` dosyası `math.h` kullandığı için `-lm` bayrağı gereklidir.

---

*Marmara Üniversitesi – Bilgisayar Programlama Dersi – Hafta 4: Kontrol Yapıları*
