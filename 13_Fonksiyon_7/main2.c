#include <stdio.h>
#include <limits.h>

int sonuc_ulong_max_asar_mi(unsigned int sayi);

unsigned long long int faktoriyel_hesaplama(unsigned int sayi);

int main() {
    for (int i = 0; i < USHRT_MAX; ++i) {
        if (sonuc_ulong_max_asar_mi(i)) {
            break;
        } else {
            printf("%u! = %llu\n", i, faktoriyel_hesaplama(i));
        }
    }
    return 0;
}

// faktoriyel hesaplayan fonksiyon
unsigned long long int faktoriyel_hesaplama(unsigned int sayi) {
    if (sayi == 0 || sayi == 1)
        return 1;
    return (sayi * faktoriyel_hesaplama(sayi - 1));
};

// Faktoriyel sonucunun ULLONG_MAX'i aşıp aşmadığını kontrol
//eden fonksiyon
// ULLONG_MAX = 18446744073709551615
// 21! = 14197454024290336768

int sonuc_ulong_max_asar_mi(unsigned int sayi) {
    unsigned long long int sonuc = 1;
    for (unsigned int i = 1; i < sayi; ++i) {
        if (ULLONG_MAX / i < sonuc) {
            return 1; // sonuç ULLONG_MAX'i aşarsa
        }
        sonuc *= i; // Sonuç UULONG_MAX'i aşmıyor
    }
    return 0;
}


