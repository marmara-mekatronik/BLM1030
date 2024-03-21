#include <stdio.h>
#include <string.h>

#define SATIR 8
#define SUTUN 8

int main() {
    char satranc[SATIR][SUTUN];

    printf("-----------------\n");
    for (int i = 0; i < 8; ++i) {

        printf("|"); // Satır Başı Çizgisi
        for (int j = 0; j < 8; ++j) {
            if ((i + j) % 2 == 0)
                satranc[i][j] = '#'; // Siyah kareleri belirliyoruz.
            else
                satranc[i][j] = ' '; // Beyaz Kareleri belirliyoruz.

            printf("%c",satranc[i][j]); // Belirlediğimiz kareleri yazdırıyoruz.
            printf("|"); // Satır Sonu Çizgisi
        }
        printf("\n");
    }
    printf("-----------------\n");

    return 0;
}


