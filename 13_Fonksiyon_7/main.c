#include <stdio.h>
unsigned long faktoriyel_hesapla(int sayi);
int main() {
    int sayi;
    printf("Lütfen faktöriyeli hesaplanacak sayiyi giriniz:");
    scanf("%d",&sayi);

    for (int i = 1; i < sayi; ++i) {
        printf("%d sayısının faktöriyel Sonucu :%ld \n", i, faktoriyel_hesapla(i));
    }

    return 0;
}

unsigned long faktoriyel_hesapla(int sayi){
    if(sayi<=1)
        return 1;
    else
    return(sayi* faktoriyel_hesapla(sayi-1));
}

