#include <stdio.h>
void tamponutemizle() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main() {
    float sicaklik;
    char birim;
    float donusturulmus;
    printf("=== ENDUSTRIYEL SICAKLIK UYARI SISTEMI ===\n\n");

    // Kullanıcıdan sıcaklık ve birim al
    printf("Sicaklik degerini giriniz: ");
    if (scanf("%f", &sicaklik) != 1) {
        printf("Hata: Geçersiz değer girdiniz!\n"); //Kullanıcının sayı yerine harf girmesi engellendi
        return 1;
    }
    tamponutemizle(); //ilk scanf'ten sonra eğer sayı ve harfler birlikte girilirse buffer'da kalanlar ikinci scanf'i baypas ediyordu

    printf("Birimi giriniz (C/F/K): ");
    scanf(" %c", &birim);
    tamponutemizle();

    // Tüm sıcaklıkları Celsius'a çevir
    if (birim == 'C' || birim == 'c') {
        donusturulmus = sicaklik;
        printf("Girilen deger: %.2f °C\n", sicaklik);
    }
    else if (birim == 'F' || birim == 'f') {
        donusturulmus = (sicaklik - 32) * 5 / 9;
        printf("Girilen deger: %.2f °F = %.2f °C\n", sicaklik, donusturulmus);
    }
    else if (birim == 'K' || birim == 'k') {
        donusturulmus = sicaklik - 273.15;
        printf("Girilen deger: %.2f K = %.2f °C\n", sicaklik, donusturulmus);
    }
    else {
        printf("Gecersiz birim! C, F veya K giriniz.\n");
        return 1;  // Programı hata ile sonlandır
    }

    // Sıcaklık uyarı seviyesini belirle (else-if merdiveni)
    printf("\n--- UYARI SEVIYESI ---\n");
    if (donusturulmus < -50) {
        printf("KRITIK UYARI: Aşırı düşük sıcaklık! Sistem donma tehlikesi!\n");
        printf("Acil durum prosedürü başlatılıyor...\n");
    }
    else if (donusturulmus < -20) {
        printf("UYARI: Çok düşük sıcaklık! Isıtıcılar devreye alınmalı.\n");
    }
    else if (donusturulmus < 0) {
        printf("DIKKAT: Sıcaklık donma noktasının altında. Donma riski var.\n");
    }
    else if (donusturulmus < 20) {
        printf("NORMAL: Sıcaklık normal aralıkta.\n");
    }
    else if (donusturulmus < 40) {
        printf("DIKKAT: Sıcaklık yükseliyor. Soğutma sistemini kontrol edin.\n");
    }
    else if (donusturulmus < 60) {
        printf("UYARI: Yüksek sıcaklık! Soğutma kapasitesi zorlanıyor.\n");
    }
    else {
        printf("KRITIK UYARI: Aşırı yüksek sıcaklık! Acil kapatma gerekiyor!\n");
    }

    // Ek öneriler
    if (donusturulmus < 0 || donusturulmus > 40) {
        printf("\nONERI: Sistem güvenliği için operatör bilgilendirilmelidir.\n");
    }
    return 0;
}
