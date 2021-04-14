#include <stdio.h>

char Notu_Harfe_Donustur(int ogrenci_notu);

int main() {
    int ogr_not;
    do {
        printf("Lütfen notunuzu 0-100 arasında giriniz:");
        scanf("%d",&ogr_not);
        if (ogr_not>=0 && ogr_not <= 100)
        printf("Basarı Harf notunuz : %c dir", Notu_Harfe_Donustur(ogr_not) );
        else
            printf("Girdiğiniz sayı 0-100 arasında bir değer olmali\n ");
    } while (ogr_not<0 || ogr_not > 100);
    return 0;
}

char Notu_Harfe_Donustur(int ogrenci_notu){
    if(ogrenci_notu>=0 && ogrenci_notu<50)
        return 'F';
    if(ogrenci_notu>=50 && ogrenci_notu<70)
        return 'D';
    if(ogrenci_notu>=70 && ogrenci_notu<80)
        return 'C';
    if(ogrenci_notu>=80 && ogrenci_notu<90)
        return 'B';
    if(ogrenci_notu>=90 && ogrenci_notu<=100)
        return 'A';
}
