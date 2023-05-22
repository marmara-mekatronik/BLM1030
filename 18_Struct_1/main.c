#include <stdio.h>
#include <string.h>
typedef enum filmTur{dram=1, korku, gerilim} Tur;

typedef struct sinemaFilmi {
    char ad[100];
    int yapimYili;
    float imdb;
    Tur filmtur;
}Film;

void turuYazdir(Tur filmTuru);
void filmYazdir( Film filmler[], int sayi);
int main(){
    Film filmler[3];
    strcpy(filmler[0].ad,"Titanic");
    filmler[0].yapimYili=1997;
    filmler[0].imdb=7.8;
    filmler[0].filmtur=dram;

    strcpy(filmler[1].ad,"Saw");
    filmler[1].yapimYili=2004;
    filmler[1].imdb=7.6;
    filmler[1].filmtur=korku;

    strcpy(filmler[2].ad,"Rebecca");
    filmler[2].yapimYili=1940;
    filmler[2].imdb=8.1;
    filmler[2].filmtur=gerilim;
    filmYazdir(filmler, 3);
    return 0;
}

void turuYazdir(Tur filmTuru){
    switch (filmTuru){
        case dram: printf("DRAM"); break;
        case korku: printf("KORKU"); break;
        case gerilim: printf("GERILIM"); break;
        default: printf("HATA!");
    }
}
void filmYazdir(Film filmler[], int sayi){
    for (int i = 0; i < sayi; i++){
        printf("Adi: %s\n", filmler[i].ad);
        printf("Yapim yili: %d\n", filmler[i].yapimYili);
        printf("Imdb puani: %.1f\n", filmler[i].imdb);
        printf("Film turu: ");
        turuYazdir(filmler[i].filmtur);
        printf("\n-----------------\n");
    }
}
