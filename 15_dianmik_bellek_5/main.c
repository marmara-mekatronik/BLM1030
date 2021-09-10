#include <stdio.h>
#include <stdlib.h>

void matrisAl(int **);

void matrisYazdir(int **, int, int);

int satirSayisi;
int sutunSayisi;

int main() {
// int matris[satir][sutun];

    printf("Satir sayisini giriniz :");
    scanf("%d", &satirSayisi);

    printf("Sutun sayisini giriniz :");
    scanf("%d", &sutunSayisi);

    int **matris = (int **) malloc(satirSayisi * sizeof(int));

    for (int m = 0; m < satirSayisi; ++m) {
        matris[m] = (int **) malloc(sutunSayisi * sizeof(int));

    }

    matrisAl(matris);
    matrisYazdir(matris, satirSayisi, sutunSayisi);

    return 0;
}

void matrisAl(int **matris) {

    if (matris == NULL) {
        printf("%s:%d> Dizi için gerekli bellek ayrılmadı\n ", __FILE__, __LINE__);
        exit(1);
    } else {
        for (int i = 0; i < satirSayisi; ++i) {
            for (int j = 0; j < sutunSayisi; ++j) {
                printf("matris[%d][%d]=", i, j);
                scanf("%d", &(matris[i][j]));
            }

        }
    }

}

void matrisYazdir(int **matris, int satirS, int sutunS) {
    for (int i = 0; i < satirS; ++i) {
        for (int j = 0; j < sutunS; ++j) {
            printf("%d\t", matris[i][j]);

        }
        printf("\n");

    }
}
