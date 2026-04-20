# Hafta 7: Fonksiyonlar I - Laboratuvar Örnekleri

Bu dizin, 7. hafta "Fonksiyonlar — Temel Yapılar ve Modüler Programlamaya Giriş" sunumunda yer alan kod örneklerini içermektedir.

## Örnek Dosyalar Listesi

| Dosya Adı | Açıklama |
| :--- | :--- |
| `moduler_yaklasim.c` | Fonksiyonların modüler kullanımı üzerine temel örnek. |
| `kuvvet_momenti.c` | `math.h` kütüphanesi kullanarak moment hesabı. |
| `rastgele_sayi.c` | `rand()` ve `time()` fonksiyonları ile rastgele sayı üretimi. |
| `acil_durum_durdur.c` | Parametresiz ve değer döndürmeyen (`void`) fonksiyon örneği. |
| `dort_fonksiyon_turu.c` | C'deki dört temel fonksiyon türünün (Parametreli/Parametresiz, Değer Döndüren/Döndürmeyen) bir arada kullanımı. |
| `parametre_argument.c` | Parametre ve argüman arasındaki teknik farkın gösterimi. |
| `dc_motor_sur.c` | Çoklu parametre ve farklı veri tipleri kullanımı. |
| `ikiye_katla.c` | Değer ile çağırma (**Call by Value**) prensibinin gösterimi. |
| `voltaj_degeri.c` | `return` deyimi ve ölü kod (dead code) kavramı. |
| `hata_kodlari.c` | `EXIT_SUCCESS` ve `EXIT_FAILURE` ile program sonlandırma. |
| `motor_aci_ayarla.c` | Erken çıkış (**Guard Clause**) deseni örneği. |
| `nested_calls.c` | İç içe fonksiyon çağrıları ve çalışma mantığı. |
| `prototip_kullanimi.c` | Fonksiyon prototipi (bildirimi) ve tanımlama farkı. |
| `isim_golgeleme.c` | Yerel kapsam ve isim gölgeleme (shadowing) örneği. |
| `blok_ici_kapsam.c` | Döngü ve koşul blokları içindeki değişken kapsamı. |
| `global_degisken.c` | Global değişken kullanımı ve olası riskleri. |
| `derleme_hatalari.c` | Sık karşılaşılan derleme hataları ve çözümleri. |
| `mantik_hatasi.c` | Mantık hataları ve ölü kod örneği. |

## Laboratuvar Uygulamaları

1. **`lab_uygulama1_robot.c`**: Robot Yön Kontrolü (Temel `void` fonksiyonlar).
2. **`lab_uygulama2_sicaklik.c`**: Sıcaklık Dönüştürücü (Celsius → Fahrenheit).
3. **`lab_uygulama3_tekerlek.c`**: Tekerlek Geometrisi Hesabı (`#define` ve çoklu fonksiyon).
4. **`lab_uygulama4_sensor.c`**: Sensör Veri Sınıflandırıcı (ADC → Voltaj ve Durum Raporlama).

## Derleme Notu
Matematik kütüphanesi (`math.h`) içeren örnekleri derlerken `-lm` bayrağını kullanmayı unutmayın:
```bash
gcc kuvvet_momenti.c -o kuvvet_momenti -lm
```
