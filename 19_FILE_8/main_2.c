#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Numaralandırmalar aynı kalıyor
enum Cinsiyet {
    Kadin = 1, Erkek
};
enum Sube {
    a1 = 1, b1, c1, d1
};

// Yapı tanımı aynı kalıyor
struct ogrenci {
    int OgrNo;
    float OgrNot;
    char OgrAd[20]; // İsimler için alanı biraz genişletelim
    enum Cinsiyet OgrCinsiyet;
    enum Sube OgrSube;
};

// --- YENİ VE GÜNCELLENMİŞ FONKSİYON PROTOTİPLERİ ---

// Dosyaya öğrenci yazar (Bu fonksiyonun içi aynı kalabilir)
void ogrenciDosyaYaz(const char *dosyaAdi);

// Dosyadaki öğrencileri sayar
int ogrenciSayisiniBul(const char *dosyaAdi);

// Dosyadan okuyup dinamik bir diziye aktarır
struct ogrenci* ogrencileriDosyadanOku(const char *dosyaAdi, int ogrenciSayisi);

// Her şubenin birincisini bulur ve bu öğrencilerden oluşan bir dizi döndürür
struct ogrenci* subeBirincileriniBul(struct ogrenci* tumOgrenciler, int ogrenciSayisi, int subeSayisi);

// Öğrenci bilgilerini ekrana yazdırır
void ogrenciYazdir(struct ogrenci ogr);

// --- ANA FONKSİYON ---

int main() {
    const char *dosyaAdi = "ogrenci.txt";
    const int subeSayisi = 4; // Toplam şube sayısı

    // 1. Adım: Kullanıcıdan bilgileri alıp dosyaya yaz
    ogrenciDosyaYaz(dosyaAdi);

    // 2. Adım: Dosyadaki öğrenci sayısını öğren
    int ogrenciSayisi = ogrenciSayisiniBul(dosyaAdi);
    if (ogrenciSayisi == 0) {
        puts("Dosyada okunacak ogrenci kaydi bulunamadi.");
        return 0;
    }
    printf("\nDosyada toplam %d ogrenci bulundu.\n", ogrenciSayisi);

    // 3. Adım: Öğrencileri dosyadan oku ve dinamik olarak belleğe yükle
    struct ogrenci* tumOgrenciler = ogrencileriDosyadanOku(dosyaAdi, ogrenciSayisi);
    if (tumOgrenciler == NULL) {
        puts("Bellek ayirma basarisiz oldu veya dosya okunamadi.");
        return 1; // Hata kodu ile çık
    }

    // 4. Adım: Şube birincilerini bulan fonksiyonu çağır
    struct ogrenci* subeBirincileri = subeBirincileriniBul(tumOgrenciler, ogrenciSayisi, subeSayisi);
    
    // 5. Adım: Sonuçları ekrana yazdır
    puts("\n--- SUBE BIRINCILERI ---");
    for (int i = 0; i < subeSayisi; i++) {
        printf("\nSube %d Birincisi:\n", i + 1);
        // Eğer OgrNot -1 ise o şubede öğrenci bulunamamıştır.
        if (subeBirincileri[i].OgrNot < 0) {
            printf("Bu subede kayitli ogrenci bulunamadi.\n");
        } else {
            ogrenciYazdir(subeBirincileri[i]);
        }
    }

    // 6. Adım: Belleği serbest bırak! (ÇOK ÖNEMLİ)
    free(tumOgrenciler); // Ana öğrenci listesi için ayrılan bellek
    free(subeBirincileri); // Şube birincileri için ayrılan bellek

    return 0;
}


// --- FONKSİYON TANIMLARI ---

/**
 * @brief Dosyaya öğrenci bilgilerini yazar.
 */
void ogrenciDosyaYaz(const char *dosyaAdi) {
    FILE *dosya = fopen(dosyaAdi, "w");
    if (dosya == NULL) {
        puts("ogrenci.txt dosyasi olusturulamadi!");
        exit(1);
    }

    puts("--- Ogrenci Bilgi Girisi --- (Cikmak icin Ad yerine 'exit' yazin)");
    int i = 1;
    struct ogrenci yeniOgrenci;

    while (1) {
        printf("\n%d. Ogrencinin Adi: ", i);
        scanf("%s", yeniOgrenci.OgrAd);

        // Döngüden çıkış koşulu
        if (strcmp(yeniOgrenci.OgrAd, "exit") == 0) {
            break;
        }

        printf("%d. Ogrencinin Subesi (1-4): ", i);
        scanf("%d", &yeniOgrenci.OgrSube);
        printf("%d. Ogrencinin Cinsiyeti (1:Kadin, 2:Erkek): ", i);
        scanf("%d", &yeniOgrenci.OgrCinsiyet);
        printf("%d. Ogrencinin Numarasi: ", i);
        scanf("%d", &yeniOgrenci.OgrNo);
        printf("%d. Ogrencinin Notu: ", i);
        scanf("%f", &yeniOgrenci.OgrNot);

        fprintf(dosya, "%d %d %d %s %f\n",
                yeniOgrenci.OgrSube, yeniOgrenci.OgrCinsiyet,
                yeniOgrenci.OgrNo, yeniOgrenci.OgrAd, yeniOgrenci.OgrNot);
        i++;
    }
    fclose(dosya);
    puts("\nVeriler dosyaya yazildi...");
}

/**
 * @brief Dosyadaki öğrenci (satır) sayısını döndürür.
 * @return Dosyadaki öğrenci sayısı.
 */
int ogrenciSayisiniBul(const char *dosyaAdi) {
    FILE *dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) return 0;

    int sayac = 0;
    int ch;
    // Dosya sonuna kadar her yeni satır karakterini say
    while ((ch = fgetc(dosya)) != EOF) {
        if (ch == '\n') {
            sayac++;
        }
    }
    fclose(dosya);
    return sayac;
}


/**
 * @brief Öğrenci bilgilerini dosyadan okur ve dinamik bir diziye atar.
 * @param ogrenciSayisi Bellekte ne kadar yer ayrılacağını belirtir.
 * @return Başarılı olursa struct ogrenci tipinde bir dizi pointer'ı, olmazsa NULL döner.
 */
struct ogrenci* ogrencileriDosyadanOku(const char *dosyaAdi, int ogrenciSayisi) {
    // 1. Adım: Öğrenci sayısı kadar bellekte yer ayır
    struct ogrenci* ogrenciListesi = (struct ogrenci*) malloc(ogrenciSayisi * sizeof(struct ogrenci));
    
    // malloc, bellekte yer ayıramazsa NULL döner. Bunu kontrol etmeliyiz.
    if (ogrenciListesi == NULL) {
        return NULL;
    }

    FILE *dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        free(ogrenciListesi); // Ayırdığımız belleği iade etmeliyiz.
        return NULL;
    }

    // 2. Adım: Dosyayı oku ve ayrılan bellek alanına (diziye) verileri doldur
    for (int i = 0; i < ogrenciSayisi; i++) {
        fscanf(dosya, "%d %d %d %s %f",
               &ogrenciListesi[i].OgrSube, &ogrenciListesi[i].OgrCinsiyet,
               &ogrenciListesi[i].OgrNo, ogrenciListesi[i].OgrAd, &ogrenciListesi[i].OgrNot);
    }

    fclose(dosya);
    return ogrenciListesi; // Dizi pointer'ını döndür
}

/**
 * @brief Verilen öğrenci listesi içinden her şubenin en yüksek notlu öğrencisini bulur.
 * @return Şube birincilerini içeren, dinamik olarak oluşturulmuş yeni bir dizi döndürür.
 */
struct ogrenci* subeBirincileriniBul(struct ogrenci* tumOgrenciler, int ogrenciSayisi, int subeSayisi) {
    // 1. Adım: Şube birincilerini tutmak için dinamik bir dizi oluştur (4 şube için)
    struct ogrenci* birinciler = (struct ogrenci*) malloc(subeSayisi * sizeof(struct ogrenci));
    if (birinciler == NULL) return NULL;

    // 2. Adım: Birinciler dizisinin notlarını başlangıçta -1 yapalım.
    // Bu sayede o şubede öğrenci var mı yok mu anlayabiliriz.
    for (int i = 0; i < subeSayisi; i++) {
        birinciler[i].OgrNot = -1.0f;
    }

    // 3. Adım: Tüm öğrencileri tek tek gez
    for (int i = 0; i < ogrenciSayisi; i++) {
        int subeIndex = tumOgrenciler[i].OgrSube - 1; // Sube 1 -> index 0

        // Geçerli bir şube mi kontrol et (1-4 arası)
        if (subeIndex >= 0 && subeIndex < subeSayisi) {
            // Eğer bu öğrencinin notu, o şubenin mevcut birincisinden yüksekse
            if (tumOgrenciler[i].OgrNot > birinciler[subeIndex].OgrNot) {
                // Bu öğrenciyi yeni birinci olarak ata
                birinciler[subeIndex] = tumOgrenciler[i];
            }
        }
    }

    return birinciler; // Birincileri içeren diziyi döndür
}

/**
 * @brief Tek bir öğrencinin bilgilerini formatlı şekilde ekrana yazar.
 */
void ogrenciYazdir(struct ogrenci ogr) {
    printf("\tNumara: %d\n", ogr.OgrNo);
    printf("\tAd: %s\n", ogr.OgrAd);
    printf("\tNot: %.2f\n", ogr.OgrNot);
    printf("\tCinsiyet: %s\n", (ogr.OgrCinsiyet == Erkek) ? "Erkek" : "Kadin");
}
