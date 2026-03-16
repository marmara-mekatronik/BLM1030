#include <stdio.h>

int main() {
    const unsigned int BULUNAN_YIL = 2026;
    unsigned int dogumYili;
    printf("Dogum yiliniz: ");
    scanf("%u", &dogumYili);
    printf("Yasiniz: %u\n", BULUNAN_YIL - dogumYili);
    return 0;
}
