#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum filmTur {
    dram = 1, korku, gerilim
} Tur;

typedef struct sinemaFilmi {
    char ad[100];
    int yapimYili;
    float imdb;
    Tur filmtur;
} Film;

Film *alFilm(char *ad, int yapimYili, float imdb, Tur filmtur);
void turuYazdir(Tur filmTuru);
void filmYazdir(Film *ptrFilm, int sayi);

int main() {
    int adet;
    printf("Film adetini giriniz: ");
    scanf("%d", &adet);
    getchar(); // Geçerli satır sonu karakterini sil

    Film *ptrFilmler = (Film *)malloc(adet * sizeof(Film));
    for (int i = 0; i < adet; i++) {
        Film bestFilm;
        printf("Lutfen Film Adini Giriniz: ");
        fgets(bestFilm.ad, sizeof(bestFilm.ad), stdin);
        printf("Yapim Yilini Giriniz: ");
        scanf("%d", &bestFilm.yapimYili);
        printf("Yapim IMDB Puanini Giriniz: ");
        scanf("%f", &bestFilm.imdb);
        printf("Film Turu Giriniz (dram=1, korku=2, gerilim=3): ");
        scanf("%d", &bestFilm.filmtur);
        getchar(); // Geçerli satır sonu karakterini tüket

        Film *ptrFilm = alFilm(bestFilm.ad, bestFilm.yapimYili, bestFilm.imdb, bestFilm.filmtur);
        printf("pointrer: %p\n", ptrFilm);
        ptrFilmler[i] = *ptrFilm;
        free(ptrFilm);
    }

    filmYazdir(ptrFilmler, adet);

    free(ptrFilmler);

    return 0;
}

Film *alFilm(char *ad, int yapimYili, float imdb, Tur filmtur) {
    Film *ptrFilm = (Film *)malloc(sizeof(Film));
    strcpy(ptrFilm->ad, ad);
    ptrFilm->yapimYili = yapimYili;
    ptrFilm->imdb = imdb;
    ptrFilm->filmtur = filmtur;
    return ptrFilm;
}

void turuYazdir(Tur filmTuru) {
    switch (filmTuru) {
        case dram:
            printf("DRAM");
            break;
        case korku:
            printf("KORKU");
            break;
        case gerilim:
            printf("GERILIM");
            break;
        default:
            printf("HATA!");
    }
}

void filmYazdir(Film *ptrFilm, int sayi) {
    for (int i = 0; i < sayi; i++) {
        printf("Adi: %s", ptrFilm[i].ad);
        printf("Yapim yili: %d\n", ptrFilm[i].yapimYili);
        printf("Imdb puani: %.1f\n", ptrFilm[i].imdb);
        printf("Film turu: ");
        turuYazdir(ptrFilm[i].filmtur);
        printf("\n-----------------\n");
    }
}
