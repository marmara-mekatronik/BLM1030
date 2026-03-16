//Motor sıcaklığına göre devir düşürme (switch-case ile).
#include <stdio.h>

int main() {
    float sicaklik;
    int devir, kategori;

    printf("Sicaklik degerini girin (C°): ");
    scanf("%f", &sicaklik);

    printf("Motorun şuanki devrini giriniz: ");
    scanf("%d", &devir);

    // Sıcaklık kategorisini belirleme
    if (sicaklik > 50.0) {
        kategori = 1; // Yüksek sıcaklık
    } else if (sicaklik >= 20.0 && sicaklik <= 50.0) {
        kategori = 2; // Normal sıcaklık
    } else {
        kategori = 3; // Düşük sıcaklık
    }

    // Switch-case ile kontrol
    switch (kategori) {
        case 1:
            printf("Sicaklik cok yuksek motor yavaşlatıliyir.\n");
            devir = devir * 0.8;
            printf("Motorun deviri düşürülüyor. Devir= %d\n", devir);
            break;
        case 2:
            printf("Sicaklik normal. Motor çalışıyor.\n");
            printf("Motorun deviri sabit. Devir= %d\n", devir);
            break;
        case 3:
            printf("Sicaklik cok dusuk motor bekleme moduna alınıyor.\n");
            devir = 0;
            printf("Motorun deviri düşüyor. Devir= %d\n", devir);
            break;
        default:
            printf("Hatalı kategori!\n");
            break;
    }

    return 0;
}
