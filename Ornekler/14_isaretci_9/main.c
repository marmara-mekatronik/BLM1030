#include <stdio.h>

void tersdenYaz(int *dizi, int n);

int main() {
int dizi[6]={10,20,30,40,50,60};
int diziBuyuklugu = sizeof (dizi)/ sizeof (int);

for (int i = 0; i < diziBuyuklugu; ++i) {
        printf("%d\t", dizi[i]);
    }
    printf("\n");
tersdenYaz(dizi,diziBuyuklugu);

    printf("\n");
    for (int i = 0; i < diziBuyuklugu; ++i) {
        printf("%d\t", dizi[i]);
    }
return 0;
}

void tersdenYaz(int *dizi, int n){
    int gecici;
    for (int i = 0; i < n/2 ; ++i) {
        gecici=*(dizi+i);
        *(dizi+i)=*(dizi+(n-1)-i);
        *(dizi+(n-1)-i)=gecici;
    }
}
