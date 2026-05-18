#include <stdio.h>
#include <stdint.h>

typedef enum {
    EKSEN_HAZIR,
    EKSEN_HAREKETLI,
    EKSEN_LIMIT_ASILDI
} EksenDurumu_t;

typedef struct {
    uint8_t id;
    EksenDurumu_t durum;
} Eksen_t;

int main() {
    printf("=== Laboratuvar Örneği 1: Robotik Kol Eksen Kontrolü ===\n\n");

    // Geliştirme senaryosuna uygun olarak 3 eksenli (X, Y, Z) bir robotik kol dizisi:
    Eksen_t robot_eksenleri[3] = {
        {1, EKSEN_HAZIR},       // X ekseni motoru
        {2, EKSEN_HAREKETLI},   // Y ekseni motoru
        {3, EKSEN_LIMIT_ASILDI} // Z ekseni motoru (limit sensörü aşılmış)
    };
    
    for (int i = 0; i < 3; i++) {
        printf("Eksen ID: %d -> ", robot_eksenleri[i].id);
        
        switch(robot_eksenleri[i].durum) {
            case EKSEN_HAZIR:
                printf("HAZIR (Motor Beklemede)\n");
                break;
            case EKSEN_HAREKETLI:
                printf("HAREKETLİ (Motor Çalışıyor)\n");
                break;
            case EKSEN_LIMIT_ASILDI:
                // Kırmızı renkte uyarı basma
                printf("\033[1;31m⚠️ UYARI: EKSEN LİMİTİ AŞILDI! (ACİL DURUM KAPATMA)\033[0m\n");
                break;
        }
    }
    return 0;
}
