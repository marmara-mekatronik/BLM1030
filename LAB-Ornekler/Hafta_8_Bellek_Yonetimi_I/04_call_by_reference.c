#include <stdio.h>

// Fonksiyon Diyor Ki: "Bana deger degil, int adresi yolla (*). Ben onu iceriden vururum!"
void sensorKonumuGuncelle(int *ptr_okunan) {
    // Uzaktan adrese git, eski verideki değeri Al, 10 ekle ve Orjinal yere Yapıştır.
    *ptr_okunan = *ptr_okunan + 10; 
}

int main() {
    int x_ekseni = 5;
    // Orijinal yeri, bellek adresini kargola (&)
    sensorKonumuGuncelle(&x_ekseni); 
    
    printf("Eksen: %d\n", x_ekseni); // Ekranda 15! Başarıyla orijinal veriye sızıldı.
    return 0;
}
