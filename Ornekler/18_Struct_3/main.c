#include <stdio.h>
#include <string.h>

typedef enum filmTur {
    dram = 1, korku, gerilim
} Tur;
typedef struct sinemaFilmi {
    char filmAd[100];
    int yapimYili;
    float imdbPuan;
    Tur filmTuru;
} Film;

void filmTurYaz(Tur filmTuru);

void filmYazdir(Film filmler[], int diziBoyutu);

int main() {
    Film film[3] = {{"Titanic", 1997, 7.9, dram},
                    {"Saw",     2004, 7.6, korku},
                    {"Rebecca", 1940, 8.1, gerilim}};
    filmYazdir(film, sizeof(film) / sizeof(Film));

    return 0;
}

void filmTurYaz(Tur filmTuru) {
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
            break;
    }
}

void filmYazdir(Film filmler[], int diziBoyutu) {
    for (int i = 0; i < diziBoyutu; i++) {
        printf("Film Adi : %s\n", filmler[i].filmAd);
        printf("Film Yapim Yili : %d\n", filmler[i].yapimYili);
        printf("Film IMDB Puani : %.2f\n", filmler[i].imdbPuan);
        printf("Film Turu : ");
        filmTurYaz(filmler[i].filmTuru);
        printf("\n--------------\n");
    }
}
