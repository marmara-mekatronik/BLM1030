#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi;
    printf("Kaç adet sayı gireceksiniz ?:");
    scanf("%d",&sayi);

    int *SayiDizisi = (int *) malloc(sizeof(int) * sayi);

    for (int i = 0; i < sayi; ++i) {
        printf("%2d. elemani giriniz : ", i+1);
        scanf("%d",SayiDizisi + i); // scanf("%d", SayiDizisi[i])
    }

    for (int i = 0; i < sayi; ++i) {
        printf("%d. elemani : %2d\n", i+1, SayiDizisi[i]);
    }

    return 0;
}

