#include <stdio.h>

struct StatusRegister {
    unsigned int error_flag : 1;  // 1 bit
    unsigned int busy_flag  : 1;  // 1 bit
    unsigned int mode       : 3;  // 3 bit (0-7 arası değer saklayabilir)
    unsigned int reserved   : 3;  // 3 bit boşluk (toplam 8 bit = 1 byte)
};

int main() {
    struct StatusRegister motor;

    printf("=== Bit Sahaları (Bitfields) ve Donanım Register Erişimi ===\n\n");
    printf("StatusRegister Boyutu: %zu bayt (Sadece 1 byte/8 bit yer kaplar!)\n\n", sizeof(motor));

    motor.error_flag = 0; // Hata yok (0)
    motor.busy_flag = 1;  // Sistem meşgul/aktif (1)
    motor.mode = 5;       // 5 modunu seç (3 bit olduğu için 0-7 arası geçerli)

    if (motor.busy_flag) {
        printf("[DURUM] Motor aktif yönde çalışıyor.\n");
        printf("Çalışma Modu: %d\n", motor.mode);
        printf("Hata Durumu : %s\n\n", motor.error_flag ? "VAR" : "YOK");
    }

    // ⚠️ TAŞMA (OVERFLOW) UYARISI:
    printf("[TAŞMA SİMÜLASYON] 3 bitlik alana 9 atamaya çalışılırsa:\n");
    // 9 = binary 1001'dir. 3 bite sadece son 3 bit (001 = 1) sığar.
    motor.mode = 9; 
    
    printf("Yeni Mod Değeri: %d (Veri kayboldu!)\n", motor.mode);
    
    return 0;
}
