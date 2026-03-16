#include <stdio.h>

int main() {
    // PID kontrolör katsayı hesaplama simülasyonu
    double Kp = 2.5, Ki = 0.1, Kd = 0.05;
    double oran = 0.0;
    int secim;
    double hata = 10.5, onceki_hata = 8.2, integral = 15.3;
    double P, I, D, PID_cikis;
    
    printf("========================================\n");
    printf("   PID KONTROLOR KATSAYI HESAPLAMA     \n");
    printf("========================================\n\n");
    
    printf("Mevcut PID katsayıları:\n");
    printf("Kp = %.2f, Ki = %.2f, Kd = %.2f\n\n", Kp, Ki, Kd);
    
    printf("Mevcut hata değerleri:\n");
    printf("Hata = %.2f, Önceki Hata = %.2f, İntegral = %.2f\n\n", hata, onceki_hata, integral);
    
    // Kullanıcıya seçenekler sun
    printf("İşlem seçin:\n");
    printf("1 - Oransal (P) hesapla\n");
    printf("2 - İntegral (I) hesapla\n");
    printf("3 - Türev (D) hesapla\n");
    printf("4 - Tüm PID çıkışını hesapla\n");
    printf("Seçiminiz (1-4): ");
    scanf("%d", &secim);
    
    // İşlem seçimine göre hesaplama
    if (secim == 1) {
        P = Kp * hata;
        printf("\nOransal (P) çıkışı: Kp * hata = %.2f * %.2f = %.2f\n", Kp, hata, P);
    }
    else if (secim == 2) {
        I = Ki * integral;
        printf("\nİntegral (I) çıkışı: Ki * integral = %.2f * %.2f = %.2f\n", Ki, integral, I);
    }
    else if (secim == 3) {
        double hata_farki = hata - onceki_hata;
        D = Kd * hata_farki;
        printf("\nTürev (D) çıkışı: Kd * (hata - önceki_hata) = %.2f * (%.2f - %.2f) = %.2f\n", 
               Kd, hata, onceki_hata, D);
    }
    else if (secim == 4) {
        P = Kp * hata;
        I = Ki * integral;
        double hata_farki = hata - onceki_hata;
        D = Kd * hata_farki;
        PID_cikis = P + I + D;
        
        printf("\n=== PID ÇIKIŞ HESABI ===\n");
        printf("P = Kp * hata          = %.2f * %.2f = %.2f\n", Kp, hata, P);
        printf("I = Ki * integral      = %.2f * %.2f = %.2f\n", Ki, integral, I);
        printf("D = Kd * (hata - önceki) = %.2f * (%.2f - %.2f) = %.2f\n", Kd, hata, onceki_hata, D);
        printf("------------------------------------------------\n");
        printf("PID Çıkış = P + I + D  = %.2f + %.2f + %.2f = %.2f\n", P, I, D, PID_cikis);
        
        // Mod operatörü kullanarak periyodik kontrol
        int iterasyon = 0;
        printf("\nPID çıkışının periyodik kontrolü:\n");
        for (iterasyon = 1; iterasyon <= 10; iterasyon++) {
            if (iterasyon % 3 == 0) {  // Her 3 iterasyonda bir
                printf("Iterasyon %d: PID çıkışı = %.2f (KONTROL ZAMANI)\n", iterasyon, PID_cikis);
            } else {
                printf("Iterasyon %d: PID çıkışı = %.2f\n", iterasyon, PID_cikis);
            }
        }
    }
    else {
        printf("Geçersiz seçim!\n");
    }
    
    // Operatör önceliği gösterimi
    printf("\n=== OPERATOR ONCELIGI NOTU ===\n");
    printf("PID hesabında: P + I + D = P + (I + D) değil, (P + I) + D (soldan sağa)\n");
    printf("Ancak toplama işlemi birleşmeli olduğu için sonuç aynıdır.\n");
    
    return 0;
}
