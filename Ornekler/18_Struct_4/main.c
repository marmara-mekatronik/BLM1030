#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

    struct sinemaFilmi *filmPtr;

    struct sinemaFilmi film_1;

    strcpy(film_1.ad, "Titanic");
    film_1.yapimYili = 1997;
    film_1.imdb = 7.8;
    film_1.Tur = dram;

    filmPtr=&film_1;

    FilmYaz(film_1);
    printf("----------normal veri-------------\n");
    printf("Yapının Bellekte Kapladığı Alan: >%d< byte\n", sizeof(struct sinemaFilmi));
    printf("Yapının Bellek adresi: %p\n", filmPtr);
    printf("----------------------------------\n");
    // bellek yönetimi

    filmPtr =  NULL;

    // 1. yöntem

    filmPtr = (struct sinemaFilmi *) malloc(sizeof(struct sinemaFilmi));
    strcpy((*filmPtr).ad,"Star Wars 1");
    (*filmPtr).yapimYili=1999;
    (*filmPtr).imdb=6.5;
    (*filmPtr).Tur=gerilim;

    printf("Film Adi : %s\n",(*filmPtr).ad );
    printf("Film Yapım Yılı : %d\n", (*filmPtr).yapimYili);
    printf("Film Türü : %d\n", (*filmPtr).Tur);
    printf("Film IMDB puanı : %.2f\n", (*filmPtr).imdb);

    printf("----------malloc veri-------------\n");
    printf("Yapının Bellekte Kapladığı Alan: >%d< byte\n", sizeof(struct sinemaFilmi));
    printf("Yapının Bellek adresi: %p\n", filmPtr);
    printf("----------------------------------\n");

   // 2. yöntem

    strcpy(filmPtr->ad,"Departed");
    filmPtr->yapimYili=2006;
    filmPtr->imdb=8.5;
    filmPtr->Tur=gerilim;

    printf("Film Adi : %s\n",filmPtr->ad );
    printf("Film Yapım Yılı : %d\n", filmPtr->yapimYili);
    printf("Film Türü : %d\n", filmPtr->Tur);
    printf("Film IMDB puanı : %.2f\n", filmPtr->imdb);

    printf("----------malloc veri-------------\n");
    printf("Yapının Bellekte Kapladığı Alan: >%d< byte\n", sizeof(struct sinemaFilmi));
    printf("Yapının Bellek adresi: %p\n", filmPtr);
    printf("----------------------------------\n");

        //kopyalama
    struct sinemaFilmi film_2;
    film_2=(*filmPtr);
    printf("Film Adi : %s\n",film_2.ad );
    printf("Film Yapım Yılı : %d\n", film_2.yapimYili);
    printf("Film Türü : %d\n", film_2.Tur);
    printf("Film IMDB puanı : %.2f\n", film_2.imdb);


    printf("----------malloc copy veri-------------\n");
    printf("Yapının Bellekte Kapladığı Alan: >%d< byte\n", sizeof(struct sinemaFilmi));
    printf("Yapının Bellek adresi: %p\n", &film_2);
    printf("----------------------------------\n");
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
