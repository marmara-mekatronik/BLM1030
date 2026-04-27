#include <stdio.h>

int main() {
    int *ptr = NULL; // NULL adresi 0'dır, "Bir Yeri Gösterme" anlamına gelir.

    if (ptr != NULL) {
        *ptr = 10; // Güvenli (Sadece geçerliyse eriş)
    } else {
        printf("Pointer NULL, erisim engellendi.\n");
    }

    return 0;
}
