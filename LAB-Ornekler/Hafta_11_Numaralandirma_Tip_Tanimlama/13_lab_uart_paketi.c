#include <stdio.h>
#include <stdint.h>

// Paket yapısı: Başlangıç(1b) + Veri(2b) + Checksum(2b) + Zaman Damgası(4b)
typedef struct {
    uint8_t baslangic_bayti;
    uint16_t sensor_verisi;
    uint16_t hata_kodu;
    uint32_t zaman_damgasi; // Geliştirme senaryosuna göre eklenen üye (4 byte)
} UartPaketi_t;

int main() {
    printf("=== Laboratuvar Örneği 4: UART İletişim Paketi (Bellek Hizalama) ===\n\n");

    UartPaketi_t veri_paketi;
    veri_paketi.baslangic_bayti = 0xFF;
    veri_paketi.sensor_verisi = 1024;
    veri_paketi.hata_kodu = 0;
    veri_paketi.zaman_damgasi = 98765432;
    
    // Toplam veri boyutu normalde 1 + 2 + 2 + 4 = 9 byte'tır.
    // Ancak 32-bit işlemcilerde hizalama (struct padding/alignment) gereği 
    // toplam boyut büyük ihtimalle 12 byte çıkacaktır!
    printf("Teorik Boyut (Üyelerin Toplamı): 9 bayt\n");
    printf("Gerçek Boyut (sizeof): %zu bayt\n\n", sizeof(UartPaketi_t));
    
    printf("--- Üyelerin Bellekteki Boyutları ---\n");
    printf("baslangic_bayti (uint8_t) : %zu bayt\n", sizeof(veri_paketi.baslangic_bayti));
    printf("sensor_verisi (uint16_t)  : %zu bayt\n", sizeof(veri_paketi.sensor_verisi));
    printf("hata_kodu (uint16_t)      : %zu bayt\n", sizeof(veri_paketi.hata_kodu));
    printf("zaman_damgasi (uint32_t)  : %zu bayt\n", sizeof(veri_paketi.zaman_damgasi));
    
    return 0;
}
