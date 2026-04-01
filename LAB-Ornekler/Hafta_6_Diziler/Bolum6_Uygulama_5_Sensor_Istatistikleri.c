/*
 * Hafta 6 - Bolum 6.7: Sensor Verisi Istatistikleri
 * Ortalama, Standart Sapma, Min ve Max hesaplama.
 */
#include <stdio.h>
#include <math.h>
#define N 10

int main() {
    double sicaklik[N] = {22.5, 23.1, 22.8, 24.0, 23.5,
                          22.9, 23.7, 24.2, 22.6, 23.3};

    // 1. Ortalama
    double toplam = 0;
    for (int i = 0; i < N; i++) toplam += sicaklik[i];
    double ort = toplam / N;

    // 2. Standart Sapma
    double varyans = 0;
    for (int i = 0; i < N; i++) {
        varyans += (sicaklik[i] - ort) * (sicaklik[i] - ort);
    }
    varyans /= N;
    double stdSapma = sqrt(varyans);

    // 3. Min ve Max
    double min = sicaklik[0], max = sicaklik[0];
    for (int i = 1; i < N; i++) {
        if (sicaklik[i] < min) min = sicaklik[i];
        if (sicaklik[i] > max) max = sicaklik[i];
    }

    printf("Ortalama      : %.2f °C\n", ort);
    printf("Standart Sapma: %.2f °C\n", stdSapma);
    printf("Min           : %.2f °C\n", min);
    printf("Max           : %.2f °C\n", max);
    return 0;
}
