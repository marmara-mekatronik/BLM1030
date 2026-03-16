#include <stdio.h>

int main() {
    // Motor sıcaklığını kontrol eden bir program
    float motorSicakligi = 0.0;
    const float maxSicaklik = 100.0; // Maksimum izin verilen sıcaklık
    const float sogutmaHizi = 5.0;  // Soğutma hızı
    const float isinmaHizi = 7.0;   // Isınma hızı

    printf("Motor sıcaklık kontrol sistemi başlatılıyor...\n");

    while (1) { // Sonsuz döngü
        printf("Mevcut motor sıcaklığı: %.2f°C\n", motorSicakligi);

        if (motorSicakligi >= maxSicaklik) {
            printf("UYARI: Motor aşırı ısındı! Soğutma sistemi devrede.\n");
            motorSicakligi -= sogutmaHizi; // Soğutma işlemi
        } else {
            printf("Motor normal çalışıyor. Isınma devam ediyor.\n");
            motorSicakligi += isinmaHizi; // Isınma işlemi
        }

        // Kullanıcıdan çıkış kontrolü
        char devam;
        printf("Devam etmek istiyor musunuz? (e/h): ");
        scanf(" %c", &devam);
        if (devam == 'h' || devam == 'H') {
            printf("Sistem kapatılıyor...\n");
            break;
        }
    }

    return 0;
}
