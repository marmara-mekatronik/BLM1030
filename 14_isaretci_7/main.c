#include <stdio.h>

double ortalama(double *, int);

int main() {
    double a[5]={1.1,2.2,3.3,4.4,5.5};
    printf("Dizinin Aritmetik ortalamasi :  %.2f", ortalama(a,5));
    return 0;
}

double ortalama(double *dizi, int n){
    double toplam=0.0;

    for (int i = 0; i < n; ++i) {
        toplam += *(dizi+i);
    }

    return (toplam/n);
}
