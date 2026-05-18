#include <stdio.h>
#include <stdbool.h>

typedef struct {
    float x;
    float y;
} Koordinat_t;

typedef struct {
    int rpm;
} Motor_t;

typedef struct {
    Koordinat_t hedef;
    Koordinat_t guncel;
    float yukseklik;
    int pil; // Geliştirme senaryosu kapsamında eklenen pil seviyesi (%)
    Motor_t motorlar[4];
} Drone_t;

void DroneBilgi(Drone_t *d) {
    printf("Drone Bilgileri [Batarya: %%%d] -> ", d->pil);
    if (d->yukseklik > 0.1) {
        printf("DURUM: UÇUYOR (İrtifa: %.1f m)\n", d->yukseklik);
    } else {
        printf("DURUM: İNDİ (İrtifa: 0 m)\n");
    }
    printf("  Hedef Konum  : (%.1f, %.1f)\n", d->hedef.x, d->hedef.y);
    printf("  Güncel Konum : (%.1f, %.1f)\n", d->guncel.x, d->guncel.y);
    for(int i = 0; i < 4; i++) {
        printf("  Motor %d RPM  : %d RPM\n", i+1, d->motorlar[i].rpm);
    }
    printf("\n");
}

// Geliştirme senaryosuna göre koordinat ve pil güncelleme fonksiyonu:
void Guncelle(Drone_t *d) {
    // Adım adım hedefe yaklaşma simülasyonu (X ve Y eksenlerinde hedefe yaklaşır)
    if (d->guncel.x < d->hedef.x) d->guncel.x += 30.0;
    if (d->guncel.y < d->hedef.y) d->guncel.y += 60.0;

    // Hedefe ulaştığında veya yaklaştığında yüksekliği düşürme (iniş mantığı)
    if (d->guncel.x >= d->hedef.x && d->guncel.y >= d->hedef.y) {
        d->guncel.x = d->hedef.x;
        d->guncel.y = d->hedef.y;
        printf("[UÇUŞ KONTROL] Hedef koordinatlara ulaşıldı! İniş başlatılıyor...\n");
        d->yukseklik = 0.0; // İniş yaptı
        for(int i=0; i<4; i++) d->motorlar[i].rpm = 0; // Motorları durdur
    }

    // Havada süzüldükçe pil tüketilir
    d->pil -= 15;
    
    // Pil seviyesi kritik seviyenin altındaysa zorunlu iniş yap
    if (d->pil <= 20 && d->yukseklik > 0.1) {
        printf("\033[1;31m[ACİL İNİŞ] Düşük Batarya (%%%d)! Güvenli iniş yapılıyor...\033[0m\n", d->pil);
        d->yukseklik = 0.0;
        for(int i=0; i<4; i++) d->motorlar[i].rpm = 0; // Motorları durdur
    }
}

int main() {
    printf("=== Laboratuvar Uygulaması 4: Drone Hiyerarşik Yapı ve Uçuş Simülasyonu ===\n\n");

    Drone_t drone = {
        .hedef = {.x = 100.0, .y = 200.0},
        .guncel = {.x = 10.0, .y = 20.0},
        .yukseklik = 50.0,
        .pil = 100, // %100 batarya ile başlıyoruz
        .motorlar = {{3000}, {3000}, {3000}, {3000}}
    };

    DroneBilgi(&drone);

    // Dron hedefe ulaşana veya batarya tükenene kadar döngü çalışır
    int adim = 1;
    while (drone.yukseklik > 0.1 && drone.pil > 0) {
        printf("--- ADIM %d ---\n", adim++);
        Guncelle(&drone);
        DroneBilgi(&drone);
    }
    
    return 0;
}
