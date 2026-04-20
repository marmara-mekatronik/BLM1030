#include <stdio.h>

float voltajDegeri(int adc_ham) {
    float sonuc = (adc_ham * 5.0) / 1023.0;   // ADC → Volt dönüşümü
    
    return sonuc;   // Değeri çağırana ilet ve fonksiyondan çık
    
    printf("Sensor okundu.");  // ❌ Ölü kod — asla çalıştırılmaz
}

int main() {
    float batarya = voltajDegeri(512);  // ≈ 2.503 V
    printf("Batarya: %.3f V\n", batarya);
    return 0;
}
