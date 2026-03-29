#include <stdio.h>

int main() {
    int sayi, asal = 1;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 2) asal = 0;

    for (int i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0) {
            asal = 0;
            break; // Bölen bulundu, devamına bakmaya gerek yok
        }
    }

    if (asal)
        printf("%d bir asal sayidir.\n", sayi);
    else
        printf("%d asal degildir.\n", sayi);
    return 0;
}
