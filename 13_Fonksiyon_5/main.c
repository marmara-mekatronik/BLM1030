#include <stdio.h>

void kutu_ciz(int satir, int sutun);

int main() {
    kutu_ciz(10,50);
    return 0;
}

void kutu_ciz(int satir, int sutun){
    for (int i=satir; i > 0; i--) {
        for (int j = sutun; j > 0 ; j--) {
            printf("*");
        }
        printf("\n");
    }
}
