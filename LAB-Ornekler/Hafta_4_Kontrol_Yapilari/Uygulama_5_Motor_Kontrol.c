#include <stdio.h>

int main() {
    // Değişken tanımlamaları
    float sicaklik, akim, gerilim;
    float hiz, referans_hiz = 1500;  // rpm
    int acil_stop = 0;
    char calisma_modu;
    int hata_kodu = 0;
    
    printf("========================================\n");
    printf("   ENDUSTRIYEL MOTOR KONTROL SISTEMI   \n");
    printf("========================================\n\n");
    
    // Sensör verilerini oku (kullanıcıdan simüle)
    printf("Motor sicakligi (C): ");
    scanf("%f", &sicaklik);
    
    printf("Motor akimi (A): ");
    scanf("%f", &akim);
    
    printf("Motor gerilimi (V): ");
    scanf("%f", &gerilim);
    
    printf("Motor hizi (rpm): ");
    scanf("%f", &hiz);
    
    printf("Calisma modu (N:Normal, E:Eko, Y:Yuksek performans): ");
    scanf(" %c", &calisma_modu);
    
    printf("\n--- SISTEM ANALIZI ---\n");
    
    // 1. Acil durum kontrolleri (öncelikli)
    if (sicaklik > 85.0) {
        printf("KRITIK: Motor asiri sicak! (%.1f C)\n", sicaklik);
        acil_stop = 1;
        hata_kodu = 1;
    } else if (akim > 15.0) {
        printf("KRITIK: Asiri akim! (%.1f A)\n", akim);
        acil_stop = 1;
        hata_kodu = 2;
    } else if (gerilim < 180.0 || gerilim > 260.0) {
        printf("KRITIK: Gerilim aralik disi! (%.1f V)\n", gerilim);
        acil_stop = 1;
        hata_kodu = 3;
    }
    
    // Acil stop kontrolü
    if (acil_stop) {
        printf("\n!!! ACIL DURUM: Motor durduruluyor! Hata Kodu: %d !!!\n", hata_kodu);
        printf("Guvenli moda geciliyor...\n");
        return 1;  // Programı sonlandır
    }
    
    // 2. Uyarı seviyeleri (else-if merdiveni)
    printf("\n--- UYARI SEVIYELERI ---\n");
    
    if (sicaklik > 75.0) {
        printf("UYARI: Sicaklik yuksek (%.1f C). Sogutma fanini calistirin.\n", sicaklik);
    } else if (sicaklik > 60.0) {
        printf("DIKKAT: Sicaklik normalin ustunde (%.1f C).\n", sicaklik);
    } else if (sicaklik < 10.0) {
        printf("DIKKAT: Sicaklik dusuk (%.1f C). Isitma gerekebilir.\n", sicaklik);
    } else {
        printf("Sicaklik normal aralikta (%.1f C).\n", sicaklik);
    }
    
    // 3. Çalışma moduna göre hız kontrolü (switch ile)
    printf("\n--- CALISMA MODU ANALIZI ---\n");
    printf("Secilen mod: ");
    
    switch (calisma_modu) {
        case 'N':
        case 'n':
            printf("Normal Mod\n");
            if (hiz < referans_hiz * 0.9) {
                printf("Hiz dusuk (%.0f rpm). Voltaj arttiriliyor...\n", hiz);
            } else if (hiz > referans_hiz * 1.1) {
                printf("Hiz yuksek (%.0f rpm). Voltaj dusuruluyor...\n", hiz);
            } else {
                printf("Hiz normal (%.0f rpm).\n", hiz);
            }
            break;
            
        case 'E':
        case 'e':
            printf("Eko Mod (Enerji tasarrufu)\n");
            if (hiz > referans_hiz * 0.8) {
                printf("Eko mod icin hiz cok yuksek. Hiz dusuruluyor...\n");
            } else {
                printf("Hiz eko mod icin uygun.\n");
            }
            break;
            
        case 'Y':
        case 'y':
            printf("Yuksek Performans Modu\n");
            if (hiz < referans_hiz * 1.2) {
                printf("Hiz artiriliyor (talep: %.0f rpm, mevcut: %.0f rpm)\n", 
                       referans_hiz * 1.2, hiz);
            } else {
                printf("Performans modunda calisiliyor.\n");
            }
            break;
            
        default:
            printf("TANIMSIZ MOD! Varsayilan normal mod kullaniliyor.\n");
    }
    
    // 4. Karmaşık karar yapısı - iç içe if'ler
    printf("\n--- VERIMLILIK ANALIZI ---\n");
    
    float verim = (akim > 0) ? (hiz * gerilim) / (akim * gerilim) * 100 : 0;
    
    if (verim > 85) {
        printf("Verim: %.1f%% - COK IYI\n", verim);
        
        if (calisma_modu == 'E' || calisma_modu == 'e') {
            printf("Eko modda yuksek verim! Tebrikler.\n");
        }
    } else if (verim > 70) {
        printf("Verim: %.1f%% - NORMAL\n", verim);
        
        // İç içe if-else
        if (sicaklik > 70) {
            printf("Verim dusukluğu sicakliktan kaynaklaniyor olabilir.\n");
        } else if (akim > 12) {
            printf("Verim dusukluğu yuksek akimdan kaynaklaniyor.\n");
        } else {
            printf("Verim normal sinirlarda.\n");
        }
    } else {
        printf("Verim: %.1f%% - DUSUK. Bakim gerekli!\n", verim);
        
        // Birden fazla koşulun mantıksal operatörlerle kontrolü
        if (sicaklik > 70 && akim > 12) {
            printf("MULTIPLE SORUN: Asiri sicaklik ve yuksek akim!\n");
        } else if (sicaklik > 70 || akim > 12) {
            printf("Tekil sorun tespit edildi.\n");
        }
    }
    
    // 5. Ternary operatör ile basit kararlar
    printf("\n--- ONERILER ---\n");
    
    char *bakim_durumu = (hiz < referans_hiz * 0.5 || sicaklik > 75) ? 
                          "Acil bakim gerekli" : 
                          (hiz < referans_hiz * 0.8) ? "Rutin bakim zamani" : 
                          "Bakim gereksiz";
    printf("Bakim durumu: %s\n", bakim_durumu);
    
    float onerilen_akim = (calisma_modu == 'Y' || calisma_modu == 'y') ? 12.0 : 
                          (calisma_modu == 'E' || calisma_modu == 'e') ? 8.0 : 10.0;
    printf("Onerilen maksimum akim: %.1f A\n", onerilen_akim);
    
    if (akim > onerilen_akim) {
        printf("UYARI: Akim onerilen degerin ustunde!\n");
    }
    
    printf("\n--- SISTEM DURUMU: NORMAL ---\n");
    
    return 0;
}
