#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc == 2) {
        FILE *Dosya = fopen(argv[1], "r");
        if (Dosya == NULL) {
            printf("Hata...\n Açılamayan Dosya : %s\n", argv[1]);
            printf("Dosya adı yanlış veya dosya yok...");
        } else {
            printf("Dosya Okunuyor...\n");
            printf("_________________________\n");
            printf("_______DOSYA_ICERIGI_____\n");
            printf("_________________________\n");

            int ch = fgetc(Dosya);

            while (ch != EOF) {
                putchar(ch);
                ch = fgetc(Dosya);
            }

            printf("\n");
            printf("________Dosya_Sonu______________\n");
        }
    } else if (argc == 1) {
        printf("Eksik parametre....");
    } else {
        printf("Çok fazla parametre....");
    }

    return 0;
}
