#include <stdio.h>

int main() {
int sayi_1, sayi_2;
char  devam_mi;

    do {
        printf("Birinci sayıyı giriniz :");
        scanf("%d", &sayi_1);
        printf("İkinci sayıyı giriniz :");
        scanf("%d", &sayi_2);
        printf("%d + %d = %d\n", sayi_1, sayi_2,(sayi_1+sayi_2));
        printf("Devam etmek istermisiniz (E/e veya H/h)?");
        scanf(" %c", &devam_mi );
        } while (devam_mi=='E'||devam_mi=='e');
    printf("Canınız istemedi öyle mi?");
    return 0;
