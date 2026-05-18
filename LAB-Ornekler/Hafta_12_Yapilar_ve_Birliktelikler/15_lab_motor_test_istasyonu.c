#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int rpm;
    float akim;
    float sicaklik;
} Motor_t;

void TestEt(Motor_t *m) {
    printf("Motor %d -> Hız: %d RPM | Akım: %.1f A | Sıcaklık: %.1f C\n", 
           m->id, m->rpm, m->akim, m->sicaklik);
           
    if(m->sicaklik > 80.0) {
        // ANSI kaçış kodlarıyla parlak kırmızı renkte aşırı ısınma uyarısı yazdırıyoruz
        printf("  \033[1;31m⚠️  [ACİL] AŞIRI ISINMA ALGILANDI! Soğutma Fanları Aktif!\033[0m\n");
    }
}

int main() {
    printf("=== Laboratuvar Uygulaması 3: Motor Test İstasyonu ===\n\n");

    int n = 3; // Simüle olarak 3 DC motor test edilecektir
    printf("Dinamik test edilecek motor sayısı: %d\n\n", n);

    // Geliştirme senaryosu gereği dinamik dizi (malloc) kullanımı:
    Motor_t *motorlar = (Motor_t *) malloc(n * sizeof(Motor_t));

    if (motorlar != NULL) {
        // Motor verilerini tanımlıyoruz
        motorlar[0] = (Motor_t){.id = 1, .rpm = 3000, .akim = 1.5, .sicaklik = 45.2};
        motorlar[1] = (Motor_t){.id = 2, .rpm = 2500, .akim = 2.1, .sicaklik = 82.7}; // Aşırı ısınan motor
        motorlar[2] = (Motor_t){.id = 3, .rpm = 2800, .akim = 1.8, .sicaklik = 63.0};

        float toplam_akim = 0.0;
        float toplam_sicaklik = 0.0;

        for(int i = 0; i < n; i++) {
            TestEt(&motorlar[i]);
            toplam_akim += motorlar[i].akim;
            toplam_sicaklik += motorlar[i].sicaklik;
        }

        // Geliştirme senaryosu gereği ortalama değerlerin hesaplanması:
        printf("\n--- Test İstasyonu İstatistikleri ---\n");
        printf("Ortalama Akım     : %.2f A\n", toplam_akim / n);
        printf("Ortalama Sıcaklık : %.2f C\n", toplam_sicaklik / n);

        // Dinamik olarak ayrılmış alanı serbest bırakıyoruz
        free(motorlar);
    } else {
        printf("[HATA] Bellek ayrılamadı!\n");
    }
    
    return 0;
}
