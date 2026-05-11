#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Matris: Tek Blok Yaklaşımı (Ardışık Bellek)
 * 
 * Gömülü sistemlerde ve performans odaklı uygulamalarda
 * 2D dizilerin tek bir 1D blok olarak ayrılması tercih edilir.
 * Bu yöntem Cache (Önbellek) dostudur ve daha hızlıdır.
 */

int main() {
    int satir = 3, sutun = 4;
    
    // Tüm matris tek seferde ayrılır
    int *mat = (int*) malloc(satir * sutun * sizeof(int));

    if (mat == NULL) return 1;

    // Erişim Formülü: [i * SUTUN_SAYISI + j]
    printf("--- Tek Blok Matris (3x4) ---\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            // Veri atama
            mat[i * sutun + j] = (i + 1) * (j + 1);
            printf("%d\t", mat[i * sutun + j]);
        }
        printf("\n");
    }

    // Tek malloc yapıldığı için tek free yeterlidir
    free(mat);
    mat = NULL;

    printf("\nBellek temizlendi. Tek blok yontemi daha verimlidir.\n");
    return 0;
}
