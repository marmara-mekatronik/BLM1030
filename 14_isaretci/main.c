#include <stdio.h>

int main() {
    int *ptam, tam = 33;
    ptam = &tam;
    printf("tam: icerik = %d\n", tam);
    printf("tam: adres = %p\n", &tam);
    printf("ptam: icerik = %p\n", ptam);
    printf("ptam: adres = %p\n", &ptam);

    return 0;
}
