#include <stdio.h>

// Prototip — fonksiyonun imzası (noktalı virgül ile sonlanır)
float topla(float a, float b); 

int main() {
    float sonuc = topla(5, 10);   // Derleyici artık 'topla'yı tanır
    printf("Sonuc: %.1f\n", sonuc);
    return 0;
}

// Tanımlama — fonksiyonun gövdesi (noktalı virgül YOKTUR)
float topla(float a, float b) {
    return a + b;
}
