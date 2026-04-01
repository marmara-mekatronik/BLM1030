/*
 * Hafta 6 - Bolum 6.10: Frekans Analizi (Histogram)
 * Bir dizideki degerlerin frekans dagilimini hesaplama.
 */
#include <stdio.h>
#define N 20
#define MAX_DEGER 10

int main() {
    int veri[N] = {3, 7, 2, 5, 3, 7, 3, 8, 5, 2,
                   7, 3, 5, 8, 2, 3, 7, 5, 8, 3};

    int frekans[MAX_DEGER + 1] = {0};  // Sayac dizisi

    // Frekans hesapla
    for (int i = 0; i < N; i++) {
        frekans[veri[i]]++;
    }

    // Histogram ciz
    printf("Deger | Frekans | Grafik\n");
    printf("------+---------+-----------\n");
    for (int i = 0; i <= MAX_DEGER; i++) {
        if (frekans[i] > 0) {
            printf("  %2d  |   %2d    | ", i, frekans[i]);
            for (int j = 0; j < frekans[i]; j++) printf("#");
            printf("\n");
        }
    }
    return 0;
}
