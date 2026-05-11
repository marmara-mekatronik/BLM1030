#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Laboratuvar 1: Dinamik Sensör Dizisi
 * 
 * Bu program kullanıcıdan kaç adet sensör verisi toplanacağını alır,
 * bu miktar kadar belleği dinamik olarak ayırır, rastgele değerler atar,
 * ortalamayı hesaplar ve belleği iade eder.
 */

int main() {
    int n;
    printf("Sensor sayisi giriniz: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Gecersiz sayi!\n");
        return 1;
    }

    // Dinamik bellek ayırma (malloc)
    float *sicakliklar = (float*) malloc(n * sizeof(float));
    
    // NULL kontrolü (Hayati öneme sahip!)
    if (sicakliklar == NULL) {
        fprintf(stderr, "Hata: Bellek ayirma basarisiz!\n");
        return 1;
    }

    // Rastgele veri üretimi
    srand(time(NULL));
    float toplam = 0;
    for (int i = 0; i < n; i++) {
        sicakliklar[i] = (rand() % 500) / 10.0; // 0.0 - 50.0 arası
        printf("Sensor %d: %.2f C\n", i + 1, sicakliklar[i]);
        toplam += sicakliklar[i];
    }

    printf("\nToplam Sensor Sayisi: %d\n", n);
    printf("Ortalama Sicaklik: %.2f C\n", toplam / n);

    // Belleği sisteme iade etme
    free(sicakliklar);
    sicakliklar = NULL; // Dangling pointer önlemi

    return 0;
}
