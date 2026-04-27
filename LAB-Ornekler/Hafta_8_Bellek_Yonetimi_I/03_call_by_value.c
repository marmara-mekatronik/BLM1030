#include <stdio.h>

void sensorKonumuGuncelle(int okunan) {
    okunan = okunan + 10; // Fotokopinin uzerine +10 yazildi.
}

int main() {
    int x_ekseni = 5;
    sensorKonumuGuncelle(x_ekseni); // Fotokopi gönderildi (Değer)
    
    printf("Eksen: %d\n", x_ekseni); // Hala 5'tir! Ana değer değişmedi.
    return 0;
}
