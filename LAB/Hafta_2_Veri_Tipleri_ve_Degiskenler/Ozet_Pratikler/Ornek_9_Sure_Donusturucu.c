#include <stdio.h>

int main() {
    int toplamSaniye = 4000;
    int saat = toplamSaniye / 3600;
    int dakika = (toplamSaniye % 3600) / 60;
    int saniye = (toplamSaniye % 3600) % 60;
    printf("%d Saat, %d Dakika, %d Saniye\n", saat, dakika, saniye);
    return 0;
}
