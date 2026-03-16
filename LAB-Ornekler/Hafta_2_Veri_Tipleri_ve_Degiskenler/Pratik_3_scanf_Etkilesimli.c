#include <stdio.h>

int main() {
    float uzunluk, genislik, yukseklik, hacim;
    
    printf("Uzunluk giriniz (m): ");
    scanf("%f", &uzunluk); 
    printf("Genislik giriniz (m): ");
    scanf("%f", &genislik);
    printf("Yukseklik giriniz (m): ");
    scanf("%f", &yukseklik);

    hacim = uzunluk * genislik * yukseklik;
    printf("Hacim: %.3f m^3\n", hacim);

    int yas;
    char cinsiyet;
    printf("\nYasinizi giriniz: ");
    scanf("%d", &yas); 
    
    printf("Cinsiyetiniz (E/K): ");
    // Buffer sorunu CÖZÜMÜ için çift tırnağın içinde başına space eklendi! " %c"
    scanf(" %c", &cinsiyet); 
    
    printf("Kayit: %d - %c\n", yas, cinsiyet);
    return 0;
}
