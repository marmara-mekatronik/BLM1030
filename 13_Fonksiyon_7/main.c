#include <stdio.h>

unsigned long long int faktoreyel_hesaplama(unsigned short int sayi);

int main() {
    unsigned short int sayi;
    unsigned long long int faktoriyel;
    printf("Lütfen Faktoriyeli hesaplanacak sayiyi giriniz :");
    scanf("%hu",&sayi);

    faktoriyel = faktoreyel_hesaplama(sayi);

    printf("Hesaplanan faktoriyel : %llu", faktoriyel);

    return 0;
}

unsigned long long int faktoreyel_hesaplama(unsigned short int sayi){
    if(sayi<=1)
        return 1;
    return (sayi * faktoreyel_hesaplama(sayi -1));
}

