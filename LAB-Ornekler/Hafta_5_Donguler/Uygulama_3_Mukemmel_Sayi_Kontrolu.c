#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    int bolen_toplami = 0;
    for (int i = 1; i < sayi; i++) {
        if (sayi % i == 0) {
            bolen_toplami += i;
            printf("%d ", i);  // Bölenleri yazdır
        }
    }

    printf("\nBolenlerin toplami: %d\n", bolen_toplami);
    if (bolen_toplami == sayi)
        printf("%d bir MUKEMMEL sayidir!\n", sayi);
    else
        printf("%d mukemmel sayi degildir.\n", sayi);
    return 0;
}
