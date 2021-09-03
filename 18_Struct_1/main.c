#include <stdio.h>
#include <string.h>

enum filmTur {
    dram = 0, korku, gerilim
};

struct sinemaFilmi {
    char ad[100];
    int yapimYili;
    float imdb;
    enum filmTur Tur;
};

void TuruYazdir(enum filmTur filminTuru);

int main() {

    struct sinemaFilmi filmler[3];
    strcpy(filmler[0].ad, "Titanic");
    filmler[0].yapimYili = 1997;
    filmler[0].imdb = 7.8;
    filmler[0].Tur = dram;

    strcpy(filmler[1].ad, "The Usual Suspect");
    filmler[1].yapimYili = 1996;
    filmler[1].imdb = 8.8;
    filmler[1].Tur = korku;


    for (int i = 0; i < 2; ++i) {
        printf("Film Adi: %s\n", filmler[i].ad);
        printf("Film Yapim Yili: %d\n", filmler[i].yapimYili);
        printf("Film Turu:");
        TuruYazdir(filmler[i].Tur);
        printf("Film IMDB Puani: %.2f\n", filmler[i].imdb);
        printf("___________________\n");

    }
    return 0;
}

void TuruYazdir(enum filmTur filminTuru) {
    switch (filminTuru) {
        case dram:
            printf("Film turu: Dram\n"); break;
        case korku:
            printf("Film turu: Korku\n"); break;
        default:
            printf("Hata!\n"); break;
    }
}
