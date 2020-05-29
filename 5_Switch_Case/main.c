#include <stdio.h>

int main() {
    int ay;
    printf("Ay degerini giriniz(1-12)= ");
    scanf("%d", &ay);
    switch (ay) {
        case 1:
            printf("Girdiniginiz deger \"Ocak\" ayidir");
            break;
        case 2:
            printf("Girdiniginiz deger \"Subat\" ayidir");
            break;
        case 3:
            printf("Girdiniginiz deger \"Mart\" ayidir");
            break;
        case 4:
            printf("Girdiniginiz deger \"Nisan\" ayidir");
            break;
        case 5:
            printf("Girdiniginiz deger \"Mayis\" ayidir");
            break;
        case 6:
            printf("Girdiniginiz deger \"Haziran\" ayidir");
            break;
        case 7:
            printf("Girdiniginiz deger \"Temmuz\" ayidir");
            break;
        case 8:
            printf("Girdiniginiz deger \"Agustos\" ayidir");
            break;
        case 9:
            printf("Girdiniginiz deger \"Eylul\" ayidir");
            break;
        case 10:
            printf("Girdiniğini deger \"Ekim\" ayidir");
            break;
        case 11:
            printf("Girdiniğini deger \"Kasim\" ayidir");
            break;
        case 12:
            printf("Girdiniğini deger \"Aralik\" ayidir");
            break;
        default:
            printf("Hatali islem sectiniz!!!");
            break;
    }
    return 0;
}