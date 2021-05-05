#include <stdio.h>

int main() {
    int tam = 33;
    int *tAdresDegisken;

    tAdresDegisken = &tam;

    printf("Degiskenin Degeri :  %d\n", tam);
    printf("Degiskenin Adresi :  %p\n", &tam);

    printf("İşaretcinin Değeri :  %p\n", tAdresDegisken);

    printf("tAdresDegisken Adresi :  %p", &tAdresDegisken);
    

    return 0;
}
