#include <stdio.h>

// Tür 1: Parametresiz, değer döndürmeyen
void baslikYaz(void) {
    printf("=== Mekatronik Kontrol Sistemi ===\n");
}

// Tür 2: Parametreli, değer döndürmeyen
void ledYak(int pin) {
    printf("LED pin %d: ACIK\n", pin);
}

// Tür 3: Parametresiz, değer döndüren
int sicaklikOku(void) {
    return 72;   // Simülasyon: 72 derece
}

// Tür 4: Parametreli, değer döndüren
float voltajCevir(int adc_deger) {
    return (adc_deger * 5.0) / 1023.0;
}

int main() {
    baslikYaz();
    ledYak(13);
    int temp = sicaklikOku();
    float volt = voltajCevir(512);
    printf("Sicaklik: %d C, Voltaj: %.2f V\n", temp, volt);
    return 0;
}
