#include <stdio.h>

typedef struct {
    int id;
    float sicaklik;
} Sensor_t; // _t soneki (suffix) 'type' anlamına gelir

int main() {
    // Artık 'struct' anahtar kelimesine gerek yok
    Sensor_t s1 = {5, 30.2};
    Sensor_t s2;

    // Yapıların birbirine atanması (Shallow Copy)
    s2 = s1; // s1'in tüm üyeleri s2'ye kopyalandı!

    printf("S1 ID: %d, Sıcaklık: %.1f C\n", s1.id, s1.sicaklik);
    printf("S2 ID: %d, Sıcaklık: %.1f C (Atama Sonrası)\n", s2.id, s2.sicaklik);

    return 0;
}
