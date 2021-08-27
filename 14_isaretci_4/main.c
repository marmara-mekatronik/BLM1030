#include <stdio.h>

double ortalama(int *dizi, int n);

int main() {
int dizi[5]={10,20,30,40,50};
int diziBuyuklugu = sizeof (dizi)/ sizeof (int);

    printf("Dizinin aritmetik ortalaması : %.2f", ortalama(dizi,diziBuyuklugu));

    return 0;
}

double ortalama(int *dizi, int n){
    int toplam=0;
    for (int i = 0; i < n; ++i) {
        toplam+=*(dizi+i);
        //toplam=toplam+(*dizi)
        //dizi++;
    }
    return toplam/n;
}
