#include <stdio.h>

int main() {
    char *pk, k = 'a';
    int *pt, t=22;
    double *pg, g=10.5;
    pk = &k; pt = &t; pg= &g;
    printf("Ilk Degerler: k= %c t= %d g= %f \n", k, t, g);
    printf("Onceki adresler: pk= %p pt= %p pg= %p \n", pk, pt, pg);
    k++;t--;g=g+10;
    printf("Son Degerler: k= %c t= %d g= %f \n", k, t, g);
    pk++;
    pt--;
    pg=pg+10;
    printf("Sonraki adresler: pk= %p pt= %p pg= %p \n", pk, pt, pg);
    return 0;
}
