#include <stdio.h>
#include <stdlib.h> // malloc ve free için gerekli
#include <string.h>

// 1. Adım: enum Tanımlaması
// Ürünlerin kategorilerini tutmak için bir enum tanımlıyoruz.
typedef enum {
    ELEKTRONIK,
    GIDA,
    GIYIM,
    KITAP
} UrunKategori;

// 2. Adım: struct Tanımlaması
// Bir ürünün bilgilerini bir arada tutmak için bir yapı tanımlıyoruz.
typedef struct {
    int id;
    char ad[50];
    double fiyat;
    UrunKategori kategori;
} Urun;

// 3. Adım: Geri Dönüş Değeri "struct pointer" olan Fonksiyon
// Dosyadan bir ürün okur, bellekte yer ayırır ve o ürünün adresini döndürür.
Urun* dosyadanUrunOku(const char* dosyaAdi);

// Ana programın başlangıcı
int main() {
    const char* dosyaAdi = "urun.txt";

    // --- Dosyaya Yazma Bölümü ---
    // Örnek bir ürün oluşturalım.
    Urun ornekUrun = {101, "Akilli Saat", 7500.99, ELEKTRONIK};

    // Dosyayı yazma modunda açalım.
    FILE* dosya = fopen(dosyaAdi, "w");
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    // Ürün bilgilerini dosyaya yazalım.
    fprintf(dosya, "%d %s %.2f %d\n",
            ornekUrun.id,
            ornekUrun.ad,
            ornekUrun.fiyat,
            ornekUrun.kategori);

    // Dosyayı kapatalım.
    fclose(dosya);
    printf("Örnek ürün '%s' bilgisi %s dosyasina yazildi.\n", ornekUrun.ad, dosyaAdi);
    printf("----------------------------------------\n");


    // --- Dosyadan Okuma ve Struct Pointer Kullanımı Bölümü ---
    
    // Fonksiyonu çağırarak ürünü dosyadan okuyup belleğe alalım.
    // "okunanUrunPtr" artık bellekteki ürünün adresini tutuyor.
    Urun* okunanUrunPtr = dosyadanUrunOku(dosyaAdi);

    if (okunanUrunPtr != NULL) {
        printf("Dosyadan okunan ürün bilgileri:\n");
        printf("ID: %d\n", okunanUrunPtr->id);
        printf("Ad: %s\n", okunanUrunPtr->ad);
        printf("Fiyat: %.2f TL\n", okunanUrunPtr->fiyat);

        // Enum değerine göre kategoriyi metin olarak yazdıralım.
        switch (okunanUrunPtr->kategori) {
            case ELEKTRONIK:
                printf("Kategori: Elektronik\n");
                break;
            case GIDA:
                printf("Kategori: Gıda\n");
                break;
            case GIYIM:
                printf("Kategori: Giyim\n");
                break;
            case KITAP:
                printf("Kategori: Kitap\n");
                break;
            default:
                printf("Kategori: Bilinmiyor\n");
                break;
        }

        // 4. Adım: Belleği Serbest Bırakma (ÇOK ÖNEMLİ)
        // malloc ile ayrılan belleği işimiz bittiğinde sisteme geri veriyoruz.
        free(okunanUrunPtr);
        printf("\nBellek (malloc) basariyla serbest birakildi.\n");

    } else {
        printf("Dosyadan ürün okuma işleminde bir hata oluştu.\n");
    }

    return 0;
}

/**
 * @brief Verilen dosyadan ürün bilgilerini okur, okunan ürün için
 * bellekte dinamik olarak yer ayırır ve bu ürünün adresini döndürür.
 * * @param dosyaAdi Okunacak dosyanın adı.
 * @return Başarılı olursa Urun tipinde bir pointer, hata olursa NULL döndürür.
 */
Urun* dosyadanUrunOku(const char* dosyaAdi) {
    FILE* dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        printf("Hata: Dosya okuma modunda açılamadı.\n");
        return NULL; // Dosya açılamazsa NULL döndür.
    }

    // Bir ürün yapısı için bellekte yer ayıralım (malloc).
    Urun* yeniUrun = (Urun*) malloc(sizeof(Urun));
    if (yeniUrun == NULL) {
        printf("Hata: Bellek ayırma (malloc) başarısız oldu.\n");
        fclose(dosya);
        return NULL; // Bellek ayrılamazsa NULL döndür.
    }

    // Dosyadan veriyi oku ve doğrudan bellekte ayırdığımız alana yaz.
    if (fscanf(dosya, "%d %s %lf %d",
               &yeniUrun->id,
               yeniUrun->ad,
               &yeniUrun->fiyat,
               (int*)&yeniUrun->kategori) != 4) {
        
        printf("Hata: Dosyadan veri okunamadı veya format yanlış.\n");
        free(yeniUrun); // Hata oluşursa ayrılan belleği geri ver.
        fclose(dosya);
        return NULL;
    }

    fclose(dosya);
    
    // Başarılı. Bellekteki yeni ürünün adresini döndür.
    return yeniUrun;
}
