#include <stdio.h>

void lidarDataGuncelle(float *ptr_mesafe, float *ptr_aci, int *ptr_guvenli_mi) {
    // Donanimdan UART ile verileri okudugumuzu varsayiyoruz...
    // Oku, dogrudan RAM adresine yapistir!
    *ptr_mesafe = 125.5;  
    *ptr_aci = 45.0;
    *ptr_guvenli_mi = 1; // 1 = Safe (Guvenli)
}

int main() {
    float uzaklik = 0, yon_aci = 0;
    int durum = 0;
    
    // Asla Return kullanmadık! C dilinde "Void" bile olsa belleklerine sızdık.
    lidarDataGuncelle(&uzaklik, &yon_aci, &durum);
    
    printf("Mesafe: %.1f, Aci: %.1f, Durum: %d\n", uzaklik, yon_aci, durum);
    return 0;
}
