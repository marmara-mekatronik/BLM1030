// Uygulama 2 Çözümü: PID Hafıza Simülasyonu
#include <stdio.h>

void hizFarkiHesapla(int guncelHiz) {
    static int oncekiHiz = 0;  // İlk çağrılışta 0 olur, sonra değerini korur
    int ivme = guncelHiz - oncekiHiz;
    oncekiHiz = guncelHiz;
    printf("Guncel: %d, Degisim: %d\n", guncelHiz, ivme);
}

int main() {
    hizFarkiHesapla(10); 
    hizFarkiHesapla(25); 
    hizFarkiHesapla(25);
    return 0;
}
