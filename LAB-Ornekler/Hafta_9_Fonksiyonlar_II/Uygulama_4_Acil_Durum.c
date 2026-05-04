// Uygulama 4 Çözümü: Acil Durum Yönetimi
#include <stdio.h>

void motoruDurdur() { 
    printf("Motor ACIL durduruldu!\n"); 
}

void alarmiCal() { 
    printf("DIIIT! Alarm aktif!\n"); 
}

void acilDurumTetikle(void (*islem)(void)) {
    printf("Acil Protokol: ");
    islem(); // Gelen fonksiyonu çalıştır
}

int main() {
    acilDurumTetikle(motoruDurdur);
    acilDurumTetikle(alarmiCal);
    return 0;
}
