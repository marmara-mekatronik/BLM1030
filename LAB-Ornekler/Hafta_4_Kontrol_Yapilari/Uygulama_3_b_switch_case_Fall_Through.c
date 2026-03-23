#include <stdio.h>

int main() {
    // Fall-through örneği - karakter bazlı menü
    printf("\n=== FALL-TROUGH ORNEGI ===\n");
    char opsiyon;
    printf("Bir harf giriniz (A, B, C, D, E): ");
    scanf(" %c", &opsiyon);
    
    switch (opsiyon) {
        case 'A':
        case 'B':
        case 'C':
            printf("A, B veya C sectiniz. Bunlar ana opsiyonlardir.\n");
            if (opsiyon == 'A') printf("A secenegi icin ekstra ayarlar yapiliyor...\n");
            break;  // Bu break, A,B,C'nin tamamı için
            
        case 'D':
            printf("D sectiniz.\n");
            // break yok - fall-through olacak!
        case 'E':
            printf("D veya E sectiniz. Bunlar yan opsiyonlardir.\n");
            break;
            
        default:
            printf("Gecersiz harf!\n");
    }
    
    return 0;
}
