#include <stdio.h>

enum SensorPini {
    SENSOR_1 = 10,
    SENSOR_2,       // 11
    SENSOR_3,       // 12
    OZEL_SENSOR = 20,
    SENSOR_4,       // 21
    SENSOR_5        // 22
};

enum HataKodlari {
    BASARILI = 0,
    HATA_SENSOR = -1,
    HATA_MOTOR = -2,
    HATA_BAGLANTI = -3
};

enum BaudRates {
    BAUD_9600 = 9600,
    BAUD_115200 = 115200
};

int main() {
    printf("--- Sensor Pin Numaralari (Manuel/Artan) ---\n");
    printf("SENSOR_1: %d\n", SENSOR_1);
    printf("SENSOR_2: %d\n", SENSOR_2);
    printf("SENSOR_3: %d\n", SENSOR_3);
    printf("OZEL_SENSOR: %d\n", OZEL_SENSOR);
    printf("SENSOR_4: %d\n", SENSOR_4);
    printf("SENSOR_5: %d\n", SENSOR_5);

    printf("\n--- Hata Kodlari ---\n");
    printf("BASARILI: %d\n", BASARILI);
    printf("HATA_SENSOR: %d\n", HATA_SENSOR);
    printf("HATA_BAGLANTI: %d\n", HATA_BAGLANTI);

    printf("\n--- Baud Rate Degerleri ---\n");
    printf("BAUD_115200: %d\n", BAUD_115200);
    return 0;
}
