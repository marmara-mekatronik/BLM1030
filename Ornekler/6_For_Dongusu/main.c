#include <stdio.h>

int main() {

    int sayi, sayac, toplam = 0;

    printf("Pozitif bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    for (sayac = 1; sayac <= sayi; ++sayac) {
        toplam += sayac;
    }

    printf("Toplam = %d", toplam);

    return 0;
}
