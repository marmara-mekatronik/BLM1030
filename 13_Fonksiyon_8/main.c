#include <stdio.h>
#include <stdarg.h>

int minimum_bul(int arg_sayac, ...);

int main() {
    printf("sayilar: 14, 18, 55 ,6, 25\n");
    printf("Verilen sayilarin en kucugu: %d dir",
           minimum_bul(5,14, 18,55,6,25));
    return 0;
}

int minimum_bul(int arg_sayac, ...) {
    int minimum_sayi, cekilen_sayi;
    va_list ap;
    va_start(ap, arg_sayac);
    minimum_sayi = va_arg(ap, int);
    for (int i = 2; i <= arg_sayac; ++i) {
        if ((cekilen_sayi = va_arg(ap, int)) < minimum_sayi) {
            minimum_sayi = cekilen_sayi;
        }
    }
    va_end(ap);
    return minimum_sayi;
}
