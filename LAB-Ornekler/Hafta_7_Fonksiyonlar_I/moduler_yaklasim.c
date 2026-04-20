#include <stdio.h>

int sistemleri_baslat() {
    printf("Sistemler baslatiliyor...\n");
    return 0;
}

float ultrasonik_oku() {
    return 15.5;
}

float gyro_oku() {
    return 45.0;
}

void motorlari_sur(float mesafe, float aci) {
    printf("Mesafe: %.1f, Aci: %.1f -> Motorlar suruluyor.\n", mesafe, aci);
}

int main() {
    sistemleri_baslat();
    
    int sayac = 0;
    while (sayac < 5) {
        float mesafe = ultrasonik_oku();
        float aci    = gyro_oku();
        motorlari_sur(mesafe, aci);
        sayac++;
    }
    return 0;
}
