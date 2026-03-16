#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2;
    int sonuc;
    
    printf("=== OPERATOR ONCELIGI TESTI ===\n");
    
    // Test 1: Çarpma önce, toplama sonra
    sonuc = a + b * c;  // 5 + (3*2) = 5 + 6 = 11
    printf("%d + %d * %d = %d\n", a, b, c, sonuc);
    
    // Test 2: Parantez önceliği değiştirir
    sonuc = (a + b) * c;  // (5+3)*2 = 8*2 = 16
    printf("(%d + %d) * %d = %d\n", a, b, c, sonuc);
    
    // Test 3: Soldan sağa birleşme (ayrı işlemler)
    sonuc = a - b - c;  // ((5-3)-2) = 2-2 = 0
    printf("%d - %d - %d = %d\n", a, b, c, sonuc);
    
    // Test 4: Karışık mantıksal ve ilişkisel operatörler
    int x = 10, y = 5, z = 8;
    int mantiksal = (x > y) && (y < z) || (x == z);
    // Önce: (x>y) doğru(1), (y<z) doğru(1) -> 1 && 1 = 1
    // Sonra: (x==z) yanlış(0) -> 1 || 0 = 1
    printf("(x>y) && (y<z) || (x==z) = %d\n", mantiksal);
    
    return 0;
}
