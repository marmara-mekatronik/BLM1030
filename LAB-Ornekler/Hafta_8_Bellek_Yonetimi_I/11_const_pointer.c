#include <stdio.h>

// const int *ptr: "Bu pointer üzerinden veri DEĞİŞTİRİLEMEZ!"
void sensorVeriYazdir(const int *ptr_veri, int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("Sensor[%d] = %d\n", i, ptr_veri[i]);
        // ptr_veri[i] = 0;  // ❌ Derleme Hatası! const ile korunuyor.
    }
}

int main() {
    int adc_ham[4] = {512, 768, 256, 1023};
    sensorVeriYazdir(adc_ham, 4);  // Veriyi güvenle gönder
    return 0;
}
