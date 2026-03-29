#include <stdio.h>

int main() {
    int n;
    printf("Kaç terim? "); scanf("%d", &n);

    long long onceki = 0, simdiki = 1, sonraki;
    printf("Fibonacci Serisi:\n");
    printf("%lld %lld ", onceki, simdiki);

    for (int i = 3; i <= n; i++) {
        sonraki = onceki + simdiki;
        printf("%lld ", sonraki);
        onceki = simdiki;    // Kaydırma (shift)
        simdiki = sonraki;
    }
    printf("\n");
    return 0;
}
