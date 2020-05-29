#include <stdio.h>

int main() {
    int dizi[25] = {86, 70, 64, 22, 87, 54, 4, 150, 86, 88, 8, 11, 24, 99, 97, 2, 35, 95, 30, 67, 87, 73, 7, 60, 78};
    int i, j, k;
    int sayac = 0;
    int gecici;
// diziyi ekrana yazdırma döngüsü
    for (i = 0; i < 25; i++) {
        printf("%2d\n", dizi[i]);
    }
    // sıralama işlemi

    for (i = 0; i < 24; i++) {
        for (j = 0; j < 24 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
                sayac++;
            }
        }
    }

    printf("dizinin sıralandıktan sonraki hali\n");

    for (int k = 0; k < 25; k++) {
        printf("%2d\n", dizi[k]);
    }

    printf("Sayac degeri: %d", sayac);
    return 0;
}