#include <stdio.h>

// veri-türü fonksiyon-adı (veri-türü parametre1, veri-türü parametre2, ...);

void fonksiyon1(int deger);


int main() {
    int deger;
    deger = 44;
    fonksiyon1(10);
    printf("main() fonksiyonu icindeki deger :%d", deger);
    return 0;
}

void fonksiyon1(int deger) {
    deger = deger + 26;
    printf("Fonksiyonun icindeki deger : %d\n", deger);
}