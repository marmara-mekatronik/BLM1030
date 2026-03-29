#include <stdio.h>
#include <math.h>

#define N 100
#define FS 1000.0  // Örnekleme frekansı (Hz)

int main() {
    double sinyal[N], filtreli[N];
    double frekans = 50.0, genlik = 220.0;
    double dt = 1.0 / FS;

    // 1. Sinüs sinyali üret
    for (int i = 0; i < N; i++) {
        sinyal[i] = genlik * sin(2 * M_PI * frekans * i * dt);
    }

    // 2. Hareketli ortalama filtresi (pencere = 5)
    int w = 2; // yarı pencere
    for (int i = 0; i < N; i++) {
        double top = 0; int cnt = 0;
        for (int j = -w; j <= w; j++) {
            if (i+j >= 0 && i+j < N) { top += sinyal[i+j]; cnt++; }
        }
        filtreli[i] = top / cnt;
    }

    // 3. Ortalama, RMS ve Tepe değer hesaplama
    double ort = 0.0, rms = 0.0, tepe = 0.0;
    for (int i = 0; i < N; i++) {
        ort += sinyal[i];
        rms += sinyal[i] * sinyal[i];
        if (fabs(sinyal[i]) > tepe) tepe = fabs(sinyal[i]);
    }
    ort /= N;
    rms = sqrt(rms / N);  // Root Mean Square

    printf("Ortalama : %.4f\n", ort);
    printf("RMS      : %.4f\n", rms);
    printf("Tepe     : %.4f\n", tepe);
    printf("Crest F. : %.4f\n", tepe / rms);  // Tepe faktörü

    // Frekans tespiti
    int gecis = 0, ilk = -1, son = -1;
    for (int i = 1; i < N; i++) {
        // Negatiften pozitife geçiş anını yakala
        if (sinyal[i-1] <= 0 && sinyal[i] > 0) {
            gecis++;
            if (ilk == -1) ilk = i;
            son = i;
        }
    }
    if (gecis >= 2) {
        double periyot = (son - ilk) * dt / (gecis - 1);
        printf("Tahmin edilen frekans: %.2f Hz\n", 1.0 / periyot);
        printf("Gerçek frekans: %.2f Hz\n", frekans);
    }
    return 0;
}
