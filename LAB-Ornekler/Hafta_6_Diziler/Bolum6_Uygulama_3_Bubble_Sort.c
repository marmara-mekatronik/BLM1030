/*
 * Hafta 6 - Bolum 6.4: Bubble Sort (Kabarcik Siralama)
 * Sensor verilerini siralamak — en basit siralama algoritmasi.
 * Karmasiklik: O(n^2)
 */
#include <stdio.h>
#define N 8

int main() {
    int dizi[N] = {64, 34, 25, 12, 22, 11, 90, 45};

    printf("Siralama oncesi: ");
    for (int i = 0; i < N; i++) printf("%d ", dizi[i]);
    printf("\n");

    // Bubble Sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                // Swap (takas)
                int gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }

    printf("Siralama sonrasi: ");
    for (int i = 0; i < N; i++) printf("%d ", dizi[i]);
    printf("\n");
    return 0;
}
