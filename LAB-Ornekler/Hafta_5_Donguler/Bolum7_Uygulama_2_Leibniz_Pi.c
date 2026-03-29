#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Terim sayısı: ");
    scanf("%d", &n);
    // Leibniz formülü: π/4 = 1 - 1/3 + 1/5 - 1/7 + ...
    double pi_4 = 0.0;
    int isaret = 1;

    for (int i = 0; i < n; i++) {
        pi_4 += isaret * (1.0 / (2 * i + 1));
        isaret = -isaret;  // İşareti her adımda değiştir

        if ((i + 1) % 10000 == 0) {
            printf("%6d terim → π ≈ %.10f\n", i + 1, 4 * pi_4);
        }
    }
    printf("Hesaplanan π = %.10f\n", 4 * pi_4);
    printf("math.h π     = %.10f\n", M_PI);
    return 0;
}
