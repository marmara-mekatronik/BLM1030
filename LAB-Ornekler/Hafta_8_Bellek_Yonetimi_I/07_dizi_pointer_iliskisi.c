#include <stdio.h>

int main() {
    int dizi[5] = {10, 20, 30, 40, 50};

    // "dizi" demek, gizlice "&dizi[0]" demektir! İspat edelim:
    printf("Dizinin Simgesi (Ismi): %p\n", dizi);
    printf("0. Elemanın  Adresi   : %p\n", &dizi[0]); 

    // ÇIKTILAR BİREBİR AYNIDIR!
    return 0;
}
