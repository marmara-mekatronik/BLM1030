#include <stdio.h>
typedef enum cinsiyet {
    kadin,
    erkek
} cinsi;
typedef struct OGRENCI {
    char adi[50];
    int ogr_no;
    float notu;
    cinsi cinsiyeti;
} ogrenci;
void cinsiyetYaz(cinsi cins);
void bilgiYazdir(ogrenci mek_ogr[], int diziBoyutu);

int main() {
    ogrenci mek_ogr[3] = {
            {"Ahmet",  1234, 85.50,  erkek},
            {"Zeynep", 1834, 52.50,  kadin},
            {"Emir",   2400, 100.00, erkek}};

    bilgiYazdir(mek_ogr, sizeof(mek_ogr)/sizeof(ogrenci));

    return 0;
}
void cinsiyetYaz(cinsi cins){
    switch (cins) {
        case kadin:
            printf("Kadin");
            break;
        case erkek:
            printf("Erkek");
            break;
    }
}
void bilgiYazdir(ogrenci mek_ogr[], int diziBoyutu){
    for (int i = 0; i < diziBoyutu; i++) {
        printf("Adi : %s\n", mek_ogr[i].adi);
        printf("Numarasi : %d\n", mek_ogr[i].ogr_no);
        printf("Notu : %.2f\n", mek_ogr[i].notu);
        printf("Cinsiyeti : ");
        cinsiyetYaz(mek_ogr[i].cinsiyeti);
        printf("\n--------------\n");
    }
}
