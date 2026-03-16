#include <stdio.h>

int main() {

    void *ptr;

    char Karakter='a';
    int tamSayi=20;
    float PI=3.14;

    ptr= &Karakter;
    printf("%c\n",*(char *)ptr);

    ptr=&tamSayi;
    printf("%d\n",*(int *)ptr);

    ptr=&PI;
    printf("%.2f\n",*(float *)ptr);

    ptr=NULL;

    return 0;
}
