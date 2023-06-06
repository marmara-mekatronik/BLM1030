#include <stdio.h>
#include <stdlib.h>

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

int main() {
    SinemaFilmi Film[] = {
            {"Titanic",    1997, 7.8, dram},
            {"Togo",       2019, 8.2, gerilim},
            {"Green Book", 2018, 8.3, komedi},
            {"Alien",      1979, 8.1, korku}
    };
    int elemanSayisi = sizeof(Film) / sizeof(SinemaFilmi);
    printf("%d adet film var\n", elemanSayisi);

    for (int i = 0; i < elemanSayisi; ++i) {
        printf("Film Adi: %s \n",Film[i].ad);
        printf("Film Yapim Yili:%d\n",Film[i].yapimYili);
        printf("Film IMDB Puani:%.2f\n",Film[i].imdb);
        printf("Film Turu:%d\n",Film[i].tur);
        printf("____________________________________\n");
    }

    char *dosyaAdi = "film.db";
    FILE *Dosya = fopen(dosyaAdi, "wb+");
    if(Dosya==NULL){
        printf("%s dosyasi olusturulamadi/acilamadi\n", dosyaAdi);
        exit(1);
    }
    for (int i = 0; i < elemanSayisi; ++i) {
        fwrite(&Film[i], sizeof(Film[i]), 1, Dosya);
    }
    fclose(Dosya);
    SinemaFilmi okunanFilm;
    Dosya = fopen(dosyaAdi, "rb+");
    if (Dosya == NULL) {
        printf("%s dosyasi okunamadi !\n", dosyaAdi);
        exit(1);
    }
    printf("->film.db Dosyasindan okunan film bilgileri<-\n");
    printf("____________________________________\n");
    for (int i = 0; i < elemanSayisi; ++i) {
        fread(&okunanFilm, sizeof(okunanFilm),1,Dosya);
        printf("Film Adi: %s \n",okunanFilm.ad);
        printf("Film Yapim Yili:%d\n",okunanFilm.yapimYili);
        printf("Film IMDB Puani:%.2f\n",okunanFilm.imdb);
        printf("Film Turu:%d\n",okunanFilm.tur);
        printf("Dosya Konum Bilgisi : %ld. byte\n", ftell(Dosya));
        printf("____________________________________\n");
    }
    fclose(Dosya);

    return 0;
}
