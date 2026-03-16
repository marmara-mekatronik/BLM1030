#include <stdio.h>

int main() {
    int x = 10, y = 3;
    
    printf("Toplam: %d\n", x + y);        // 13
    printf("Fark:   %d\n", x - y);        // 7
    printf("Çarpım: %d\n", x * y);        // 30
    printf("Bölüm:  %d\n", x / y);        // 3 (Tamsayı bölmesi!)
    printf("Kalan:  %d\n", x % y);        // 1
    printf("Negatif x: %d\n", -x);        // -10
    
    return 0;
}
