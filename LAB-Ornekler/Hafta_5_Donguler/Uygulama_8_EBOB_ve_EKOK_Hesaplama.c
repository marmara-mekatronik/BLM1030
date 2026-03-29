#include <stdio.h>

int main() {
    int a, b;
    printf("Iki sayi giriniz: ");
    scanf("%d %d", &a, &b);

    int orijinal_a = a, orijinal_b = b;

    // Öklid Algoritması — while döngüsü ile EBOB
    while (b != 0) {
        int kalan = a % b;
        a = b;
        b = kalan;
    }
    int ebob = a;
    int ekok = (orijinal_a * orijinal_b) / ebob;

    printf("EBOB(%d, %d) = %d\n", orijinal_a, orijinal_b, ebob);
    printf("EKOK(%d, %d) = %d\n", orijinal_a, orijinal_b, ekok);
    return 0;
}
