#include <stdio.h>

int main() {
    double boy, kilo, vki;
    printf("Boy(m) ve Kilo(kg): ");
    scanf("%lf %lf", &boy, &kilo);
    vki = kilo / (boy * boy);
    printf("Vucut Kitle Indeksiniz (VKI): %.2lf\n", vki);
    return 0;
}
