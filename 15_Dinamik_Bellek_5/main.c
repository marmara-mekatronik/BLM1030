#include <stdio.h>
#include <stdlib.h>

void matrisAl(int **, int, int);
void matrisYazdir(int **, int, int);

int main() {
// int matris[satir][sutun];

    int satirSayisi;
    int sutunSayisi;

    printf("Satir sayisini giriniz :");
    scanf("%d", &satirSayisi);
    printf("Sutun sayisini giriniz :");
    scanf("%d", &sutunSayisi);

    int **matris = (int **) malloc(satirSayisi * sizeof(int*));

    for (int m = 0; m < satirSayisi; ++m) {
        matris[m] = (int *) malloc(sutunSayisi * sizeof(int));

    }

    matrisAl(matris, satirSayisi, sutunSayisi);
    matrisYazdir(matris, satirSayisi, sutunSayisi);

    return 0;
}

void matrisAl(int **matris, int satirSayisi, int sutunSayisi) {

    if (matris == NULL) {
        printf("%s:%d> Dizi için gerekli bellek ayrılmadı\n ", __FILE__, __LINE__);
        exit(1);
    } else {
        printf("Lütfen Matrisin elemanlarını satır/sütün şeklinde giriniz.\n");
        for (int i = 0; i < satirSayisi; ++i) {
            for (int j = 0; j < sutunSayisi; ++j) {
                printf("matris[%d][%d]=", i, j);
                scanf("%d", &(matris[i][j]));
            }
        }
    }
}

void matrisYazdir(int **matris, int satirS, int sutunS) {
    printf("Matris Değerleri\n");
    printf("_________________\n");
    for (int i = 0; i < satirS; ++i) {
        for (int j = 0; j < sutunS; ++j) {
            printf("%d\t", matris[i][j]);

        }
        printf("\n");
    }
    printf("_________________\n");
}
