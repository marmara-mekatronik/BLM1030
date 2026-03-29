#include <stdio.h>

int main() {
    int secim;
    double a, b;

    do {
        printf("\n====== HESAP MAKINESI ======\n");
        printf("1. Toplama\n");
        printf("2. Cikarma\n");
        printf("3. Carpma\n");
        printf("4. Bolme\n");
        printf("5. Faktoriyel\n");
        printf("0. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        if (secim == 0) break;

        if (secim >= 1 && secim <= 4) {
            printf("Iki sayi girin: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (secim) {
            case 1: printf("Sonuc: %.2f\n", a + b); break;
            case 2: printf("Sonuc: %.2f\n", a - b); break;
            case 3: printf("Sonuc: %.2f\n", a * b); break;
            case 4:
                if (b != 0)
                    printf("Sonuc: %.2f\n", a / b);
                else
                    printf("HATA: Sifira bolme!\n");
                break;
            case 5: {
                int n;
                printf("Sayi girin: ");
                scanf("%d", &n);
                long long fakt = 1;
                for (int i = 1; i <= n; i++) fakt *= i;
                printf("%d! = %lld\n", n, fakt);
                break;
            }
            default:
                printf("Gecersiz secim!\n");
        }
    } while (1);

    printf("Program sonlandi.\n");
    return 0;
}
