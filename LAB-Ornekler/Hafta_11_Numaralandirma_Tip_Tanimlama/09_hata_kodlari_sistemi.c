#include <stdio.h>
#include <stdbool.h>

typedef enum {
    SYS_OK = 0,
    SYS_ERR_TIMEOUT = -1,
    SYS_ERR_NOT_FOUND = -2,
    SYS_ERR_I2C_BUS = -3
} SystemStatus_t;

SystemStatus_t Sensor_Baslat(bool baglanti_koptu) {
    if (baglanti_koptu) {
        return SYS_ERR_TIMEOUT;
    }
    return SYS_OK;
}

int main() {
    printf("=== Fonksiyon Hata Kodları Kontrolü ===\n");

    // 1. Simülasyon: Bağlantı hatası durumunda
    SystemStatus_t status1 = Sensor_Baslat(true);
    if (status1 != SYS_OK) {
        printf("[Hata] Sensör başlatılamadı! Hata Kodu: %d (Zaman Aşımı)\n", status1);
    }
    
    // 2. Simülasyon: Başarılı bağlantı durumunda
    SystemStatus_t status2 = Sensor_Baslat(false);
    if (status2 == SYS_OK) {
        printf("[Başarılı] Sensör başarıyla başlatıldı: OK (%d)\n", status2);
    }
    
    return 0;
}
