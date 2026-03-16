#include <stdio.h>
#include <stdlib.h>

int main() {

    int satir,sutun;
    printf("Satir sayisini giriniz : ");
    scanf("%d", &satir);
    printf("Sütün sayisini giriniz : ");
    scanf("%d", &sutun);

    int **matris = (int **) malloc(satir * sizeof(int *));
    for (int i = 0; i < satir; ++i) {
        matris[i] = (int *) malloc(sutun * sizeof(int));
    }

    // Matrise değer girme
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            *(*(matris+i)+j) = i*j;
        }
    }

    // Matrisi yazdırma
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            printf("%d\t",*(*(matris+i)+j));
        }
        printf("\n");
    }
    return 0;
}
