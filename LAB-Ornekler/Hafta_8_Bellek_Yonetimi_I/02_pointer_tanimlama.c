#include <stdio.h>

int main() {
    int x = 25;       // Standart degisken. Icinde 25 var. RAM adresi: 0x1000

    // POINTER TANIMLAMA: "Ben int bir degiskenin adresini tutacağım!"
    int *ptr_isaretci; 

    // POINTER'A ADRES YUKLEME
    ptr_isaretci = &x;  // ptr_isaretci'nin icinde artik 0x1000 degeri var.

    // POINTER ILE ORIJINAL VERIYE UZAKTAN ERISIM (Dereference)
    *ptr_isaretci = 99; // 0x1000 adresine git, icindeki veriyi PARÇALA ve 99 yap.

    printf("x'in yeni degeri: %d\n", x); // x artik 99 oldu!

    return 0;
}
