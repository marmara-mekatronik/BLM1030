#include <stdio.h>
#include <strings.h>

int main() {

    char Cdizi1[50], Cdizi2[20];
    printf("Bir karakter dizisi giriniz: ");
    gets(Cdizi1);
    printf("Bir karakter dizisi daha giriniz: ");
    gets(Cdizi2);

    printf("\n%s\n%s\n", Cdizi1, Cdizi2);

    printf("Karakter dizilerinin uzunluklari : %d  - %d \n", strlen(Cdizi1), strlen(Cdizi2));

    if (!strcmp(Cdizi1, Cdizi2))
        printf("Karekter dizilieri bir birine eşittir!");
    else
        printf("Karekter dizilieri bir birine eşit değildir!");

    strcat(Cdizi1, Cdizi2);
    printf("\n%s\n", Cdizi1);

    strcpy(Cdizi1, Cdizi2);
    printf("%s\n", Cdizi1);

    return 0;
}