#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int *list;

    printf("Kaç sayı üzerinde işlem yapılacak?");
    scanf("%d", &n);

    list = (int*)malloc(n*sizeof(int));
    if(list==NULL)
        printf("%s:%d>Dizi için gerekli bellek ayrılamamıştır.\n", __FILE__, __LINE__);
    else
        printf("istemiş olduğunuz bellek ayrıldı. Başlangıç adresi :%p", list);


    return 0;

}
