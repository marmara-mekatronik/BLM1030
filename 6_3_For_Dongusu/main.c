#include <stdio.h>

int main() {
    unsigned long int faktoriyel = 1, sayi;
    printf("Faktoriyeli hesaplanacak sayiyi giriniz :>");
    scanf("%ld", &sayi);

    for (int i = 2; i <=sayi ; ++i) {
        //faktoriyel = faktoriyel * i
        faktoriyel*=i;
        }
    printf("%ld", faktoriyel);

    return 0;
}
