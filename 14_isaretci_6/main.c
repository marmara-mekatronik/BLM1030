#include <stdio.h>

int *minBul(int dizi[], int boyut);

int main() {
    int dizi[17]={25,8,9,6,15,20,35,40,50,11,2,13};
    int diziUzunlugu= sizeof(dizi)/sizeof(int);

    int *ptr;
    ptr= minBul(dizi,diziUzunlugu);

    printf("En kucuk degerin adresi: %p\n",ptr);
    printf("En Kucuk deger: %d\n", *ptr);
    printf("En kucuk degerin indis bilgisi %p\n",(ptr-&dizi[0]));
    printf("En kucuk degerin indis bilgisi %d",(int)(ptr-&dizi[0]));
    return 0;
}

int *minBul(int dizi[], int boyut){
 int EnKucukDeger=dizi[0];
 int *EnKucukAdres=&dizi[0]; //int *EKA=dizi;
    for (int i = 1; i < boyut; ++i) {
        if(dizi[i]<EnKucukDeger){
            EnKucukDeger=dizi[i];
            EnKucukAdres=&dizi[i];
        }
    }
    return EnKucukAdres;
}
