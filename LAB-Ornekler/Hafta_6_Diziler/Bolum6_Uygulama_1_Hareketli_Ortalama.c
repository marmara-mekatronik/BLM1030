/*
 * Hafta 6 - Bolum 6.2: Hareketli Ortalama Filtresi
 * Gurultulu sensor verisini yumusatmak icin temel sinyal isleme teknigi.
 */
#include <stdio.h>
#define N 10        // Veri sayisi
#define PENCERE 3   // Filtre pencere boyutu

int main() {
    double sensor[N] = {23.1, 24.8, 22.5, 25.2, 23.9,
                        24.5, 22.8, 25.0, 23.7, 24.2};
    double filtreli[N];

    int yari = PENCERE / 2;
    for (int i = 0; i < N; i++) {
        double toplam = 0;
        int sayac = 0;
        for (int j = -yari; j <= yari; j++) {
            if (i + j >= 0 && i + j < N) {
                toplam += sensor[i + j];
                sayac++;
            }
        }
        filtreli[i] = toplam / sayac;
        printf("Ham: %.1f → Filtreli: %.1f\n", sensor[i], filtreli[i]);
    }
    return 0;
}
