#include <stdio.h>

void adcNormalize(const int *ham, float *volt, int boyut) {
    for (int i = 0; i < boyut; i++) {
        volt[i] = (ham[i] * 5.0) / 1023.0;  // 10-bit ADC -> Volt
    }
}

int main() {
    int adc_ham[5] = {0, 256, 512, 768, 1023};
    float voltaj[5];
    
    adcNormalize(adc_ham, voltaj, 5);
    
    for (int i = 0; i < 5; i++) {
        printf("ADC[%d] = %4d  ->  %.3f V\n", i, adc_ham[i], voltaj[i]);
    }
    return 0;
}
