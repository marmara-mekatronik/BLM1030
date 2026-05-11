#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Laboratuvar 2: Dinamik Dizi Büyütme (realloc)
 * 
 * Bu program, başlangıçta küçük bir kapasite ile dizi oluşturur.
 * Kullanıcı her yeni veri eklemek istediğinde realloc() kullanarak
 * diziyi dinamik olarak genişletir.
 */

int main() {
    int boyut = 0;
    int kapasite = 3; // Başlangıç kapasitesi
    int *dizi = (int*) malloc(kapasite * sizeof(int));
    
    if (dizi == NULL) return 1;

    char cevap;
    printf("--- Dinamik Veri Kayit Sistemi ---\n");

    while (1) {
        printf("\nYeni veri eklemek ister misiniz? (e/h): ");
        scanf(" %c", &cevap);
        
        if (cevap == 'h' || cevap == 'H') break;
        
        int yeni_veri;
        printf("Veri girin: ");
        scanf("%d", &yeni_veri);
        
        // Eğer dizi dolduysa kapasiteyi artır
        if (boyut >= kapasite) {
            kapasite++; // Kapasiteyi birer birer artırıyoruz
            
            // realloc() kullanımı (Güvenli yöntem: geçici pointer ile)
            int *temp = (int*) realloc(dizi, kapasite * sizeof(int));
            
            if (temp == NULL) {
                printf("Kritik Hata: Bellek buyutulemedi!\n");
                free(dizi);
                return 1;
            }
            dizi = temp;
            printf(">> Bellek genisletildi (Yeni Kapasite: %d)\n", kapasite);
        }
        
        dizi[boyut] = yeni_veri;
        boyut++;
    }
    
    printf("\nKaydedilen Veriler (%d adet):\n", boyut);
    for (int i = 0; i < boyut; i++) {
        printf("[%d] ", dizi[i]);
    }
    printf("\n");

    free(dizi);
    dizi = NULL;
    return 0;
}
