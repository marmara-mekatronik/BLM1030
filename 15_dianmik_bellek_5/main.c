#include <stdio.h>
#include <stdlib.h>
void matrisYazdir(int **, int, int);

int main() {
    int satir, sutun;
    printf("satir sayisini giriniz : ");
    scanf("%d", &satir);
    printf("sutun sayisini giriniz : ");
    scanf("%d", &sutun);

    int **matris = (int **) malloc(satir * sizeof(int *));

    for (int m = 0; m < satir; ++m) {
        matris[m] = (int *) malloc(satir * sizeof(int));
    }
    if (matris == NULL) {
        printf("%s:%d> Dizi için gerekli bellek ayrılmadı\n ", __FILE__, __LINE__);
        exit(0);
    } else {
        for (int i = 0; i < satir; ++i) {
            for (int j = 0; j < sutun; j++) {
                printf("matris[%d][%d]=", i, j);
                scanf("%d", &(matris[i][j]));
            }
        }
        matrisYazdir(matris, satir, sutun);

        return 0;
    }
}

    void matrisYazdir(int **matris, int satir, int sutun) {
        int a, b;
        for (a = 0; a < satir; ++a) {
            for (b = 0; b < sutun; b++) {
                printf("%d", matris[a][b]);

            }
            printf("\n");
        }
    }
