#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Koordinat_t;

typedef struct {
    float sicaklik;
    float nem;
} SensorVeri_t;

// 1. Yöntem: Değer ile Döndürme (Struct by Value)
// Tüm struct içeriği çağrılan yere kopyalanır. Küçük struct'lar için güvenlidir.
Koordinat_t Koordinat_Uret(int a, int b) {
    Koordinat_t yeni = {a, b};
    return yeni; 
}

// 2. Yöntem: Pointer (Adres) ile Döndürme (Struct by Reference - Heap üzerinden) ✅
// Sadece 8 baytlık adres kopyalanır. Büyük struct'lar için çok hızlıdır.
SensorVeri_t* Sensor_Oku(float sicaklik, float nem) {
    SensorVeri_t *s = (SensorVeri_t *) malloc(sizeof(SensorVeri_t));
    if (s == NULL) return NULL;
    
    s->sicaklik = sicaklik;
    s->nem = nem;
    return s; // Dinamik bellek adresi döndürülür
}

int main() {
    printf("=== Fonksiyonlardan Yapı (Struct) Döndürme Yöntemleri ===\n\n");

    // 1. Değer ile döndürme testi
    Koordinat_t nokta = Koordinat_Uret(5, 10);
    printf("Koordinat (Value)   : (%d, %d)\n", nokta.x, nokta.y);

    // 2. Pointer (Adres) ile döndürme testi
    SensorVeri_t *v = Sensor_Oku(25.5, 60.0);
    if (v != NULL) {
        printf("Sensör Verisi (Ref) : Sıcaklık: %.1f C, Nem: %.1f%%\n", v->sicaklik, v->nem);
        
        // İşimiz bitince dinamik belleği serbest bırakmalıyız!
        free(v); 
        printf("[BİLGİ] Dinamik alan serbest bırakıldı.\n");
    } else {
        printf("[HATA] Bellek ayrılamadı!\n");
    }
    
    return 0;
}
