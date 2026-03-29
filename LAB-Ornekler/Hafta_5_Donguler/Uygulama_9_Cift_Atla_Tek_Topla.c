#include <stdio.h>

int main() {
    int n;
    printf("Ust sinir (N): ");
    scanf("%d", &n);

    int tek_toplam = 0;
    printf("Islenen tek sayilar: ");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue; // Çift sayıları atla, döngünün sonraki turuna geç
        }
        // Buraya sadece tek sayılar ulaşır
        printf("%d ", i);
        tek_toplam += i;
    }
    printf("\n1-%d arasi tek sayilarin toplami: %d\n", n, tek_toplam);
    return 0;
}
