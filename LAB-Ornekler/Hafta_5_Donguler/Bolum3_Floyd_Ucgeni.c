#include <stdio.h>

int main() {
    int sayi = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%3d ", sayi++);
        }
        printf("\n");
    }
    return 0;
}
