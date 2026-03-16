#include <stdio.h>

int bolunebiliyorMu(int, int);

int main() {
    int birinciSayi, ikinciSayi;
    printf("İki sayinin kalansiz bolumunu hesaplayan program\n");
    printf("Lütfen Birinci Sayiyi Giriniz : ");
    scanf("%d", &birinciSayi);
//ikinci sayıyiyi isteyelim 0 girilirse while ile bu kosulu sinayalim.
    do {
        printf("Lütfen ikinci Sayiyi Giriniz : ");
        scanf("%d", &ikinciSayi);
        if (ikinciSayi == 0) {
            printf("Lütfen Sifirdan Farklı Bir Sayiyi Giriniz ->\n");
            continue;
        }
    } while (ikinciSayi == 0);

    if (bolunebiliyorMu(birinciSayi, ikinciSayi)) {
        printf("Girmis oldugunuz sayi kalansiz bolunen bir sayidir");
    } else {
        printf("Girmis oldugunuz sayi kalansiz bolunen bir sayi degildir");

    }
    return 0;
}

int bolunebiliyorMu(int bolunen, int bolen) {
    if (bolunen % bolen == 0) {
        return 1;
    } else {
        return 0;
    }
}