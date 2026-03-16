#include <stdio.h>

int main() {
    int girilen_sayi, sayi = 2;

    printf("Bir sayi girin: ");
    scanf("%d", &girilen_sayi);

    printf("Asal sayilar: ");

    while (sayi <= girilen_sayi) {
        int i = 2;
        int asal = 1; // Varsayılan olarak asal kabul ediyoruz

        while (i <= sayi / 2) {
            if (sayi % i == 0) {
                asal = 0; // Sayı asal değilse asal değişkenini 0 yapıyoruz
                break;
            }
            i++;
        }

        if (asal == 1) {
            printf("%d ", sayi);
        }

        sayi++;

        // Eğer sayı 2'den büyükse ve çift ise, bir sonraki sayıya geçmeden önce 2 arttırıyoruz.
        if (sayi > 2 && sayi % 2 == 0) {
            sayi++;
        }
    }

    return 0;
}
