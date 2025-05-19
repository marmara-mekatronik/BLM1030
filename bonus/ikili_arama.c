#include <stdio.h>
#include <stdlib.h>

int main() {
    int arananSayi;
    int dizi[15] = {38, 108, 47, 78, 11, 148, 50, 138, 30, 31, 89, 105, 56, 81, 80};
    int boyut = 15;

    for (int i = 0; i < boyut - 1; i++) {
        for (int j = 0; j < boyut - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    printf("Dizi elemanlari (siralaniyor): ");
    for (int j = 0; j < boyut; j++) {
        printf("%d", dizi[j]);
        if (j < boyut - 1) printf(", ");
    }
    printf("\n");

    printf("Dizi icinde arayacaginiz sayiyi giriniz: ");
    if (scanf("%d", &arananSayi) != 1) {
        printf("Hatali giris! Lutfen bir tamsayi giriniz.\n");
        return 1;
    }

    int sol = 0;
    int sag = boyut - 1;
    int bulundu = -1;

    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;

        if (dizi[orta] == arananSayi) {
            bulundu = orta;
            break;
        } else if (dizi[orta] < arananSayi) {
            sol = orta + 1;
        } else {
            sag = orta - 1;
        }
    }

    if (bulundu != -1) {
        printf("Bulundu: Dizinin %d. elemani aranan degere esit (%d).\n", bulundu + 1, arananSayi);
    } else {
        printf("Aradiginiz sayi dizide bulunmamaktadir!\n");
    }

    // Big O: O(log n)
    return 0;
}
