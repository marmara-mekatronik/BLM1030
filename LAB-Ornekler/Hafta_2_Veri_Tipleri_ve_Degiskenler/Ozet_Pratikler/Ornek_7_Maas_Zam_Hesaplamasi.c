#include <stdio.h>

int main() {
    float maas, artisOrani, yeniMaas;
    printf("Eski Maas ve Zam Yuzdesi: ");
    scanf("%f %f", &maas, &artisOrani);
    yeniMaas = maas + (maas * (artisOrani / 100));
    printf("\n%-15s: %.2f TL\n", "Eski Maas", maas);
    printf("%-15s: %.2f TL\n", "Yeni Maas", yeniMaas);
    return 0;
}
