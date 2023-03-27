#include <stdio.h>
#include <string.h>

#define SATIR 8
#define SUTUN 8

int main() {
    char satranc[SATIR][SUTUN];

    for (int i = 0; i < SATIR; ++i) {
        for (int j = 0; j < SUTUN; ++j) {
            satranc[i][j] = ' ';

        }
    }

    for (int i = 0; i < SATIR; ++i) {
        for (int j = 0; j < SUTUN; ++j) {
            if ((i + j) % 2 == 0) {
                satranc[i][j] = '#';
            }
        }
    }

    for (int i = 0; i < SATIR; ++i) {
        for (int j = 0; j < SUTUN; ++j) {
            printf("%c",satranc[i][j]);
        }
        printf("\n");
    }

    return 0;
}


