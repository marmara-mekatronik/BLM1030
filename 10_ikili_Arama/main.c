#include <stdio.h>

int main() {
    int dizi[25] = {2, 3, 4, 9, 12, 18, 28, 34, 36, 43, 46, 48, 49, 51, 52, 53, 56, 57, 69, 72, 74, 85, 94, 95, 97};
    int hedef;
    int bulundu = 0;
    int solIndis = 0;
    int sagIndis = 24;
    int ortaIndis = 0;

    printf("Dizi icinde arayacaginiz sayiyi giriniz: ");
    scanf("%d", &hedef);

    while (bulundu == 0 && solIndis <= sagIndis) {
        ortaIndis = (solIndis + sagIndis) / 2;
        if (hedef == dizi[ortaIndis]) {
            bulundu = 1;
            break;
        } else if (hedef < dizi[ortaIndis]) {
            sagIndis = ortaIndis - 1;
        } else if (hedef > dizi[ortaIndis]) {
            solIndis = ortaIndis + 1;
        }
    }
    if (bulundu)
        printf("Bulundu : Dizinin %d. indisindeki deger"
               "aranan elemana esit. \n", ortaIndis);
    else
        printf("Aradiginiz eleman dizide bulunamadi!\n");
    return 0;
}