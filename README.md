# 💻 BLM1030 - Bilgisayar Programlama

Bu depo, BLM1030 kodlu **Bilgisayar Programlama** (C Programlama Dili) dersine ait **ders sunumlarını**, modüler **teorik örnek kodları** ve **haftalık laboratuvar pratiklerini** barındırır.

---

## 📂 İçindekiler ve Klasör Yapısı

Depo temel olarak üç ana eğitim dizinine ayrılmıştır:

### 1. 📖 [Sunumlar](./Sunumlar)
Dersin teorik temellerinin anlatıldığı slaytlara ve ders notlarına ait PDF belgeleri:

| Hafta | Dosya | Konu |
|:-----:|:------|:-----|
| 1 | `Hafta_1_Giris.pdf` | Bilgisayar mantığına giriş, temel kavramlar |
| 2 | `Hafta_2_Veri_Tipleri_ve_Degiskenler.pdf` | Bellek, bit-byte mantığı, primitive tipler |
| 3 | `Hafta_3_Temel_ve_Ileri_Duzey_Operatorler.pdf` | Temel aritmetikten bit seviyesi operatörlere |
| 4 | `Hafta_4_Kontrol_Yapilari.pdf` | if-else, switch-case, ternary operatör |
| 5 | `Hafta_5_Donguler.pdf` | for, while, do-while döngüleri, iç içe döngüler |
| 6 | `Hafta_6_Diziler.pdf` | Tek/çok boyutlu diziler, stringler, string.h |
| 7 | `Hafta_7_Fonksiyonlar_I.pdf` | Modüler programlama, fonksiyon prototipleri, yerel/global değişkenler |
| 8 | `Hafta_8_Bellek_Yonetimi_I.pdf` | İşaretçi (pointer) temelleri, bellek adresleme, referans ile çağrı (call by reference) |
| 9 | `Hafta_9_Fonksiyonlar_II.pdf` | Dizilerin fonksiyonlara aktarılması, recursion (öz yineleme), variadic fonksiyonlar |
| 10 | `Hafta_10_Bellek_Yonetimi_II.pdf` | Dinamik bellek tahsisi (malloc, calloc, realloc, free), bellek sızıntıları ve yönetimi |
| 11 | `Hafta_11_Numaralandirma_Tip_Tanimlama.pdf` | Numaralandırma (enum) ve Tip Tanımlama (typedef) temelleri, gömülü sistem UART haberleşmesi |
| 12 | `Hafta_12_Yapilar_ve_Birliktelikler.pdf` | Yapılar (struct), Birliktelikler (union) ve Bit Sahaları (bitfields), bellek hizalama (padding) |

### 2. 🧪 [LAB-Ornekler](./LAB-Ornekler)
Ders anlatımını ve sunumları desteklemek için hazırlanan, teoriğin pratiğine döküldüğü **haftalık ders uygulamaları**dır. Her bir haftanın teorik içeriğinin bire bir C kodundaki karşılıklarını (`Ornek` ve `Uygulama` düzeyinde) kapsar.

| Hafta | Klasör | İçerik |
|:-----:|:-------|:-------|
| 2 | `Hafta_2_Veri_Tipleri_ve_Degiskenler/` | sizeof, printf, scanf, daire/küre hesaplamaları (4 örnek) |
| 3 | `Hafta_3_Operatorler/` | Aritmetik, öncelik, artırma/azaltma, tip dönüşümü, PID kontrol (6 örnek) |
| 4 | `Hafta_4_Kontrol_Yapilari/` | if-else, switch-case, fall-through, ternary, motor kontrol (6 örnek) |
| 5 | `Hafta_5_Donguler/` | Desen çizimi, asal sayı, Fibonacci, Taylor serisi, sinyal işleme (20 örnek) |
| 6 | `Hafta_6_Diziler/` | Hareketli ortalama, sıralama, istatistik, matris çarpımı, histogram (8 örnek) |
| 7 | `Hafta_7_Fonksiyonlar_I/` | Modüler fonksiyon tasarımı, scope analizleri, robotik/sensör laboratuvar çalışmaları (22 örnek) |
| 8 | `Hafta_8_Bellek_Yonetimi_I/` | İşaretçi (pointer) aritmetiği, call-by-reference swap, ADC normalizasyon (15 örnek) |
| 9 | `Hafta_9_Fonksiyonlar_II/` | Durum makineleri (State Machine), PID hafıza simülasyonu, variadic fonksiyonlar (7 örnek) |
| 10 | `Hafta_10_Bellek_Yonetimi_II/` | Dinamik dizi tahsisi, realloc ile dinamik genişleme, dinamik matris transpozu (6 örnek) |
| 11 | `Hafta_11_Numaralandirma_Tip_Tanimlama/` | enum ve typedef, makro-önişlemci durum makineleri, UART paket yapısı (13 örnek) |
| 12 | `Hafta_12_Yapilar_ve_Birliktelikler/` | struct, union, bitfields, padding hizalaması, sıkıştırma, drone/IMU simülasyonları (16 örnek) |

### 3. 🧩 [Ornekler](./Ornekler)
Dönem boyunca spesifik bir tekniği ya da konuyu öğretmek üzerine kategorize edilmiş daha geniş kod arşividir. Konular aşağıdakilerle sınırlı olmamak üzere oldukça geniş bir algoritma altyapısını yansıtır:
- Temel Giriş/Çıkış (`printf`, `scanf`)
- Karşılaştırma Karar Yapıları ve Döngüler (`if-else`, `for`, `while`)
- Modüler Fonksiyonlar (`Hafta 13` bandındaki örnek diziler)
- Temel Algoritmalar (Sıralama: `Bubble Sort`, `Araya Ekleme`, Arama: `İkili Arama`)
- İşaretçiler (Pointers) (`14_isaretci` alt dosyalarında farklı senaryolarla işlenmiştir)
- Dinamik Bellek Yönetimi (`malloc`, `calloc`)
- İleri C Yapıları (`struct`, `enum`, Makro önişlemciler ve Dosya `FILE` İşlemleri)

---

## 🚀 C Kodlarını Nasıl Derleyebilir ve Çalıştırabilirsiniz?

Klasörlerde bulunan tüm `.c` uzantılı kaynak kodları, bir C (Örn: GCC) ya da C++ derleyicisi (Örn: G++) yüklü olan sistemlerde doğrudan platform-bağımsız olarak çalıştırılabilir durumdadır. Eğer terminal (işletim sistemi konsolu) kullanıyorsanız komutlarla derleme yapabilirsiniz:

```bash
# Herhangi bir standart kodu derlemek ve program adıyla kaydetmek için:
gcc ornek_kod.c -o cikti_program

# Programı (uygulamayı) konsol üzerinden çalıştırmak için (Mac/Linux):
./cikti_program

# Windows sistemlerinde çalıştırmak için doğrudan exe adı yazılarak tetiklenir:
cikti_program.exe
```

> **📌 Önemli Not:**
> Eğer `Hafta 2 Pratik 4` içindeki daire & küre hacmi gibi matematik fonksiyonları (`pow()`, `sqrt()`) içeren bir dosyayı Unix/Linux ortamlarda derleyecekseniz komutun sonuna `-lm` bağlantısını (Linker Math) eklemeyi unutmayın:
> `gcc ornek_kod.c -o cikti_program -lm`
