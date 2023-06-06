#include <stdio.h>
#include <stdlib.h>

typedef enum {
    Erkek,
    Kadin
} Cinsiyet;
typedef struct {
    int ogrNo;
    char ad[10];
    float not;
    Cinsiyet cinsiyet;
} Ogrenci;

void ogrenciYaz(Ogrenci ogrenci, FILE *dosya);

void ogrenciOku(Ogrenci *ogrenci, FILE *dosya);

int main() {
    FILE *Dosya = fopen("dosya.txt", "w");
    if (Dosya == NULL) {
        printf("Başarısız dosya olusturma istegi!\n");
        exit(1);
    }
    Ogrenci ogrenci;
    char karar;
    int i = 1;

    do {
        printf("%d. Ogrenci Numarasi:", i);
        scanf("%d", &ogrenci.ogrNo);
        printf("%d. Ogrenci Adi:", i);
        scanf("%9s", ogrenci.ad);
        printf("%d. Ogrenci Notu:", i);
        scanf("%f", &ogrenci.not);
        printf("%d. Ogrenci Cinsiyeti(Erkek=0, Kadin=1):", i);
        int cinsiyet;
        scanf("%d", &cinsiyet);
        ogrenci.cinsiyet = (Cinsiyet) cinsiyet;
        ogrenciYaz(ogrenci, Dosya);
        printf("Devam etmek istermisiniz (E/e veya H/h)?");
        getchar();
        scanf(" %c", &karar);
        i++;
    } while (karar == 'E' || karar == 'e');
    fclose(Dosya);
    printf("Kayit islemleri tamamlandi !");

    Dosya = fopen("dosya.txt", "r");
    if (Dosya == NULL) {
        printf("Başarısız dosya okuma istegi!\n");
        exit(1);
    }
    i = 1;
    printf("Okunan ogrenci bilgileri:\n");
    while (!feof(Dosya)) {
        printf("%d. Ogrenci:\n", i);
        ogrenciOku(&ogrenci, Dosya);
        printf("Numara: %d\n", ogrenci.ogrNo);
        printf("Ad: %s\n", ogrenci.ad);
        printf("Not: %.2f\n", ogrenci.not);
        printf("Cinsiyet: %s\n",
               ogrenci.cinsiyet == Erkek ? "Erkek" : "Kadin");
        printf("---------------\n");
        i++;
    }
    fclose(Dosya);
    return 0;
}

void ogrenciYaz(Ogrenci ogrenci, FILE *dosya) {
    fprintf(dosya, "%5d %10s %.2f %d\n", ogrenci.ogrNo,
            ogrenci.ad, ogrenci.not, ogrenci.cinsiyet);
}

void ogrenciOku(Ogrenci *ogrenci, FILE *dosya) {
    fscanf(dosya, "%5d %10s %f %d\n", &(ogrenci->ogrNo),
           ogrenci->ad, &(ogrenci->not),
           &(ogrenci->cinsiyet));
}
