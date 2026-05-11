#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Double Pointer: Fonksiyon Parametresi ile Bellek Yönetimi
 * 
 * Bir fonksiyonun dışındaki bir işaretçinin değerini (adresini) 
 * kalıcı olarak değiştirmek için double pointer kullanımı.
 */

// DOĞRU YÖNTEM: Double pointer ile asıl işaretçiyi günceller
void bellekAyir(int **pptr, int n) {
    *pptr = (int*) malloc(n * sizeof(int));
    if (*pptr != NULL) {
        printf(">> Fonksiyon icinde %d byte bellek ayrildi.\n", (int)(n * sizeof(int)));
    }
}

int main() {
    int *ana_ptr = NULL; // Başlangıçta boş
    int adet = 5;

    printf("Baslangic: ana_ptr = %p\n", (void*)ana_ptr);

    // ana_ptr'nin ADRESİNİ (&) gönderiyoruz
    bellekAyir(&ana_ptr, adet);

    if (ana_ptr != NULL) {
        printf("Sonuc: ana_ptr basariyla guncellendi (Adres: %p)\n", (void*)ana_ptr);
        
        // Veri yazalım
        for (int i = 0; i < adet; i++) {
            ana_ptr[i] = (i + 1) * 10;
            printf("Deger [%d]: %d\n", i, ana_ptr[i]);
        }
    } else {
        printf("Basarisiz!\n");
    }

    free(ana_ptr);
    ana_ptr = NULL;

    return 0;
}
