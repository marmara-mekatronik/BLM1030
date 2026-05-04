#include <stdio.h>
#include <stdarg.h>

// Seviyeler -> 0: BILGI, 1: UYARI, 2: HATA
void hataBildir(int seviye, const char *metinSablonu, ...) {
    // ADIM 1: Mesajın başına gelecek tehlike etiketini seç
    if (seviye == 0)      printf("[BILGI] ");
    else if (seviye == 1) printf("[UYARI] ");
    else if (seviye == 2) printf("[HATA]  ");
    
    // ADIM 2: Değişken sayıda parametreler için listeyi hazırla
    va_list liste;
    va_start(liste, metinSablonu);
    
    // ADIM 3: 'vprintf' özel bir hazır fonksiyondur. 
    // Hazırladığımız listeyi alır ve %d, %f gibi yer tutucuların içine otomatik yerleştirir.
    vprintf(metinSablonu, liste);  
    
    // ADIM 4: Temizlik yap ve mesaj bitince alt satıra geç
    va_end(liste);
    printf("\n");
}

int main() {
    float sicaklik = 95.3;
    int motorNo = 2;
    
    // İstediğimiz kadar değişkeni (virgülle ayırarak) gönderebiliriz
    hataBildir(0, "Sistem basariyla baslatildi.");
    hataBildir(1, "Motor %d sicakligi biraz yuksek: %.1f C", motorNo, sicaklik);
    hataBildir(2, "Motor %d ASIRI ISINMA! Acil stop...", motorNo);
    
    return 0;
}
