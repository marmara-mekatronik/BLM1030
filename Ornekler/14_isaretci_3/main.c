#include <stdio.h>

int main() {
int dizi[5]={10,20,30,40,50};
int *pDizi;
int z;
    for (int i = 0; i < 5; ++i) {
        printf("deger: %d -> adresi : %p\n", dizi[i], &dizi[i]);
    }
    printf("-------------------\n");
    printf("dizi degiskeninin adi isaretcidir: %p\n",dizi); // printf("%p\n",&dizi[0]);
    printf("-------------------\n");

    pDizi=dizi; // pDizi=&dizi[0]; bu ifadeler aynıdır.
    printf("pDizi degiskenine atanmis adres : %p\n",pDizi);
    printf("pDizi degiskeninin gosterdigi adresdeki deger : %d\n", *pDizi);

    z=2;
    printf("pDizi degiskeninin z blok otesindeki adresdeki deger: %d\n", *(pDizi+z));
    // *(pDizi+z) => *(pDizi+Sizeof(int)*z
    printf("-------------------\n");
    printf("pDizi degiskeninin referans gosterdigi \n"
           "yerdeki degere z degerinin eklenmis hali: %d\n", *pDizi+z);
    // dizi[i]=dizi[i]+z
    printf("-------------------\n");

    return 0;
}
