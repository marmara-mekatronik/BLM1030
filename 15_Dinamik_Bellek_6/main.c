#include <stdio.h>
#include <stdlib.h>

void diziYazdır(int *, int);

int main() {

    int *sayi_Dizisi_1;
    int sayi;

    printf("Eleman sayisini giriniz :");
    scanf("%d",&sayi);

    sayi_Dizisi_1=(int *) calloc(sayi, sizeof(int));
    /////////////////////////////////////////////////
    printf("\n_________________\n");
    printf("\"calloc\" sonucu oluşan dizinin elemanları");
    printf("\n_________________\n");
    diziYazdır(sayi_Dizisi_1,sayi);

    for (int i = 0; i < sayi ; ++i) {
        sayi_Dizisi_1[i]=i*i;
        }

    printf("\n_________________\n");
    printf("Dizi Elemanlarine indis Karesi eklndikten sonraki durumu");
    printf("\n_________________\n");
    diziYazdır(sayi_Dizisi_1,sayi);
    free(sayi_Dizisi_1);

    sayi_Dizisi_1=(int *) malloc(sizeof(int)*sayi);
    /////////////////////////////////////////////////
    printf("\n_________________\n");
    printf("\"malloc\" sonucu oluşan dizinin elemanları");
    printf("\n_________________\n");
    diziYazdır(sayi_Dizisi_1,sayi);

    sayi_Dizisi_1= realloc(sayi_Dizisi_1, sizeof(int)*sayi);
    /////////////////////////////////////////////////
    printf("\n_________________\n");
    printf("\"realloc\" sonucu oluşan dizinin elemanları");
    printf("\n_________________\n");
    diziYazdır(sayi_Dizisi_1,sayi*2);

    free(sayi_Dizisi_1);
    return 0;

}
void diziYazdır(int *dizi, int elemanSayisi){
    for (int i = 0; i < elemanSayisi; ++i) {
        printf("dizi[%d]=%d\n",i,dizi[i]);

    }

}
