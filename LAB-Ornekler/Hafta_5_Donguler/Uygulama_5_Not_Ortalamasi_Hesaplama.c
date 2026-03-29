#include <stdio.h>

int main() {
    int not_degeri, toplam = 0, adet = 0;

    printf("Notlari giriniz (cikmak icin -1):\n");
    while (1) {
        // Girdi doğrulama: 0-100 arası veya -1 olmalı
        do {
            printf("Not: ");
            scanf("%d", &not_degeri);
            if (not_degeri != -1 && (not_degeri < 0 || not_degeri > 100))
                printf("Gecersiz! 0-100 arasi veya -1 girin.\n");
        } while (not_degeri != -1 && (not_degeri < 0 || not_degeri > 100));

        if (not_degeri == -1) break;  // Sentinel değer → çık

        toplam += not_degeri;
        adet++;
    }

    if (adet > 0)
        printf("Ortalama: %.2f (%d ogrenci)\n", (double)toplam / adet, adet);
    else
        printf("Hicbir not girilmedi.\n");
    return 0;
}
