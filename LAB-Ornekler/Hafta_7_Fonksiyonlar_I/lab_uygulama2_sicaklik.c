#include <stdio.h>

float celsiusToFahrenheit(float c);   // Prototip

int main() {
    float derece;
    printf("Sicaklik (C): ");
    if (scanf("%f", &derece) != 1) {
        printf("Hata: Gecersiz giris.\n");
        return 1;
    }
    
    float sonuc = celsiusToFahrenheit(derece);
    printf("%.1f C = %.1f F\n", derece, sonuc);
    
    if (sonuc > 100.0) {
        printf("UYARI: Motor sogutma sistemi aktif edilmeli!\n");
    }
    return 0;
}

float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}
