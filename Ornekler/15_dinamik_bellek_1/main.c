#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *list;

    printf("Kaç sayı üzerinde işlem yapacaksınız?");
    scanf("%d", &n);

    list = (int *) malloc(n * sizeof(int));
    if (list == NULL)
        printf("Tarih : %s - %s \n Kaynak Kodunuz : %s:\n %d nolu satir -> İşlem için gerekli bellek ayrılamamıştır.\n",
               __DATE__, __TIME__, __FILE__, __LINE__);
    else
        printf("İstemiş olduğunuz bellek ayrıldı. Bellek başlangıç adresi: %p", list);


    return 0;
}
