#include <stdio.h>
#include <string.h>
#include<locale.h>


int main( )
{
    setlocale(LC_ALL, "Turkish");
    char K1[50], K2[50];
    printf("Bir karekter dizisi giriniz: ");
    gets(K1);
    printf("Bir karekter dizisi daha giriniz: ");
    gets(K2);

//    printf(K1);
//    printf(K2);
    printf("%s %s", K1, K2);

    printf("Karakter dizilerinin Uzunlukları : %d - %d\n ",strlen(K1), strlen(K2));

    if(!strcmp(K1,K2))
        printf("Karekter dizileri bir birine eşittir!\n");
    else
        printf("Karekter dizileri bir birine eşit değildir!\n");

    strncpy(K1,K2,4);
    K1[4]='\0';
    puts(K1);

    strcat(K1, K2);
    printf("Dizi 1 değişkeni içeriği: %s\n", K1);

    strcpy(K1,K2);
    printf("Dizi 1 değişkeni içeriği: %s\n", K1);

    return 0;
}
