#include <stdio.h>

int main() {
    int taban, us;
    printf("Tabani giriniz: ");
    scanf("%d", &taban);
    printf("Usse giriniz: ");
    scanf("%d", &us);

    long long sonuc = 1; // Çarpım akümülatörü (etkisiz eleman = 1)
    for (int i = 0; i < us; i++) {
        sonuc *= taban;
    }
    printf("%d ^ %d = %lld\n", taban, us, sonuc);
    return 0;
}
