#include <stdio.h>

void motorAciAyarla(int aci) {
    // Güvenlik kontrolü (Guard clause)
    if (aci < 0 || aci > 180) {
        printf("HATA: Servo motor 0-180 derece araliginda calisir!\n");
        return;   // Geçersiz girdi — fonksiyondan derhal çık
    }
    
    // Bu noktaya yalnızca geçerli açı değerleriyle ulaşılır
    printf("Servo motor %d dereceye konumlandiriliyor...\n", aci);
}

int main() {
    motorAciAyarla(90);    // Geçerli — çalışır
    motorAciAyarla(200);   // Geçersiz — uyarı verir ve çıkar
    motorAciAyarla(-10);   // Geçersiz — uyarı verir ve çıkar
    return 0;
}
