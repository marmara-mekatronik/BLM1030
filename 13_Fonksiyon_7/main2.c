#include <stdio.h>
#include <limits.h>

int sonuc_ulong_max_asar_mi(unsigned short int sayi);

unsigned long long int faktoreyel_hesaplama(unsigned short int sayi);

int main() {
    for (unsigned short int i = 1; i < USHRT_MAX; ++i) {
        if (sonuc_ulong_max_asar_mi(i)) {
            break;
        } else {
            printf("%hu! = %llu\n", i, faktoreyel_hesaplama(i));
        }
    }
    return 0;
}
unsigned long long int faktoreyel_hesaplama(unsigned short int sayi) {
    if (sayi == 0 || sayi == 1)
        return 1;
    return (sayi * faktoreyel_hesaplama(sayi - 1));
}
// Faktoriyel sonucunun ULLONG_MAX'i aşıp aşmadığını kontrol
//eden fonksiyon
// ULLONG_MAX = 18446744073709551615

int sonuc_ulong_max_asar_mi(unsigned short int sayi) {
    unsigned long long int sonuc = 1;
    for (unsigned short int i = 1; i < sayi; ++i) {
        if (ULLONG_MAX / i < sonuc) {
            return 1; // sonuç ULLONG_MAX'aşarsa
        } else {
            sonuc *= i; // sonuç ULLONG_MAX'ı aşmaz İSE
        }
    }
    return 0;
}
