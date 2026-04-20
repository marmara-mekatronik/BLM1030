#include <stdio.h>

float adcToVoltaj(int adc);             // ADC → Volt
void durumRaporla(float voltaj);        // Voltaja göre rapor

int main() {
    int adc_degeri;
    printf("ADC degeri (0-1023): ");
    if (scanf("%d", &adc_degeri) != 1) {
        printf("HATA: Gecersiz giris!\n");
        return 1;
    }
    
    if (adc_degeri < 0 || adc_degeri > 1023) {
        printf("HATA: Gecersiz ADC araligi!\n");
        return 1;   // EXIT_FAILURE
    }
    
    float volt = adcToVoltaj(adc_degeri);
    printf("Voltaj: %.3f V\n", volt);
    durumRaporla(volt);
    return 0;
}

float adcToVoltaj(int adc) {
    return (adc * 5.0) / 1023.0;
}

void durumRaporla(float voltaj) {
    if (voltaj < 1.0)
        printf("Durum: DUSUK - Batarya zayif!\n");
    else if (voltaj < 3.5)
        printf("Durum: NORMAL - Sistem stabil.\n");
    else
        printf("Durum: YUKSEK - Asiri gerilim riski!\n");
}
