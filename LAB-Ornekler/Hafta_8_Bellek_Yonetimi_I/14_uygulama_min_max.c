#include <stdio.h>

void minMaxBul(const int *dizi, int boyut, int *min, int *max) {
    *min = dizi[0];
    *max = dizi[0];
    for (int i = 1; i < boyut; i++) {
        if (dizi[i] < *min) *min = dizi[i];
        if (dizi[i] > *max) *max = dizi[i];
    }
}

int main() {
    int sicaklik[6] = {23, 45, 12, 67, 34, 8};
    int enDusuk, enYuksek;
    
    minMaxBul(sicaklik, 6, &enDusuk, &enYuksek);
    
    printf("Min: %d C, Max: %d C\n", enDusuk, enYuksek);
    return 0;
}
