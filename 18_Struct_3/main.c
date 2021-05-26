#include <stdio.h>
#include <string.h>
enum filmTur {
    dram = 1,
    komedi,
    gerilim,
    korku
};
struct sinemaFilmi {
    char ad[100];
    int yapimYili;
    float imdb;
    enum filmTur Tur;
};
void FilmYaz(struct sinemaFilmi);

int main() {
    struct sinemaFilmi film_1;

    strcpy(film_1.ad, "Titanic");
    film_1.yapimYili = 1997;
    film_1.imdb = 7.8;
    film_1.Tur = dram;

    FilmYaz(film_1);

    return 0;
}

void FilmYaz(struct sinemaFilmi film_1){

    printf("Film Adi : %s\n", film_1.ad);
    printf("Film Yapım Yılı : %d\n", film_1.yapimYili);
    switch (film_1.Tur) {
        case dram:
            printf("Film Türü : Dram\n");
            break;
        case komedi:
            printf("Film Türü : Komedi\n");
            break;
        case gerilim:
            printf("Film Türü : Gerilim\n");
            break;
        case korku:
            printf("Film Türü : Korku\n");
            break;
        default:
            printf("Film Türü : Tanımsız\n");
            break;
    }
    printf("Film IMDB puanı : %.2f\n", film_1.imdb);
}
