#include <stdio.h>

typedef enum {
    SENSOR_OK,
    SENSOR_BAGLANTI_HATASI,
    SENSOR_VERI_HATASI
} SensorDurum_t;

typedef struct {
    float sicaklik;
    float nem;
    SensorDurum_t durum;
} SensorVerisi_t;

int main() {
    printf("=== Laboratuvar Örneği 2: Çoklu Sensör Durum Kontrolü ===\n\n");

    // Geliştirme senaryosuna göre 3 farklı sensörün durumunu kontrol eden dizi:
    SensorVerisi_t sensorler[3] = {
        {24.5, 45.2, SENSOR_OK},
        {0.0, 0.0, SENSOR_BAGLANTI_HATASI}, // Bağlantı hatası var
        {99.9, 10.0, SENSOR_VERI_HATASI}    // Hatalı veri okunmuş
    };
    
    for (int i = 0; i < 3; i++) {
        printf("[Sensör %d] Sıcaklık: %.1f C | Nem: %.1f%% -> Durum: ", 
               i+1, sensorler[i].sicaklik, sensorler[i].nem);
               
        if (sensorler[i].durum == SENSOR_OK) {
            printf("SENSOR OK\n");
        } else if (sensorler[i].durum == SENSOR_BAGLANTI_HATASI) {
            // ANSI kaçış kodlarıyla kırmızı renkte yazdırma
            printf("\033[1;31m⚠️ [HATA] SENSÖR BAĞLANTI HATASI!\033[0m\n");
        } else if (sensorler[i].durum == SENSOR_VERI_HATASI) {
            // ANSI kaçış kodlarıyla sarı renkte yazdırma
            printf("\033[1;33m⚠️ [UYARI] HATALI VERİ OKUNDU!\033[0m\n");
        }
    }
    return 0;
}
