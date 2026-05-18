#include <stdio.h>

enum Gunler {
    PAZARTESI,
    SALI,
    CARSAMBA,
    PERSEMBE,
    CUMA,
    CUMARTESI,
    PAZAR
};

int main() {
    enum Gunler bugun = CARSAMBA;
    printf("Bugünün enum degeri (CARSAMBA): %d\n", bugun); // Çıktı: 2
    return 0;
}
