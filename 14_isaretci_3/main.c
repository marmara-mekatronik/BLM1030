#include <stdio.h>

int main() {
    int dizi[5]={10,20,30,40,50};
    int i;
    int *p;
    for (i;i<5;i++){
        printf("%d :",dizi[i]);
        printf("%p\n",&dizi[i]);
    }
    printf("-------------------\n");
    printf("%p\n",dizi); // aşağıdaki satırla aynı ifade
    printf("%p\n",&dizi[0]);
    printf("-------------------\n");
    p=dizi; // p=&dizi[0]; bu ifadeler aynı
    printf("p degiskenine atanmis adres : %p\n",p);
    printf("p degiskeninin gosterdigi adresdeki deger : %d\n",*p);
    i=4;
    printf("p degiskeninin i blok otesindeki adresdeki deger: %d\n",*(p+i));
    printf("-------------------\n");
    printf("p degiskeninin i blok otesindeki adresdeki deger: %d\n",*p+i);
    // dizi[0]=dizi[0]+1;
    return 0;
}
