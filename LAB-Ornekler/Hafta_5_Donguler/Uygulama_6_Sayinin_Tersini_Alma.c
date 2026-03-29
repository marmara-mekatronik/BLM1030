#include <stdio.h>

int main() {
    int sayi, ters = 0;
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    int orijinal = sayi;
    while (sayi != 0) {
        int basamak = sayi % 10;   // Son basamağı al
        ters = ters * 10 + basamak; // Ters sayıya ekle
        sayi /= 10;                 // Son basamağı at
    }
    printf("%d sayisinin tersi: %d\n", orijinal, ters);

    // Palindrom kontrolü (bonus)
    if (orijinal == ters)
        printf("%d bir palindrom sayidir!\n", orijinal);
    return 0;
}
