# 💻 BLM1030 - Bilgisayar Programlama

Bu depo, BLM1030 kodlu **Bilgisayar Programlama** (C Programlama Dili) dersine ait **ders sunumlarını**, modüler **teorik örnek kodları** ve **haftalık laboratuvar pratiklerini** barındırır.

---

## 📂 İçindekiler ve Klasör Yapısı

Depo temel olarak üç ana eğitim dizinine ayrılmıştır:

### 1. 📖 [Sunumlar](./Sunumlar)
Dersin teorik temellerinin anlatıldığı slaytlara ve ders notlarına ait PDF belgeleri:
- `Hafta_1_Giris.pdf`: Bilgisayar mantığına giriş, temel kavramlar.
- `Hafta_2_Veri_Tipleri_ve_Degiskenler.pdf`: Bellek, bit-byte mantığı, primitive tipler.
- `Hafta_3_Temel_ve_Ileri_Duzey_Operatorler.pdf`: Temel aritmetikten bit seviyesi operatörlere kadar işlenen konular.

### 2. 🧪 [LAB-Ornekler](./LAB-Ornekler)
Ders anlatımını ve sunumları desteklemek için hazırlanan, teoriğin pratiğine döküldüğü **haftalık ders uygulamaları**dır. Her bir haftanın teorik içeriğinin bire bir C kodundaki karşılıklarını (`Ornek` ve `Uygulama` düzeyinde) kapsar.
- `Hafta_2_Veri_Tipleri_ve_Degiskenler`
- `Hafta_3_Operatorler`

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
