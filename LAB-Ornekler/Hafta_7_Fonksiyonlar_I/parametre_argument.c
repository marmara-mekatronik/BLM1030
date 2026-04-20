#include <stdio.h>

// x ve y → PARAMETRE (fonksiyon tanımında)
int topla(int x, int y) {
    return x + y;
}

int main() {
    int sayi1 = 5, sayi2 = 10;
    
    // sayi1 ve sayi2 → ARGÜMAN (çağrı anında gönderilen değerler)
    int sonuc = topla(sayi1, sayi2); 
    printf("Sonuc: %d\n", sonuc);   // 15
    return 0;
}
