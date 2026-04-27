#include <stdio.h>

void swap(int *a, int *b) {
    int gecici = *a;
    *a = *b;
    *b = gecici;
}

int main() {
    int sensor1, sensor2;
    printf("1. sensor degerini girin: ");
    scanf("%d", &sensor1);
    printf("2. sensor degerini girin: ");
    scanf("%d", &sensor2);
    
    printf("Takas oncesi: S1=%d, S2=%d\n", sensor1, sensor2);
    swap(&sensor1, &sensor2);
    printf("Takas sonrasi: S1=%d, S2=%d\n", sensor1, sensor2);
    return 0;
}
