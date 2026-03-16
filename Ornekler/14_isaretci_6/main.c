#include <stdio.h>

int *minBul(int dizi[], int boyut);

int main() {
    int dizi[12]={25,8,9,6,15,20,35,40,50,11,2,13};
    int diziUzunlugu= sizeof(dizi)/sizeof(int);
    int *ptr;
    ptr= minBul(dizi,diziUzunlugu);

    printf("En küçük değerin adresi: %p\n",ptr);
    printf("En küçük değer: %d\n", *ptr);
    printf("En küçük değerin indis bilgisi %p\n",(ptr-dizi));
    printf("En küçük değerin indis bilgisi %d",(int)(ptr-dizi));
    return 0;
}

int *minBul(int dizi[], int boyut){
    int *enKucukAdres=dizi;

    for (int i = 1; i < boyut; ++i) {
        if(dizi[i]<*enKucukAdres){
            enKucukAdres=&dizi[i];
        }
    }
    return enKucukAdres;
}
