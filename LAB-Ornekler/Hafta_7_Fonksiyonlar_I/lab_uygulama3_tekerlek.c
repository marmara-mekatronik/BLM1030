#include <stdio.h>
#define PI 3.14159265

float alanHesapla(float r);      // Prototip
float cevreHesapla(float r);     // Prototip

int main() {
    float yaricap;
    printf("Tekerlek yaricapi (cm): ");
    if (scanf("%f", &yaricap) != 1) {
        printf("Hata: Gecersiz giris.\n");
        return 1;
    }
    
    printf("Alan  : %.2f cm2\n", alanHesapla(yaricap));
    printf("Cevre : %.2f cm\n", cevreHesapla(yaricap));
    printf("1 tur : %.2f cm yol alir.\n", cevreHesapla(yaricap));
    return 0;
}

float alanHesapla(float r) {
    return PI * r * r;
}

float cevreHesapla(float r) {
    return 2 * PI * r;
}
