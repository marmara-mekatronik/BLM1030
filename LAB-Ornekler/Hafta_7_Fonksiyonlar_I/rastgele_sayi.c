#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));                     // Rastgele sayı üretecini başlat
    int sensor_sim = rand() % 1024;        // 0-1023 arası rastgele ADC değeri
    printf("Simulasyon ADC: %d\n", sensor_sim);
    printf("Mutlak fark: %d\n", abs(sensor_sim - 512));
    return 0;
}
