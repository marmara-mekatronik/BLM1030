#include <stdio.h>

int main(int argsayisi, char *argvek[])
{
    if (argsayisi != 4) {
        printf("Kullanım: %s <sayı1> <işlem> <sayı2>\n", argvek[0]);
        return 1;
    }

    int sayi1 = atoi(argvek[1]);
    int sayi2 = atoi(argvek[3]);
    char islem = *argvek[2];
    int sonuc;

    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            if (sayi2 == 0) {
                printf("Hata: Sıfıra bölme yapılamaz.\n");
                return 1;
            }
            sonuc = sayi1 / sayi2;
            break;
        default:
            printf("Hata: Geçersiz işlem '%c'. Sadece +, -, *, / destekleniyor.\n", islem);
            return 1;
    }

    printf("Sonuç: %d\n", sonuc);
    return 0;
}

