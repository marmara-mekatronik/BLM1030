#include <stdio.h>

void motorSur() {
    float hiz = 10.5;    // motorSur kapsamında
    printf("Motor Hizi: %.1f\n", hiz);
}

void fanKontrol() {
    float hiz = 80.0;    // fanKontrol kapsamında — farklı bir değişken
    printf("Fan Hizi: %.1f\n", hiz);
}

int main() {
    motorSur();      // 10.5 yazdırır
    fanKontrol();    // 80.0 yazdırır
    return 0;
}
