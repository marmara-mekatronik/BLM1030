#include <stdio.h>
#include "MyLib.h"


int main() {
    int Bir, Iki;
    float YariCap, Aci;
    printf("Birinci sayiyi Giriniz: ");
    scanf("%d",&Bir);
    printf("İkinci sayi Giriniz: ");
    scanf("%d",&Iki);
    printf("İki sayının Ortalaması:%.2f\n", ortalama(Bir,Iki));


    printf("Dairenin Yariçapını Giriniz : ");
    scanf("%f",&YariCap);
    printf("Dairenin Alanı:%.2f\n", DaireAlani(YariCap));

    printf("Alanı hesaplanacak daire kesitinin açısını giriniz : ");
    scanf("%f",&Aci);
    printf("Dairenin Yariçapını Giriniz : ");
    scanf("%f",&YariCap);
    printf("Dairenin Kesitinin Alanı:%.2f\n", DDAlani(Aci,YariCap));

    return 0;
}
