#include <stdio.h>

// Diziyi adres (pointer) seklinde yolladigimiz icin * isaretiyle karsilayabiliriz!
void sensorFiltresi(int *ptr_liste, int boyut) {
    // Orjinal Array'e doğrudan yazabiliyoruz demektir!
    for (int i = 0; i < boyut; i++) {
        ptr_liste[i] = ptr_liste[i] / 2; // Tüm dizi verilerini yarıya indir / gürültü azalt
    }
}

int main() {
    int adc[3] = {1000, 800, 600};
    // adc ismi bir ADRES/POINTER'dır, başına '&' koymamıza BİLE GEREK YOK!
    sensorFiltresi(adc, 3);

    printf("Filtrelenmis ADC degerleri: %d, %d, %d\n", adc[0], adc[1], adc[2]);

    return 0;
}
