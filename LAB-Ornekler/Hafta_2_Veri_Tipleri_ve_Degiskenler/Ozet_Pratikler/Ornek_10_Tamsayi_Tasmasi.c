#include <stdio.h>

int main() {
    short limitDeger = 32767;
    printf("Limit oncesi: %d\n", limitDeger);
    limitDeger = limitDeger + 5; // Limiti kastan 5 sayi asiyoruz
    // Deger eksi (-32764) yonune tasip (overflow) hasar alacaktir
    printf("Limit asilirsa ne olur?: %d\n", limitDeger);
    return 0;
}
