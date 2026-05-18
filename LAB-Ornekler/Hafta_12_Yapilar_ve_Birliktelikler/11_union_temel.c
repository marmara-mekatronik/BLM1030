#include <stdio.h>

typedef union {
    int sayi;
    char karakter;
} Kolay_t;

int main() {
    Kolay_t veri;
    
    printf("=== Union (Birliktelik) Bellek Paylaşımı ===\n\n");
    printf("union Kolay_t Boyutu: %zu bayt (En büyük eleman olan int boyutu)\n\n", sizeof(Kolay_t));
    
    veri.sayi = 65; // Tam sayı ataması yapıyoruz
    printf("[ATAMA] veri.sayi = 65\n");
    
    // Bellekte aynı kutuyu paylaştıkları için:
    printf("veri.sayi okunan     : %d\n", veri.sayi);        // Çıktı: 65
    printf("veri.karakter okunan : %c  (ASCII 65 = 'A' karakteridir!)\n\n", veri.karakter);  // Çıktı: A
    
    // Değişiklik simülasyonu
    veri.karakter = 'B';
    printf("[ATAMA] veri.karakter = 'B' (ASCII 66)\n");
    printf("veri.sayi okunan     : %d (Aynı bellek hücresi güncellendi!)\n", veri.sayi);
    
    return 0;
}
