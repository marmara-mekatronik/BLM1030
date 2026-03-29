#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int hedef = rand() % 100 + 1;  // 1-100 arası rastgele sayı
    int tahmin, deneme = 0;

    printf("1-100 arası bir sayı tuttum. Tahmin edin:\n");
    do {
        printf("Tahmininiz: ");
        scanf("%d", &tahmin);
        deneme++;
        if (tahmin > hedef) printf("Daha küçük!\n");
        else if (tahmin < hedef) printf("Daha büyük!\n");
    } while (tahmin != hedef);
    printf("Tebrikler! %d denemede buldunuz!\n", deneme);
    return 0;
}
