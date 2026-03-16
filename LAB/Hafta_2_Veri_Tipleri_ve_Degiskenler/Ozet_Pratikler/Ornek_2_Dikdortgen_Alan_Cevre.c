#include <stdio.h>

int main() {
    float kisa, uzun;
    printf("Kisa ve Uzun kenar (m): ");
    scanf("%f %f", &kisa, &uzun);
    printf("Alan: %.2f m^2, Cevre: %.2f m\n", (kisa*uzun), 2*(kisa+uzun));
    return 0;
}
