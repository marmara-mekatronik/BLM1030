/*
 * Hafta 6 - Bolum 6.8: Median (Ortanca) Hesaplama
 * Verileri siralayip ortadaki degeri alma.
 * Aykiri degerlere (outlier) karsi ortalamadan daha dayaniklidir.
 */
#include <stdio.h>
#define N 7

int main() {
    int veri[N] = {45, 12, 78, 23, 56, 34, 67};

    // 1. Diziyi sirala (Bubble Sort)
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (veri[j] > veri[j + 1]) {
                int tmp = veri[j];
                veri[j] = veri[j + 1];
                veri[j + 1] = tmp;
            }
        }
    }
    // Sirali: {12, 23, 34, 45, 56, 67, 78}

    // 2. Medyani bul
    double medyan;
    if (N % 2 == 1)
        medyan = veri[N / 2];  // Tek eleman: ortadaki
    else
        medyan = (veri[N/2 - 1] + veri[N/2]) / 2.0;  // Cift: iki ortanin ort.

    printf("Medyan: %.1f\n", medyan);  // 45.0
    return 0;
}
