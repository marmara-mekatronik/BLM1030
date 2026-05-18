#include <stdio.h>

typedef unsigned char byte;
typedef float mesafe_t;

int main() {
    byte piksel_degeri = 255;  // Aslında unsigned char
    mesafe_t lazer_olcum = 12.5; // Aslında float
    
    printf("=== typedef Giriş Örneği ===\n");
    printf("Piksel: %d (Bellekte %zu byte)\n", piksel_degeri, sizeof(piksel_degeri));
    printf("Mesafe: %.1f m (Bellekte %zu byte)\n", lazer_olcum, sizeof(lazer_olcum));
    
    return 0;
}
