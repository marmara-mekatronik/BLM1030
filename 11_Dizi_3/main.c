#include <stdio.h>
#include <string.h>

#define SATIR 8
#define SUTUN 8

int main() {
    char satranc[SATIR][SUTUN];

    printf("-----------------\n");
    for (int i = 0; i < 8; ++i) {

        printf("|");
        for (int j = 0; j < 8; ++j) {
            if ((i + j) % 2 == 0)
                satranc[i][j] = '#';
            else
                satranc[i][j] = ' ';

            printf("%c",satranc[i][j]);
            printf("|");
        }
        printf("\n");
    }
    printf("-----------------\n");

    return 0;
}


