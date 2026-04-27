#include <stdio.h>

int main() {
    int motorPWM = 180;

    printf("Degeri nedir (Veri)  : %d\n", motorPWM);        // Ekrana 180 yazar
    printf("Nerede yasiyor (Adres): %p\n", &motorPWM);      // Ekrana örn: 0x7ffeefbff5ac yazar

    return 0;
}
