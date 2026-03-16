#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enum: Öğrencinin bölümlerini tanımlar
typedef enum {
    BILGISAYAR_MUH = 0,
    ELEKTRIK_MUH,
    MAKINE_MUH
} Bolum;

// Struct: Öğrenci verilerini bir arada tutar
typedef struct {
    int okulNo;
    char adSoyad[50];
    Bolum ogrenciBolum;
} Ogrenci;

// Fonksiyon prototipleri
Ogrenci* komutSatirindanOgrenciOlustur(char **argv);
void ogrenciyiDosyayaYaz(const Ogrenci* ogr, const char* dosyaAdi);

// Ana fonksiyon: Komut satırı argümanlarını alır (argc: argüman sayısı, argv: argüman dizisi)
int main(int argc, char *argv[]) {
    // 1. Adım: Komut satırı argümanlarını kontrol et
    // Gerekli argümanlar: program_adı, dosya_adı, okul_no, ad_soyad, bölüm_kodu (toplam 5 adet)
    if (argc != 5) {
        printf("Hata: Eksik veya fazla argüman girdiniz!\n");
        printf("Kullanim: %s <dosya_adi> <okul_no> <ad_soyad> <bolum_kodu>\n", argv[0]);
        printf("Bölüm Kodları -> 0: Bilgisayar, 1: Elektrik, 2: Makine\n");
        return 1; // Hata kodu ile programdan çık
    }
    
    // 2. Adım: Geri dönüşü struct pointer olan fonksiyonu çağır
    // argv (char**), bu fonksiyona argüman olarak geçilir.
    Ogrenci* yeniOgrenci = komutSatirindanOgrenciOlustur(argv);
    if (yeniOgrenci == NULL) {
        // Fonksiyon içinde bir hata oluştuysa zaten mesaj yazdırılmıştır.
        return 1;
    }

    // 3. Adım: Oluşturulan öğrenciyi dosyaya yazan fonksiyonu çağır
    // argv[1], komut satırından girilen dosya adıdır.
    ogrenciyiDosyayaYaz(yeniOgrenci, argv[1]);

    // 4. Adım: malloc ile ayrılan belleği serbest bırak
    free(yeniOgrenci);
    printf("Bellek basariyla serbest birakildi.\n");

    return 0;
}

/**
 * @brief Komut satırı argümanlarını (argv) kullanarak bir Ogrenci yapısı için
 * dinamik olarak bellek ayırır ve bu yapıyı doldurur.
 * @param argv Komut satırı argümanlarını içeren çift pointer (char**).
 * @return Başarılı olursa Ogrenci tipinde bir pointer, hata olursa NULL döndürür.
 */
Ogrenci* komutSatirindanOgrenciOlustur(char **argv) {
    // malloc ile bir Ogrenci yapısı için bellekte yer ayır
    Ogrenci* ogrPtr = (Ogrenci*) malloc(sizeof(Ogrenci));
    if (ogrPtr == NULL) {
        printf("Hata: Bellek ayırma (malloc) basarisiz oldu!\n");
        return NULL;
    }

    // Komut satırı argümanlarını ayrıştır ve struct üyelerine ata
    // argv[0] programın kendi adıdır. Argümanlar 1'den başlar.
    // Bizim verilerimiz 2, 3 ve 4. argümanlarda.
    ogrPtr->okulNo = atoi(argv[2]); // atoi: string'i integer'a çevirir
    strncpy(ogrPtr->adSoyad, argv[3], 49);
    ogrPtr->adSoyad[49] = '\0'; // Güvenlik için son karakteri null yap

    int bolumKodu = atoi(argv[4]);
    if (bolumKodu < BILGISAYAR_MUH || bolumKodu > MAKINE_MUH) {
        printf("Hata: Geçersiz bölüm kodu: %d\n", bolumKodu);
        free(ogrPtr); // Hata durumunda ayrılan belleği iade et!
        return NULL;
    }
    ogrPtr->ogrenciBolum = (Bolum)bolumKodu;

    printf("Ogrenci yapisi basariyla olusturuldu: %s (No: %d)\n", ogrPtr->adSoyad, ogrPtr->okulNo);
    
    // Oluşturulan yapının adresini döndür
    return ogrPtr;
}

/**
 * @brief Verilen öğrenci bilgisini belirtilen dosyaya yazar.
 * @param ogr Bilgileri yazılacak öğrenci yapısının pointer'ı.
 * @param dosyaAdi Verilerin yazılacağı dosyanın adı.
 */
void ogrenciyiDosyayaYaz(const Ogrenci* ogr, const char* dosyaAdi) {
    // FILE: Dosyayı "append" (ekleme) modunda aç.
    // "a" modu dosya yoksa oluşturur, varsa sonuna ekler.
    FILE* dosya = fopen(dosyaAdi, "a");
    if (dosya == NULL) {
        printf("Hata: %s dosyasi acilamadi!\n", dosyaAdi);
        return;
    }

    // fprintf ile verileri dosyaya formatlı şekilde yaz
    fprintf(dosya, "Okul No: %d, Ad Soyad: %s, Bölüm Kodu: %d\n",
            ogr->okulNo,
            ogr->adSoyad,
            ogr->ogrenciBolum);

    fclose(dosya);
    printf("Veriler basariyla '%s' dosyasina eklendi.\n", dosyaAdi);
}
