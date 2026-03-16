#include <stdio.h>

int main() {
    int sayi;
    for (sayi = 5; sayi < 15; sayi = sayi + 1) {
        if (sayi == 8)
            break;
        printf("break döngüsünde sayinin degeri : %d\n", sayi);
    }
    for (sayi = 5; sayi < 15; sayi = sayi + 1) {
        if (sayi == 8)
            continue;
        printf("continue döngüsünde, sayi degeri: %d\n", sayi);
    }
    return 0;
}