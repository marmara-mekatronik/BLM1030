#include <stdio.h>
#include <stdarg.h>

// İlk parametre (kacTane), kendisinden sonra kaç tane sayı geleceğini söyler.
int sayilariTopla(int kacTane, ...) {
    va_list liste;                  // ADIM 1: Ekstra argümanlar için boş liste oluştur
    va_start(liste, kacTane);       // ADIM 2: Listeyi 'kacTane' değişkeninden hemen sonra başlat
    
    int toplam = 0;
    for (int i = 0; i < kacTane; i++) {
        // ADIM 3: Listeden sıradaki veriyi "int" (tamsayı) formatında çek al
        int siradakiSayi = va_arg(liste, int);  
        toplam += siradakiSayi;
    }
    
    va_end(liste);                  // ADIM 4: Temizlik yap (belleği iade et)
    return toplam;
}

int main() {
    // İlk rakam (3), arkasından 3 adet sayının (10, 20, 30) geleceğini bildirir.
    int sonuc1 = sayilariTopla(3,   10, 20, 30);       
    
    // İlk rakam (5), arkasından 5 adet sayının geleceğini bildirir.
    int sonuc2 = sayilariTopla(5,   1, 2, 3, 4, 5);    
    
    printf("1. Islem: %d\n", sonuc1);   // Çıktı: 60
    printf("2. Islem: %d\n", sonuc2);   // Çıktı: 15
    return 0;
}
