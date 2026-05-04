// Uygulama 1 Çözümü: Çoklu Sensör Okuma
#include <stdio.h>

void sensorleriOku(float *isi, float *nem, int *basinc) {
    *isi = 25.4;
    *nem = 60.2;
    *basinc = 1013;
}

int main() {
    float s1, s2; int s3;
    sensorleriOku(&s1, &s2, &s3);
    printf("Isi: %.1f, Nem: %.1f, Basinc: %d\n", s1, s2, s3);
    return 0;
}
