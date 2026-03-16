#include <stdio.h>
void fonk1(int );
void fonk2(int *);
int main(){
    int a= 44;
    printf("a degiskeni pointer adresi : %p\n",&a);
    printf("fonksiyonlar Cagrilmadan Once a=%d\n",a);
    fonk1(a);
    printf("fonk1 Cagrildiktan sonra a=%d\n",a);
    fonk2(&a);
    printf("fon2 Cagrildiktan sonra a=%d\n",a);
    return 0;
}
void fonk1 (int n){
    n=15;
    printf ("fonk1 Icindeki degeri=%d\n", n);
}
void fonk2 (int *n){
    *n=29;
    printf ("fonk2 Icindeki degeri=%d\n", *n);
}
