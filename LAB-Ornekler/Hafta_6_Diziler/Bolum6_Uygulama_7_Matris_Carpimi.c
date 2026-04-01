/*
 * Hafta 6 - Bolum 6.9: Matris Carpimi — Kinematik Donusum
 * Robotik kolda iki eklem donusum matrisinin carpilmasi.
 */
#include <stdio.h>
#define N 3

int main() {
    // 30° dondurme matrisi (cos30=0.866, sin30=0.5)
    double R1[N][N] = {
        { 0.866, -0.500, 0.0},
        { 0.500,  0.866, 0.0},
        { 0.0,    0.0,   1.0}
    };
    // 45° dondurme matrisi
    double R2[N][N] = {
        { 0.707, -0.707, 0.0},
        { 0.707,  0.707, 0.0},
        { 0.0,    0.0,   1.0}
    };
    double sonuc[N][N] = {0};

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                sonuc[i][j] += R1[i][k] * R2[k][j];

    printf("Bilesik donusum (30°+45° = 75°):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%7.3f ", sonuc[i][j]);
        printf("\n");
    }
    return 0;
}
