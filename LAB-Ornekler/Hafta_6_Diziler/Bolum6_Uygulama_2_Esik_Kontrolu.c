/*
 * Hafta 6 - Bolum 6.3: Dizide Deger Sayma ve Esik Kontrolu
 * Sensor dizisinde belirli bir esik degerini asan okumalari sayma.
 */
#include <stdio.h>
#define N 10

int main() {
    int sicaklik[N] = {22, 25, 31, 28, 35, 24, 33, 29, 36, 27};
    int esik = 30;
    int sayac = 0;

    printf("Esik degeri: %d°C\n", esik);
    printf("Esigi asan okumalar: ");

    for (int i = 0; i < N; i++) {
        if (sicaklik[i] > esik) {
            printf("%d°C ", sicaklik[i]);
            sayac++;
        }
    }

    printf("\nToplam %d okuma esigi asti.\n", sayac);
    printf("Alarm orani: %%%.0f\n", (double)sayac / N * 100);
    return 0;
}
