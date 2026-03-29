#include <stdio.h>

int main() {
    int n;
    printf("Boyut (tek sayi giriniz): ");
    scanf("%d", &n);

    int yari = n / 2;

    // Üst yarı (piramit)
    for (int i = 0; i <= yari; i++) {
        for (int j = 0; j < yari - i; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("*");
        printf("\n");
    }

    // Alt yarı (ters piramit)
    for (int i = yari - 1; i >= 0; i--) {
        for (int j = 0; j < yari - i; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
