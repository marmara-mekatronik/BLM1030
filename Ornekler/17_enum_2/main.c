#include <stdio.h>

enum ay_listesi {
    ocak = 1, subat, mart, nisan, mayis,
    haziran, temmuz, agustos, eylul,
    ekim, kasim, aralik
};

typedef enum ay_listesi aylar;

void ay_ismini_yazdir(aylar);

int main() {
    aylar bu_ay = ocak;
    printf("%d. ay ", bu_ay);
    ay_ismini_yazdir(bu_ay);
    return 0;
}

void ay_ismini_yazdir(aylar ay_adi) {
    switch (ay_adi) {
        case ocak:
            printf("Ocak\n");
            break;
        case subat:
            printf("Subat\n");
            break;
        case mart:
            printf("Mart\n");
            break;
        case nisan:
            printf("Nisan\n");
            break;
        case mayis:
            printf("Mayis\n");
            break;
        case haziran:
            printf("Haziran\n");
            break;
        case temmuz:
            printf("Temmuz\n");
            break;
        case agustos:
            printf("Agustos\n");
            break;
        case eylul:
            printf("Eylul\n");
            break;
        case ekim:
            printf("Ekim\n");
            break;
        case kasim:
            printf("Kasim\n");
            break;
        case aralik:
            printf("Aralik\n");
            break;
        default:
            printf("Tanımlı ay değil");
            break;
    }
}
