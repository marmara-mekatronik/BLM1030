#include <stdio.h>

// İşlem fonksiyonları
int topla(int a, int b) {
    return a + b;
}

int cikar(int a, int b) {
    return a - b;
}

int carp(int a, int b) {
    return a * b;
}

int bol(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Bölme işlemi yapılamaz. Bölünen sayı sıfır olamaz.\n");
        return 0;
    }
}

int main() {
    // Fonksiyon pointer'ları tanımlama
    int (*fonksiyonlar[])(int, int) = {topla, cikar, carp, bol};

    int a = 12, b = 4;
    char *islem_adlari[] = {"Toplama", "Çıkarma", "Çarpma", "Bölme"};

    for (int i = 0; i < 4; i++) {
        printf("%s işlemi sonucu: %d\n", islem_adlari[i], (*fonksiyonlar[i])(a, b));
    }

    return 0;
}
