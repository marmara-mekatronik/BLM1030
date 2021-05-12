#include <stdio.h>
#include <stdlib.h>

int main() {
    //int matris[2][3];
    int satir,sutun, sayi=0;
    printf("satir sayisini giriniz : ");
    scanf("%d",&satir);
    printf("sütün sayisini giriniz : ");
    scanf("%d",&sutun);

    int **matris = (int**) malloc(satir* sizeof(int));
    for (int i = 0; i < satir; ++i) {
        matris[i] = (int*) malloc(sutun * sizeof(int));
    }

    if(matris==NULL){
        printf("%s:%d>Dizi için gerekli bellek ayrılamamıştır.\n", __FILE__, __LINE__);
        exit(0);
    } else {
        //matris[i][j]  *(*(matris+i)+j) ile aynıdır.
        for (int i = 0; i < satir; ++i) {
            for (int j = 0; j < sutun; ++j) {
                matris[i][j]=++sayi; // YADA  *(*(matris+i)+j) = ++sayi
            }
        }

        for (int i = 0; i < satir; ++i) {
            for (int j = 0; j < sutun; ++j) {
                printf("%d.satir %d.sutun daki deger :%d\n", i+1,j+1,matris[i][j]);
            }
        }


        for (int i = 0; i < satir; ++i) {
            for (int j = 0; j < sutun; ++j) {
                printf("%d.satir %d.sutun bellek adresi:%p\n", i+1,j+1,&matris[i][j]);
            }
        }
    }
    return 0;
}
