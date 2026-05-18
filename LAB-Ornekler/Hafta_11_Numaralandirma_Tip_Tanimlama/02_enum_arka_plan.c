#include <stdio.h>

enum Renkler {
    KIRMIZI, // 0
    YESIL,   // 1
    MAVI     // 2
};

int main() {
    printf("KIRMIZI: %d\n", KIRMIZI); // Çıktı: 0
    printf("YESIL: %d\n", YESIL);     // Çıktı: 1
    printf("MAVI: %d\n", MAVI);       // Çıktı: 2
    return 0;
}
