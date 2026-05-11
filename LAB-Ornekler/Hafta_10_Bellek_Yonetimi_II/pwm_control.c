#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Motor PWM Kontrol Dizisi (calloc Örneği)
 * 
 * Mekatronikte calloc() kullanımı: Başlangıç değerlerinin 
 * sıfır (0) olmasının kritik olduğu durumlar.
 */

int main() {
    int motor_sayisi = 6; // Örn: 6 eksenli bir robot kolu
    
    // calloc() tüm ayrılan alanı 0 (sıfır) ile doldurur.
    // Mekatronik Uygulaması: Motorlar başlangıçta "durur" (PWM=0) olmalıdır.
    int *pwm_degerler = (int*) calloc(motor_sayisi, sizeof(int));

    if (pwm_degerler == NULL) {
        printf("Hata: Bellek ayiralmadi!\n");
        return 1;
    }

    printf("--- Motor Baslangic Durumlari (PWM) ---\n");
    for (int i = 0; i < motor_sayisi; i++) {
        // Hepsinin 0 olduğunu doğrula
        printf("Motor %d PWM Degeri: %d\n", i + 1, pwm_degerler[i]);
    }

    // PWM değerlerini güncelle
    pwm_degerler[0] = 128; // 1. Motor %50 güç
    pwm_degerler[5] = 255; // 6. Motor %100 güç

    printf("\nGuncel Motor Durumlari:\n");
    for (int i = 0; i < motor_sayisi; i++) {
        printf("Motor %d PWM: %d\n", i + 1, pwm_degerler[i]);
    }

    free(pwm_degerler);
    pwm_degerler = NULL;
    return 0;
}
