#include <stdio.h>

int main() {
    int dizi[3] = {10, 20, 30};
    int *ptr = dizi; // 0. elemanın adresi

    printf("0. Eleman: %d (Adres: %p)\n", *ptr, ptr);
    ptr++; // Bir sonraki int hücresine (4 byte ileri) git
    printf("1. Eleman: %d (Adres: %p)\n", *ptr, ptr);

    // *(ptr + i) aslında dizi[i] ile aynı şeydir!
    printf("2. Eleman: %d\n", *(dizi + 2)); 

    return 0;
}
