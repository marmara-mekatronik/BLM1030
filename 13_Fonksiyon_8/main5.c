#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Lütfen en az üç argüman giriniz: sayı1 işlem sayı2\n");
        return 1;
    }
    switch (*argv[2]) {
        case 'x':
            printf("%.2f", atof(argv[1]) * atof(argv[3]));
            // \* kullan
            break;
        case '/':
            printf("%.2f", atof(argv[1]) / atof(argv[3]));
            break;
        case '+':
            printf("%.2f", atof(argv[1]) + atof(argv[3]));
            break;
        case '-':
            printf("%.2f", atof(argv[1]) - atof(argv[3]));
            break;
        default:
            printf("Doğru işlem giriniz: +, -, * veya /\n");
    }
    return 0;
}
