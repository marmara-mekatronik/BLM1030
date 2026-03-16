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

char Notu_Harfe_Donustur(int ogrenci_notu)
{
    char not;
    switch (ogrenci_notu)
    {
        case 100:
            not = 'A';
            break;
        case 90 ... 99:
            not = 'A';
            break;
        case 80 ... 89:
            not = 'B';
            break;
        case 70 ... 79:
            not = 'C';
            break;
        case 50 ... 69:
            not = 'D';
            break;
        default:
            not = 'F';
            break;
    }
    return not;
}
