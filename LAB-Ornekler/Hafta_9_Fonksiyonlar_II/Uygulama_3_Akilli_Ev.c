// Uygulama 3 Çözümü: Akıllı Ev Komut Sistemi
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("Hatali kullanim!\n");
        return 1;
    }
    int oda = atoi(argv[1]);
    int sicaklik = atoi(argv[2]);
    printf("%d numarali oda %d dereceye ayarlaniyor...\n", oda, sicaklik);
    return 0;
}
