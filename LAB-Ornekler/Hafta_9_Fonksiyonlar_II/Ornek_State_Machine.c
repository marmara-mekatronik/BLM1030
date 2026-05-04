#include <stdio.h>

// Durum fonksiyonları
void durumBekle()   { printf(">> Bekleme modunda...\n"); }
void durumTara()    { printf(">> Ortam taraniyor...\n"); }
void durumHareket() { printf(">> Hedefe hareket ediliyor...\n"); }
void durumDur()     { printf(">> Acil durak!\n"); }

int main() {
    // Fonksiyon işaretçi dizisi — durumları indeksleme
    void (*durumlar[])() = { durumBekle, durumTara, durumHareket, durumDur };
    
    int senaryo[] = {0, 1, 2, 1, 3};  // Durum geçiş sırası
    int adimSayisi = 5;
    
    for (int i = 0; i < adimSayisi; i++) {
        durumlar[senaryo[i]]();   // İndeks ile doğrudan fonksiyon çağrısı
    }
    return 0;
}
