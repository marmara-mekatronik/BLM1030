#include <stdio.h>

int main() {
    // Başlık satırı
    printf("     ");
    for (int j = 1; j <= 10; j++) printf("%4d", j);
    printf("\n     ");
    for (int j = 1; j <= 10; j++) printf("----");
    printf("\n");

    // Tablo gövdesi
    for (int i = 1; i <= 10; i++) {
        printf("%2d | ", i);
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}
