# Hafta 8: Bellek Yönetimi ve İşaretçiler (Pointers) I

Bu dizin, "Hafta 8: Bellek Yönetimi I" sunumunda yer alan C kodu örneklerini ve uygulama çalışmalarını içermektedir.

## Örnek Dosyalar

1.  **01_adres_operatoru.c**: `&` operatörü ile bir değişkenin bellek adresini öğrenme.
2.  **02_pointer_tanimlama.c**: Pointer tanımlama, adres atama ve dereference (`*`) işlemleri.
3.  **03_call_by_value.c**: Değer ile çağırma yönteminde orijinal verinin değişmemesi (problem).
4.  **04_call_by_reference.c**: Referans ile çağırma (pointer) kullanarak orijinal veriyi değiştirme (çözüm).
5.  **05_swap_fonksiyonu.c**: İki değişkenin değerini takas eden klasik `swap` fonksiyonu.
6.  **06_coklu_deger_dondurme.c**: Pointer kullanarak bir fonksiyondan birden fazla "sonuç" alma (Lidar örneği).
7.  **07_dizi_pointer_iliskisi.c**: Dizi isminin aslında bir pointer olduğunun ispatı.
8.  **08_isaretci_aritmetigi.c**: Bellek üzerinde pointer aritmetiği (`ptr++`, `ptr + i`) ile ilerleme.
9.  **09_fonksiyon_dizi_aktarimi.c**: Dizilerin fonksiyonlara pointer olarak aktarılması (Array Decay).
10. **10_sizeof_pointer.c**: Farklı veri tiplerindeki pointerların bellek boyutlarının karşılaştırılması.
11. **11_const_pointer.c**: `const` anahtar kelimesi ile salt okunur (read-only) pointer kullanımı.
12. **12_null_pointer.c**: Güvenli kod yazımı için `NULL` pointer kontrolü.

## Laboratuvar Uygulamaları

- **13_uygulama_swap.c**: Kullanıcıdan alınan iki sensör değerinin takas edilmesi.
- **14_uygulama_min_max.c**: Bir dizideki minimum ve maksimum değerleri aynı anda bulan fonksiyon.
- **15_uygulama_adc_normalize.c**: Ham ADC verilerini voltaj değerlerine dönüştüren normalizasyon uygulaması.

## Derleme ve Çalıştırma

Herhangi bir örneği derlemek için terminalde şu komutu kullanabilirsiniz:

```bash
gcc dosya_adi.c -o program
./program
```
