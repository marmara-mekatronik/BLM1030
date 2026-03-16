#include <stdio.h>

#define KDV 0.20

int main() {
    float fiyat;
    printf("Urun fiyati (TL): ");
    scanf("%f", &fiyat);
    printf("KDV'li Toplam: %.2f TL\n", fiyat + (fiyat * KDV));
    return 0;
}
