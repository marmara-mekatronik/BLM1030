#include <stdio.h>

int main() {
    int n;
    printf("Ust sinir (N): ");
    scanf("%d", &n);

    printf("1-%d arasi asal sayilar:\n", n);
    for (int sayi = 2; sayi <= n; sayi++) {
        int asal = 1;
        for (int i = 2; i * i <= sayi; i++) {
            if (sayi % i == 0) {
                asal = 0;
                break;
            }
        }
        if (asal) printf("%d ", sayi);
    }
    printf("\n");
    return 0;
}
