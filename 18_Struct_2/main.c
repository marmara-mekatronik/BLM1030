#include <stdio.h>
#include <string.h>
int main() {
    struct Kisisel_Veri {
        char ad[50];
        struct {
            int yil;
            int ay;
            int gun;
        }dogum_tarihi;
        struct {
            int boy;
            int kilo;
        }bk;
    };

    struct Kisisel_Veri ben={"Huseyin", {1972,01,02}, {180,90}};
    struct Kisisel_Veri kardesim;
    kardesim=ben;
    strcpy(kardesim.ad,"Hasan");

    printf("Adi :%s\n", ben.ad);
    printf("Dogum Tarihi :%d/%d/%d\n", ben.dogum_tarihi.gun,
           ben.dogum_tarihi.ay,ben.dogum_tarihi.yil);
    printf("Boy :%d\n", ben.bk.boy);
    printf("Kilo :%d\n", ben.bk.kilo);


    printf("Adi :%s\n", kardesim.ad);
    printf("Dogum Tarihi :%d/%d/%d\n", kardesim.dogum_tarihi.gun,
           kardesim.dogum_tarihi.ay,kardesim.dogum_tarihi.yil);
    printf("Boy :%d\n", kardesim.bk.boy);
    printf("Kilo :%d\n", kardesim.bk.kilo);


    return 0;
}
