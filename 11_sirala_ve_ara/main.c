#include <stdio.h>

int main() {
    int dizi[25];
    int aranan;
    int bulundu = 0;
    int solIndis = 0, sagIndis = 24;
    int ortaIndis = 0;
    int giris = 0;
    int enKucukEleman, gecici;

    printf("Lütfen rastgele 25 adet sayı giriniz\n");

    while (giris < 25) {
        printf("%d. sayiyi griniz: ", giris + 1);
        scanf("%d", &dizi[giris]);
        giris++;
    }

    printf("\nGirilen Dizi : ");
    for (int i = 0; i < 24; ++i) {
        printf("%d\t", dizi[i]);
    }

    for (int i = 0; i < 24; ++i) {
        enKucukEleman = i;
        for (int j = i; j < 25; ++j) {
            if (dizi[j] < dizi[enKucukEleman]) {
                enKucukEleman = j;
            }

        }
        gecici = dizi[enKucukEleman];
        dizi[enKucukEleman] = dizi[i];
        dizi[i] = gecici;
    }

    printf("\nSiralanmis Dizi : ");
    for (int i = 0; i < 24; ++i) {
        printf("%d\t", dizi[i]);
    }


    printf("\nBu dizi içerisinde arayacağınız sayıyı giriniz: ");
    scanf("%d", &aranan);

    while (bulundu == 0 && solIndis <= sagIndis) {
        ortaIndis = (solIndis + sagIndis) / 2;
        if (aranan == dizi[ortaIndis]) {
            bulundu = 1;
            break;
        } else if (aranan < dizi[ortaIndis]) {
            sagIndis = ortaIndis - 1;
        } else if (aranan > dizi[ortaIndis]) {
            solIndis = ortaIndis + 1;
        }
    }
    if (bulundu) {
        printf("Bulundu... Dizinin %d. indisindeki deger aranan sayiya esittir ", ortaIndis);
    } else {
        printf("Aradiginiz sayi dizide bulunamadi!\n");
    }


    return 0;
}


