#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    printf("x değeri: "); scanf("%lf", &x);
    printf("Terim sayısı: "); scanf("%d", &n);

    double sonuc = 1.0, terim = 1.0;
    for (int i = 1; i <= n; i++) {
        terim *= x / i;    // x^i / i! (önceki terimden türet)
        sonuc += terim;
        printf("%2d. terim sonrası: %.10f\n", i, sonuc);
    }
    printf("Hesaplanan: %.10f\n", sonuc);
    printf("Gerçek exp(%g): %.10f\n", x, exp(x));
    return 0;
}
