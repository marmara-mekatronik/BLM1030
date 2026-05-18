#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int pil;
} Robot_t;

int main() {
    Robot_t *r_ptr;
    
    printf("=== Yapıların Dinamik Bellek Tahsisi (malloc/free) ===\n\n");

    // Bellekte bir Robot_t boyutu kadar yer ayırıyoruz
    r_ptr = (Robot_t *) malloc(sizeof(Robot_t));
    
    if (r_ptr != NULL) {
        // Dinamik olarak ayrılmış yapıya değer atama
        r_ptr->id = 505;
        r_ptr->pil = 100;
        
        printf("Dinamik Robot ID: %d, Pil Seviyesi: %%%d\n", r_ptr->id, r_ptr->pil);
        printf("Ayrılan Bellek Boyutu: %zu bayt\n\n", sizeof(Robot_t));
        
        // İşimiz bittiğinde belleği mutlaka serbest bırakıyoruz!
        free(r_ptr);
        printf("[BAŞARILI] Dinamik bellek temizlendi (free(r_ptr)).\n");
    } else {
        printf("[HATA] Bellek ayrılamadı!\n");
    }
    
    return 0;
}
