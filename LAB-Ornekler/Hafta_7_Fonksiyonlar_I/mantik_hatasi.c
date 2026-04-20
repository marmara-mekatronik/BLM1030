#include <stdio.h>

// ❌ Yaygın mantık hatası: return sonrası ölü kod
int hesapla(int x) {
    return x * 2;
    x = x + 10;   // Bu satır ASLA çalıştırılmaz (Dead Code)
}

int main() {
    int sonuc = hesapla(5);
    printf("Sonuc: %d\n", sonuc); // 10 döner, x+10 kısmı çalışmaz.
    return 0;
}
