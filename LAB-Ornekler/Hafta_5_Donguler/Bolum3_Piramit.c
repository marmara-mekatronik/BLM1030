#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        // Boşluklar: (n - i) adet
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        // Yıldızlar: (2*i - 1) adet
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
