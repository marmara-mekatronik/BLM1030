#include <stdio.h>
#include <string.h>

int main() {

    struct sinemaFilmi {
        char ad[100];
        int yapimYili;
        float imdb;
        char Tur[20];
    };

    struct sinemaFilmi film_1;
    strcpy(film_1.ad, "Titanic");
    film_1.yapimYili= 1997;
    film_1.imdb = 7.8;
    strcpy(film_1.Tur, "Dram");

    // ekrana yazdıralım

    printf("Film Adi:%s\n", film_1.ad);
    printf("Film Yapım Yılı:%d\n", film_1.yapimYili);
    printf("Filim Türü:%s\n", film_1.Tur);
    printf("Filim IMDB puani:%.2f\n", film_1.imdb);

    return 0;
}
