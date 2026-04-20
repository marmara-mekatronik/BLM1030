#include <stdio.h>
#include <stdlib.h>

int main() {
    int mesafe;
    printf("Lutfen guvenli mesafe girin (cm): ");
    scanf("%d", &mesafe);
    
    if (mesafe <= 0) {
        printf("HATA: Gecersiz mesafe girdisi!\n");
        return EXIT_FAILURE;   // İşletim sistemine hata bildirimi (1)
    }
    
    printf("Sistem calisiyor. Mesafe: %d cm\n", mesafe);
    return EXIT_SUCCESS;       // Başarı bildirimi (0)
}
