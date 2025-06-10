#include <stdio.h>
#include <stdlib.h> // malloc, free, atoi, atof fonksiyonları için
#include <string.h> // strcpy fonksiyonu için

// FilmTur ve SinemaFilmi yapıları aynı kalıyor.
typedef enum {
    dram = 1,
    komedi,
    gerilim,
    korku
} FilmTur;

typedef struct {
    char ad[100];
    int yapimYili;
    float imdb;
    FilmTur tur;
} SinemaFilmi;

// main fonksiyonu, komut satırı argümanlarını alacak şekilde güncellendi.
// argc: Argüman sayısı (programın adı dahil)
// argv: Argümanların string olarak tutulduğu dizi (bir pointer dizisi)
int main(int argc, char *argv[]) {

    // 1. Argüman Sayısını Kontrol Etme
    // Her film için 4 argüman gerekiyor (ad, yıl, imdb, tür).
    // argv[0] programın adı olduğu için onu çıkarıyoruz.
    // (argc - 1) toplam veri sayısını verir. Bu sayı 4'e tam bölünmelidir.
    if (argc == 1 || (argc - 1) % 4 != 0) {
        printf("Hata: Yetersiz veya hatali sayida arguman girdiniz!\n");
        printf("Kullanim: ./program \"Film Adi 1\" Yil_1 IMDB_1 Tur_1 \"Film Adi 2\" Yil_2 IMDB_2 Tur_2 ...\n");
        printf("Film Turleri -> 1:dram, 2:komedi, 3:gerilim, 4:korku\n");
        return 1; // Hata kodu ile programdan çık
    }

    // 2. Film Sayısını ve Dinamik Diziyi Oluşturma
    int elemanSayisi = (argc - 1) / 4;
    printf("%d adet film bilgisi girildi.\n\n", elemanSayisi);

    // SinemaFilmi yapısı için bellekten dinamik olarak yer ayırıyoruz.
    // Bu bir pointer'dır ve 'elemanSayisi' kadar SinemaFilmi yapısı için yer tutar.
    SinemaFilmi *filmler = (SinemaFilmi *)malloc(elemanSayisi * sizeof(SinemaFilmi));

    // Bellek ayırma işlemi başarısız olursa...
    if (filmler == NULL) {
        printf("Bellek ayirma basarisiz oldu!\n");
        return 1;
    }

    // 3. Komut Satırından Gelen Verileri Diziye Aktarma
    for (int i = 0; i < elemanSayisi; ++i) {
        // argv'deki veriler string olduğu için dönüşüm yapıyoruz.
        // Film adı (string): strcpy ile kopyalanır.
        // argv indeksi: 1 (ilk film adı) + i * 4 (her film 4 argüman kaplar)
        strcpy(filmler[i].ad, argv[1 + i * 4]);
        
        // Yapım yılı (string -> int): atoi (ASCII to Integer) fonksiyonu ile
        filmler[i].yapimYili = atoi(argv[2 + i * 4]);

        // IMDB puanı (string -> float): atof (ASCII to Float) fonksiyonu ile
        filmler[i].imdb = atof(argv[3 + i * 4]);

        // Film türü (string -> enum): atoi ile int'e çevirip FilmTur'e cast ediyoruz.
        filmler[i].tur = (FilmTur)atoi(argv[4 + i * 4]);
    }
    
    // 4. Ekrana Yazdırma (Bu kısım orijinal kodla aynı, sadece dizi adı değişti)
    for (int i = 0; i < elemanSayisi; ++i) {
        printf("Film Adi: %s \n",filmler[i].ad);
        printf("Film Yapim Yili:%d\n",filmler[i].yapimYili);
        printf("Film IMDB Puani:%.2f\n",filmler[i].imdb);
        printf("Film Turu:%d\n",filmler[i].tur);
        printf("____________________________________\n");
    }

    // 5. Dosyaya Yazma ve Okuma (Bu kısım da büyük ölçüde aynı)
    char *dosyaAdi = "film.db";
    FILE *Dosya = fopen(dosyaAdi, "wb"); // "wb+" yerine "wb" yeterli
    if(Dosya == NULL){
        printf("%s dosyasi olusturulamadi/acilamadi\n", dosyaAdi);
        free(filmler); // Hata durumunda bellegi serbest bırak
        exit(1);
    }

    // Dinamik dizideki tüm veriyi dosyaya tek seferde yazabiliriz.
    fwrite(filmler, sizeof(SinemaFilmi), elemanSayisi, Dosya);
    fclose(Dosya);

    printf("\n-> film.db Dosyasindan okunan film bilgileri <-\n");
    printf("____________________________________\n");

    SinemaFilmi okunanFilm;
    Dosya = fopen(dosyaAdi, "rb");
    if (Dosya == NULL) {
        printf("%s dosyasi okunamadi !\n", dosyaAdi);
        free(filmler); // Hata durumunda bellegi serbest bırak
        exit(1);
    }
    
    // Dosyadan struct'ları tek tek okuyup ekrana yazdırıyoruz.
    while(fread(&okunanFilm, sizeof(SinemaFilmi), 1, Dosya) == 1) {
        printf("Film Adi: %s \n",okunanFilm.ad);
        printf("Film Yapim Yili:%d\n",okunanFilm.yapimYili);
        printf("Film IMDB Puani:%.2f\n",okunanFilm.imdb);
        printf("Film Turu:%d\n",okunanFilm.tur);
        printf("____________________________________\n");
    }
    fclose(Dosya);


    // 6. En Önemli Adım: Ayrılan Belleği Serbest Bırakma
    // malloc ile ayırdığımız alanı program sonunda iade ediyoruz.
    free(filmler);

    return 0;
}
