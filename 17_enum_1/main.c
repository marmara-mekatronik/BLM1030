#include <stdio.h>
#include <string.h>

int main() {
    enum KullaniciSeviyeleri{
        misafir=1, ogrenci=2,
        akademisyen, admin
    }KSeviye;

    char *Sifreler[]={"1234","5678","9011","4321"};
    char *sifre[4];

    printf("Lütfen Şifrenizi giriniz : ");
    scanf("%s", sifre);

if(strcmp(Sifreler[0],sifre)==0){KSeviye=misafir;}
else if (strcmp(Sifreler[1],sifre)==0){KSeviye=ogrenci;}
else if (strcmp(Sifreler[2],sifre)==0){KSeviye=akademisyen;}
else if (strcmp(Sifreler[3],sifre)==0){KSeviye=admin;}

    switch (KSeviye) {
        case misafir:
            printf("Yetki Seviyeniz misafirdir..."); break;
        case ogrenci:
            printf("Yetki Seviyeniz ogrencidir..."); break;
        case akademisyen:
            printf("Yetki Seviyeniz akademisyendir..."); break;
        case admin:
            printf("Yetki Seviyeniz admindir...."); break;
        default:
            printf("Girdiginiz deger gecersizdir..."); break;
    }
    return 0;
}

