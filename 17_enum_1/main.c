#include <stdio.h>

int main() {

    enum KullaniciSeviyeri {
        misafir = 1,
        ogrenci = 2,
        akademisyen = 3,
        admin = 4
    };
    // int degisken_ismi;
    enum KullaniciSeviyeri seviye;
    printf("Kullanici seviyenizi 1-4 arasinda giriniz : ");
    scanf("%d", &seviye);
    switch (seviye) {
        case misafir:
            printf("Yetki seviyeniz misafirdir\n");
            break;
        case ogrenci:
            printf("Yetki seviyeniz ogrencidir\n");
            break;
        case akademisyen:
            printf("Yetki seviyeniz Akademisyendir\n");
            break;
        case admin:
            printf("Yetki seviyeniz admindir\n");
            break;
    }
    return 0;
}
