#include <stdio.h>
#include <limits.h> 
#include <float.h>  

int main() {
    char karakter = 'A';
    short int kisa_tamsayi = 32767;
    int tamsayi = 100000;
    unsigned int pozitif_sayi = 4000000000U; // 'U'
    long long cok_buyuk_sayi = 9223372036854775807LL; // 'LL'

    float ondalikli_kisa = 3.14159f;
    double ondalikli_hassas = 3.141592653589793;

    printf("int boyutu: %zu byte\n", sizeof(int));
    printf("float boyutu: %zu byte\n", sizeof(float));
    printf("karakter (%%c): %c\n", karakter);
    printf("tamsayi: %d\n", tamsayi);
    printf("ondalikli (float - 10 basamak): %.10f\n", ondalikli_kisa); 

    return 0;
}
