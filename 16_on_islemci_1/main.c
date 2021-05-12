#include <stdio.h>
#define EGER if
#define DEGILSE else
#define VE &&
#define VEYA ||
#define KUCUK <
#define BUYUK >
#define MIN 1
#define MAX 100

int main() {
    int sayi;
    printf("Bir sayı girinizİ:");
    scanf("%d",&sayi);

    EGER((sayi KUCUK MIN) VEYA (sayi BUYUK MAX))
        printf("%d sayisi [%d-%d] araliginda degil\n", sayi, MIN, MAX);
    DEGILSE
        printf("%d sayisi [%d-%d] araliginda\n", sayi, MIN, MAX);

    return 0;
}
