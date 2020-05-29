#include <stdio.h>

int main() {
    int arananSayi;
    int dizi[15] = {38, 108, 47, 78, 11, 148, 50, 138, 30, 31, 89, 105, 56, 81, 80};
    int bulundumu = 0;

    printf("Dizi elemanlari:");
    int j;
    for (j = 0; j < 15; j++) {
        printf("%d,", dizi[j]);
    }

    printf("\n Dizi icinde arayacaginiz sayiyi giriniz:");
    scanf("%d", &arananSayi);

    int i;
    for (i = 0; i < 15; i++) {
        if (dizi[i] == arananSayi) {
            bulundumu = 1;
            break;
        }
    }

    if (bulundumu) {
        printf("Bulundu: Dizinin %d. elemani aranan degere esit.\n", i + 1);
    } else {
        printf("Aradiginiz sayi dizide bulunmamaktadir!\n");
    }
    return 0;
}