#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t   sicaklik = -15;       // Kesinlikle 8 bit işaretli (1 byte)
    uint8_t  pwm_degeri = 180;     // Kesinlikle 8 bit işaretsiz (1 byte, 0-255)
    int16_t  ivme_x = 4250;        // Kesinlikle 16 bit işaretli (2 byte)
    uint32_t zaman_milis = 864000; // Kesinlikle 32 bit işaretsiz (4 byte)
    
    printf("=== stdint.h Sabit Boyutlu Tipler ===\n");
    printf("Sicaklik : %d C (Boyut: %zu byte)\n", sicaklik, sizeof(sicaklik));
    printf("PWM      : %d   (Boyut: %zu byte)\n", pwm_degeri, sizeof(pwm_degeri));
    printf("Ivme X   : %d   (Boyut: %zu byte)\n", ivme_x, sizeof(ivme_x));
    printf("Zaman    : %u ms (Boyut: %zu byte)\n", zaman_milis, sizeof(zaman_milis));
    
    return 0;
}
