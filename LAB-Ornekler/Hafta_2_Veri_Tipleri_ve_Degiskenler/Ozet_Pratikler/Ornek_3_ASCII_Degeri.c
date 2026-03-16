#include <stdio.h>

int main() {
    char harf;
    printf("Bir harf giriniz: ");
    scanf(" %c", &harf);
    printf("'%c' karakterinin ASCII RAM sayisi: %d\n", harf, harf);
    return 0;
}
