#include <stdio.h>

int main() {
    int dizi[25]={2,3,4,9,12,18,28,34,36,43,46,48,49,51,52,53,56,57,69,72,74,85,94,95,97};
    int aranan;
    int bulundu=0;
    int solIndis=0, sagIndis=24;
    int ortaIndis=0;

printf("Dizi içerisinde arayacağınız sayıyı giriniz: ");
scanf("%d",&aranan);

while(bulundu==0 && solIndis <= sagIndis){
    ortaIndis = (solIndis + sagIndis)/ 2 ;
    if (aranan==dizi[ortaIndis]){
        bulundu=1;
        break;
    } else if(aranan < dizi[ortaIndis]) {
        sagIndis = ortaIndis - 1;
    } else if(aranan > dizi[ortaIndis]){
        solIndis= ortaIndis +1 ;
    }
}
if(bulundu) {
    printf("Bulundu... Dizinin %d. indisindeki deger aranan sayiya esittir ", ortaIndis);
}
else{
    printf("Aradiginiz sayi dizide bulunamadi!\n");
}
    return 0;
}
