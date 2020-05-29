#include <stdio.h>

int main() {
    int sayi_1, sayi_2;
    char devam_mi;
    do {
        printf("Birinci sayıyı giriniz> ");
        scanf("%d", &sayi_1);
        printf("İkinci sayıyı giriniz> ");
        scanf("%d", &sayi_2);
        printf("%d + %d = %d\n", sayi_1, sayi_2, sayi_1 + sayi_2);
        printf("Devam etmek ister misiniz? ");
        //C'de tek karakter okuma işlemi biraz sıkıntılı
        //olduğundan, burada da bir do while kullandık.
        do {
            scanf("%c", &devam_mi);
        } while (devam_mi == '\n');
        printf("\n");
    } while (devam_mi == 'E' || devam_mi == 'e');

    return 0;
}