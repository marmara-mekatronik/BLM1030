#include <stdio.h>
#include <string.h>

int main( )
{
    char K_dizi_1[50], K_dizi_2[50];
    printf("Bir karekter dizisi giriniz: ");
    gets(K_dizi_1);
    printf("Bir karekter dizisi daha giriniz: ");
    gets(K_dizi_2);

//    printf(K_dizi_1);
//    printf(K_dizi_2);
    printf("%s %s", K_dizi_1, K_dizi_2);

    printf("Karakter dizilerinin Uzunlukları : %d - %d\n ",strlen(K_dizi_1), strlen(K_dizi_2));

    if(!strcmp(K_dizi_1,K_dizi_2))
        printf("Karekter dizileri bir birine eşittir!\n");
    else
        printf("Karekter dizileri bir birine eşit değildir!\n");
    strcat(K_dizi_1, K_dizi_2);
    printf("Dizi 1 değişkeni içeriği: %s\n", K_dizi_1);

    strcpy(K_dizi_1,K_dizi_2);
    printf("Dizi 1 değişkeni içeriği: %s\n", K_dizi_1);

    return 0;
}
