#include <stdio.h>

typedef enum {
    GEAR_PARK,
    GEAR_REVERSE,
    GEAR_NEUTRAL,
    GEAR_DRIVE
} Vites_t;

void MotorGucuAyarla(Vites_t mevcut_vites) {
    switch(mevcut_vites) {
        case GEAR_PARK:
        case GEAR_NEUTRAL:
            printf("\n[SİSTEM] Motor gücü 0'a çekildi. Araç hareketsiz.\n");
            break;
        case GEAR_REVERSE:
            printf("\n[SİSTEM] Geri viteste sınırlı hız. 📷 [UYARI] GERİ GÖRÜŞ KAMERASI AKTİF!\n");
            break;
        case GEAR_DRIVE:
            printf("\n[SİSTEM] İleri vites. İleri hareket için güç veriliyor.\n");
            break;
    }
}

int main() {
    int secim;
    
    printf("=== Laboratuvar Örneği 3: Otonom Araç Vites Sistemi ===\n\n");
    printf("--- VİTES SEÇİM MENÜSÜ ---\n");
    printf("0 - PARK\n");
    printf("1 - REVERSE (Geri)\n");
    printf("2 - NEUTRAL (Boş)\n");
    printf("3 - DRIVE (Sürüş)\n");
    printf("---------------------------\n");
    printf("Lütfen vites seçimi yapın (0-3): ");
    
    // Simülasyon gereği kullanıcı girişi yerine doğrudan test amaçlı 1 (Reverse) seçiyoruz.
    // Dilerseniz scanf("%d", &secim); satırını aktif edebilirsiniz.
    secim = 1; 
    printf("%d (Otomatik Test Seçimi)\n", secim);
    
    if (secim >= 0 && secim <= 3) {
        Vites_t secilen_vites = (Vites_t)secim;
        MotorGucuAyarla(secilen_vites);
    } else {
        printf("⚠️ HATA: Geçersiz vites seçimi yapıldı!\n");
    }
    
    return 0;
}
