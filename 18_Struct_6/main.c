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

void turuYazdir(Tur filmTuru);

void filmYazdir(Film *ptrFilm, int sayi);

int main() {
    Film *ptrFilm;
    ptrFilm = (Film*)malloc(3*sizeof(Film));
// ptrFilm = (struct sinemaFilmi *)malloc(sizeof(struct sinemaFilmi));
    strcpy((ptrFilm)->ad, "Titanic");
    (ptrFilm)->yapimYili = 1997;
    (ptrFilm)->imdb = 7.8;
    (ptrFilm)->filmtur = dram;

    strcpy((ptrFilm+1)->ad,"Saw");
    (ptrFilm+1)->yapimYili = 2004;
    (ptrFilm+1)->imdb = 7.6;
    (ptrFilm+1)->filmtur = korku;

    strcpy((ptrFilm+2)->ad,"Rebecca");
    (ptrFilm+2)->yapimYili = 1940;
    (ptrFilm+2)->imdb = 8.1;
    (ptrFilm+2)->filmtur = gerilim;
    filmYazdir(ptrFilm, 3);
    return 0;
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
    Film *ptr= ptrFilm;
    for (int i = 0; i < sayi; i++, ptr++) {
        printf("Adi: %s\n", ptr->ad);
        printf("Yapim yili: %d\n", ptr->yapimYili);
        printf("Imdb puani: %.1f\n", ptr->imdb);
        printf("Film turu: ");
        turuYazdir(ptr->filmtur);
        printf("\n-----------------\n");
    }
}
