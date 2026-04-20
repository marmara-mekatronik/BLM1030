#include <stdio.h>

// Parametresiz ve değer döndürmeyen bir fonksiyon
void acilDurumDurdur(void) {
    printf("!!! TEHLIKE !!!\n");
    printf("Tum motor gucleri kesildi!\n");
    // Motor_Role_Kapat();  // Donanım komutu
}

int main() {
    float mesafe = 5.0;  // cm
    
    if (mesafe < 10.0) {
        acilDurumDurdur();  // Fonksiyon çağrısı
    }
    
    return 0;
}
