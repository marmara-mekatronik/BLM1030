#include <stdio.h>

void tahta_ciz(int satir, int sutun);

int main() {
    tahta_ciz(8, 8);
    return 0;
}

void tahta_ciz(int satir, int sutun) {
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            if ((i+ j) % 2 == 0) {
                printf("[X]");
            } else {
                printf("[ ]");
            }
        }
        printf("\n");
    }
}


