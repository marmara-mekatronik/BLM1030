#include <stdio.h>

int sistemHataKodu = 0;   // GLOBAL — tüm fonksiyonlar erişebilir

void sensor1Oku() {
    sistemHataKodu = 5;    // Değeri ezdi
}
void sensor2Oku() {
    sistemHataKodu = 10;   // Tekrar ezdi — önceki değer kayboldu
}

int main() {
    sensor1Oku();
    printf("Sensor 1 okundu. Hata kodu: %d\n", sistemHataKodu);
    sensor2Oku();
    printf("Sensor 2 okundu. Hata kodu: %d\n", sistemHataKodu);
    // sistemHataKodu'nun son değeri tahmine dayalı hale gelir.
    return 0;
}
