#include <stdio.h>

typedef union {
    float sicaklik;
    int tam_sayi; // Geliştirme senaryosu kapsamında eklenen yeni integer üye
    unsigned char baytlar[4];
} SensorPaketi_t;

int main() {
    printf("=== Laboratuvar Uygulaması 2: IMU Veri Ayrıştırma (Union) ===\n\n");

    SensorPaketi_t p;
    
    // UART'tan gelen baytlar (örnek: 25.0 C)
    // Little-endian byte sıralaması
    p.baytlar[0] = 0x00;
    p.baytlar[1] = 0x00;
    p.baytlar[2] = 0x20;
    p.baytlar[3] = 0x41;
    
    printf("1. Float olarak okuma  : %.2f C\n", p.sicaklik);
    printf("2. Integer olarak okuma: %d (0x41C80000 hex değerinin tamsayı karşılığı)\n", p.tam_sayi);
    printf("3. Baytlar olarak okuma: 0x%02X %02X %02X %02X (Ortak bellek hücreleri)\n", 
           p.baytlar[3], p.baytlar[2], p.baytlar[1], p.baytlar[0]);
    
    return 0;
}
