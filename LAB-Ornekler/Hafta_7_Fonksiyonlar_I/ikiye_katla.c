#include <stdio.h>

void ikiyeKatla(int sayi) {
    sayi = sayi * 2;  // Yalnızca kopya üzerinde işlem yapılır
    printf("Fonksiyon icinde: %d\n", sayi);  // 20
}

int main() {
    int x = 10;
    ikiyeKatla(x);
    printf("main icinde: %d\n", x);  // 10 — Orijinal değer değişmedi
    return 0;
}
