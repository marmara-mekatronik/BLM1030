#include <stdio.h>

typedef struct {
    int motor_id;
    int rpm;
    float voltaj;
    float akim;
} Motor_t;

// Referans ile çağrı (ADRES GÖNDERİLİR) ✅
void Motor_Durdur(Motor_t *m) {
    m->rpm = 0; // -> operatörü (ok operatörü) ile işaretçi üzerinden atama
}

int main() {
    Motor_t motor1 = {.motor_id = 1, .rpm = 2500, .voltaj = 12.0, .akim = 1.5};
    Motor_t *ptr = &motor1;
    
    printf("=== Yapı İşaretçileri ve Ok (->) Operatörü ===\n\n");
    
    // İşaretçi üzerinden üye erişimleri
    printf("Motor ID      : %d (ptr->motor_id)\n", ptr->motor_id);
    printf("Güncel Hız    : %d RPM (ptr->rpm)\n", ptr->rpm);
    
    // Fonksiyona adres gönderme
    Motor_Durdur(&motor1); 
    printf("\n[BİLGİ] Motor_Durdur(&motor1) çağrıldı.\n");
    
    printf("Yeni Motor Hızı: %d RPM\n", motor1.rpm);
    
    return 0;
}
