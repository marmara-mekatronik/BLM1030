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

int main() {
    FILE *Dosya = fopen("dosya.txt", "w");
    if (Dosya == NULL) {
        printf("Başarısız dosya oluşturma isteği!\n");
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
        printf("%d. Ogrenci Cinsiyeti(Erkek=0, Kadin=1):",i);
        int cinsiyet;
        scanf("%d",&cinsiyet);
        ogrenci.cinsiyet = (Cinsiyet)cinsiyet;
        fprintf(Dosya, "%5d %10s %.2f %d\n", ogrenci.ogrNo,
                ogrenci.ad, ogrenci.not, ogrenci.cinsiyet);
        printf("Devam etmek istermisiniz (E/e veya H/h)?");
        getchar();
        scanf(" %c", &karar);
        i++;
    } while (karar == 'E' || karar == 'e');
    fclose(Dosya);
    printf("Kayit islemleri tamamlandi !");

    return 0;
}
