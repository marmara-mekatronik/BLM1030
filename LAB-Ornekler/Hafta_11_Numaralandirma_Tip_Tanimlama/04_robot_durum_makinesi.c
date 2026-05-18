#include <stdio.h>

enum RobotDurumu {
    IDLE,           // Beklemede (0)
    MOVING,         // Hareket Halinde (1)
    CHARGING,       // Şarj Oluyor (2)
    EMERGENCY_STOP  // Acil Durum (3)
};

int main() {
    enum RobotDurumu durum = MOVING;
    
    printf("=== Robot Durum Makinesi ===\n");
    switch(durum) {
        case IDLE:
            printf("🟡 Robot bekliyor.\n");
            break;
        case MOVING:
            printf("🟢 Robot hareket halinde.\n");
            break;
        case CHARGING:
            printf("🔵 Robot sarj ediliyor.\n");
            break;
        case EMERGENCY_STOP:
            printf("🔴 ACIL DURUM! Motorlar durduruldu.\n");
            break;
    }
    
    // Sensör engeli algıladı simülasyonu
    printf("\n[SİSMÜLASYON] Sensör engel algıladı!\n");
    durum = EMERGENCY_STOP;
    
    if (durum == EMERGENCY_STOP) {
        printf("🔴 Yeni Durum: ACIL DURUM! Motor gücü kesildi.\n");
    }
    
    return 0;
}
