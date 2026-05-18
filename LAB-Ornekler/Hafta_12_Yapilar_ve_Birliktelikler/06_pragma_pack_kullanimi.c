#include <stdio.h>

#pragma pack(push, 1) // Sıkıştırmayı başlat (1 byte hizalama)
typedef struct {
    char id;
    int veri;
} Paket_t;
#pragma pack(pop)  // Eski ayara dön

typedef struct {
    char id;
    int veri;
} NormalPaket_t;

int main() {
    printf("=== #pragma pack(1) ile Padding Kaldırma ===\n\n");
    
    printf("Normal Paket Boyutu   : %zu bayt (sizeof)\n", sizeof(NormalPaket_t));
    printf("Sıkıştırılmış Paket   : %zu bayt (sizeof)\n\n", sizeof(Paket_t));
    
    printf("Not: Haberleşme (SPI/UART) sırasında karşı tarafın veriyi doğru\n");
    printf("okuyabilmesi için padding'lerin kaldırılması (packed struct) zorunludur.\n");
    
    return 0;
}
