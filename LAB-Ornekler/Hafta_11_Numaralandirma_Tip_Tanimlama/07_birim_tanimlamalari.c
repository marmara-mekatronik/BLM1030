#include <stdio.h>

typedef float Volt_t;
typedef float Amper_t;
typedef float Watt_t;

int main() {
    Volt_t motor_gerilimi = 12.0;
    Amper_t cekilen_akim = 1.5;
    
    // Güç formülü P = V * I
    Watt_t guc = motor_gerilimi * cekilen_akim;
    
    printf("=== Mekatronik Birim Tanımlamaları ===\n");
    printf("Motor Gerilimi: %.1f V\n", motor_gerilimi);
    printf("Çekilen Akım  : %.1f A\n", cekilen_akim);
    printf("Tüketilen Güç : %.2f W\n", guc);
    
    return 0;
}
