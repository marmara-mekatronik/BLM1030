#include <stdio.h>
#include <math.h>

int main() {
    int secim;
    float sayi1, sayi2, sonuc;
    
    printf("================================\n");
    printf("   GELISMIS HESAP MAKINESI     \n");
    printf("================================\n\n");
    
    printf("1. Toplama\n");
    printf("2. Cikarma\n");
    printf("3. Carpma\n");
    printf("4. Bolme\n");
    printf("5. Mod (tamsayi bolumunden kalan)\n");
    printf("6. Karekok (ilk sayi icin)\n");
    printf("7. Cikis\n\n");
    
    printf("Seciminiz (1-7): ");
    scanf("%d", &secim);
    
    // switch ile menü yönetimi
    switch (secim) {
        case 1:  // Toplama
            printf("Iki sayi giriniz: ");
            scanf("%f %f", &sayi1, &sayi2);
            sonuc = sayi1 + sayi2;
            printf("Sonuc: %.2f + %.2f = %.2f\n", sayi1, sayi2, sonuc);
            break;
            
        case 2:  // Cikarma
            printf("Iki sayi giriniz: ");
            scanf("%f %f", &sayi1, &sayi2);
            sonuc = sayi1 - sayi2;
            printf("Sonuc: %.2f - %.2f = %.2f\n", sayi1, sayi2, sonuc);
            break;
            
        case 3:  // Carpma
            printf("Iki sayi giriniz: ");
            scanf("%f %f", &sayi1, &sayi2);
            sonuc = sayi1 * sayi2;
            printf("Sonuc: %.2f * %.2f = %.2f\n", sayi1, sayi2, sonuc);
            break;
            
        case 4:  // Bolme
            printf("Iki sayi giriniz (bolunen bolen): ");
            scanf("%f %f", &sayi1, &sayi2);
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
                printf("Sonuc: %.2f / %.2f = %.2f\n", sayi1, sayi2, sonuc);
            } else {
                printf("HATA: Bolen sifir olamaz!\n");
            }
            break;
            
        case 5:  // Mod (tamsayılar için)
            printf("Iki tamsayi giriniz: ");
            scanf("%f %f", &sayi1, &sayi2);
            // Float'ları int'e çevir (basitlik için)
            if ((int)sayi2 != 0) {
                sonuc = (int)sayi1 % (int)sayi2;
                printf("Sonuc: %d %% %d = %d\n", (int)sayi1, (int)sayi2, (int)sonuc);
            } else {
                printf("HATA: Bolen sifir olamaz!\n");
            }
            break;
            
        case 6:  // Karekok (fall-through örneği)
            printf("Bir sayi giriniz: ");
            scanf("%f", &sayi1);
            if (sayi1 >= 0) {
                sonuc = sqrt(sayi1);  // <math.h> gerektirir
                printf("Karekok(%.2f) = %.2f\n", sayi1, sonuc);
            } else {
                printf("Negatif sayinin karekoku karmasiktir!\n");
            }
            break;
            // Burada break var, bu yüzden case 7'ye düşmez
            
        case 7:  // Çıkış
            printf("Program sonlandiriliyor...\n");
            break;
            
        default:  // Geçersiz seçim
            printf("Gecersiz secim! Lutfen 1-7 arasi bir deger giriniz.\n");
    }
    

    
    return 0;
}
