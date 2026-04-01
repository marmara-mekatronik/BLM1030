/*
 * Hafta 6 - Bolum 6.6: Selection Sort (Secerek Siralama)
 * Her turda minimum elemani bulur ve yerine koyar.
 * Takas sayisi O(n).
 */
#include <stdio.h>
#define N 6

int main() {
    int dizi[N] = {29, 10, 14, 37, 13, 25};

    for (int i = 0; i < N - 1; i++) {
        int minIdx = i;  // Minimum elemanin indeksini bul
        for (int j = i + 1; j < N; j++) {
            if (dizi[j] < dizi[minIdx]) {
                minIdx = j;
            }
        }
        // Minimum elemani i. pozisyona tasi (swap)
        if (minIdx != i) {
            int gecici = dizi[i];
            dizi[i] = dizi[minIdx];
            dizi[minIdx] = gecici;
        }
    }

    printf("Sirali: ");
    for (int i = 0; i < N; i++) printf("%d ", dizi[i]);
    return 0;
}
