#include <stdio.h>

int main() {
    int dizi[25] = {2, 3, 4, 9, 12, 18, 28, 34, 36,
                    43, 46, 48, 49, 51, 52, 53, 56,
                    57, 69, 72, 74, 85, 94, 95, 97};
// {2,3,4,9,12,18,28,34,36,43,46,48,49,51,52,53,56,57,69,72,74,85,94,95,97};
//  0 1 2 3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24

    int aranan, bulunan_indis = -1, solIndis = 0, sagIndis = 24, ortaIndis = 0;

    printf("Dizi içerisinde arayacağınız sayıyı giriniz: ");
    scanf("%d", &aranan);

    while (bulunan_indis==-1 && solIndis <= sagIndis){
        ortaIndis = (solIndis + sagIndis)/2 ;
        if(aranan==dizi[ortaIndis]){
            bulunan_indis=1;
            break;
        }else if(aranan<dizi[ortaIndis]){
            sagIndis = ortaIndis - 1 ;
        }else if(aranan>dizi[ortaIndis]){
            solIndis = ortaIndis + 1;
        }

    }
    if(bulunan_indis>-1){
        printf("Bulundu ... Dizinin %d. indisindeki deger aranan sayiya esittir", ortaIndis);
    }else{
        printf("Aradiginiz sayi dizide bulunamadi!\n");
    }

    return 0;
}
