#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {       // Satır sayısı
        for (int j = 1; j <= i; j++) {   // Her satırdaki yıldız sayısı = i
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
