#include <stdio.h>
enum hafta_gun {
    pazartesi=1,
    sali,
    carsamba,
    persembe,
    cuma,
    cumartesi,
    pazar
}gunler;

typedef enum hafta_gun haftalar;

void gunu_yaz(haftalar gun){
    switch (gun) {
        case pazartesi:
            printf("PAZARTESI");
            break;
        case sali:
            printf("SALI");
            break;
        case carsamba:
            printf("CARSAMBA");
            break;
        case persembe:
            printf("PERSEMBE");
            break;
        case cuma:
            printf("CUMA");
            break;
        case cumartesi:
            printf("CUMARTESI");
            break;
        case pazar:
            printf("PAZAR");
            break;
        default:
            printf("Yanlis hafta gunu");
            break;
    }
}
int main() {
    gunler = persembe;
    gunu_yaz(gunler);
    return 0;
}
