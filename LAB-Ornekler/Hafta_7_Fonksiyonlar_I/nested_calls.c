#include <stdio.h>

float celsiusOku(void) {
    return 36.5;   // Sensör simülasyonu
}

float fahrenheitCevir(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

void sicaklikRaporla(void) {
    // Çağrı zinciri: sicaklikRaporla → fahrenheitCevir → celsiusOku
    float derece = fahrenheitCevir(celsiusOku());
    printf("Sicaklik: %.1f F\n", derece);
}

int main() {
    sicaklikRaporla();   // Tek çağrı ile 3 fonksiyon tetiklenir
    return 0;
}
