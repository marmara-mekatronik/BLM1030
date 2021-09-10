#include <stdio.h>
#include <stdlib.h>

#define LOGLAMA_AKTIF

int faktoriyelHesapla(int);

int main() {
    int sayi = 0;
    printf("Faktoriyeli Hesaplanacak Sayiyi Giriniz : ");
    scanf("%d", &sayi);
    printf("\nSonuc=%d\n", faktoriyelHesapla(sayi));
    return 0;
}

int faktoriyelHesapla(int sayi) {
    if (sayi <= 1)
        return 1;
    long int sonuc = 1;
    for (int i = 1; i <= sayi; ++i) {
#ifdef LOGLAMA_AKTIF
        sonuc = sonuc * i;
        printf("%d!=%d\n", i, sonuc);
#else
        sonuc = sonuc * i;
#endif
    }
    return sonuc;
}
