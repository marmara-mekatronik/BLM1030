#include <stdio.h>
#include <stdlib.h>
int main() {

    int *ptr;

    ptr=(int*) malloc(sizeof(int));

    if(ptr==NULL) {
        printf("HATA-> Bellekten yer ayrılamadı");
        exit(0);
    } else{
        printf("Bellek başarı ile ayrıldı, Ayrılan Bellek Adresi : %p\n", ptr);
    }

    *ptr=55;

    printf("Ayrılan Adresdeki deger: %d\n", *ptr);
    free(ptr);

    return 0;
}
