#include <stdio.h>

int main() {
    int urun_kodu = 4578;
    float urun_fiyati = 49.95;
    char urun_adi[] = "Mekatronik Kitap"; 
    unsigned int ram_adresi = 0xFFAABBCC; 
    
    printf("Urun Kodu   : %d\n", urun_kodu);
    printf("Fiyat       : %.2f TL\n", urun_fiyati); 
    
    // Hizalamalar
    printf("Saga yasli: %10d\n", urun_kodu); // 10 karakter boşlukta ezik durur
    printf("Sola yasli: %-10d|\n", urun_kodu); 
    printf("Sifirla   : %08d\n", urun_kodu); // 00004578
    
    // Alt Seviye
    printf("Onaltilik (hex): %X\n", urun_kodu); // Hex'e cevirip basar
    printf("Adres         : %p\n", (void*)&ram_adresi); 

    return 0;
}
