#include <stdio.h>

int main() {
    int yas;
    char cinsiyet;
    int ehliyet_yas = 18;
    
    printf("=== EHLIYET BASVURU KONTROLU ===\n\n");
    
    // Kullanıcıdan bilgi al
    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);
    
    printf("Cinsiyetinizi giriniz (E/K): ");
    scanf(" %c", &cinsiyet);  // Boşluk önemli!
    
    printf("\n--- SONUÇ ---\n");
    
    // Temel if
    if (yas >= ehliyet_yas) {
        printf("Yas kriteri uygun: %d yas (minimum: %d)\n", yas, ehliyet_yas);
    }
    
    // if-else
    if (yas >= ehliyet_yas) {
        printf("Ehliyet alabilirsiniz.\n");
    } else {
        printf("Ehliyet alamazsiniz. %d yil daha beklemeniz gerekiyor.\n", 
               ehliyet_yas - yas);
    }
    
    // Mantıksal operatörlerle birleştirilmiş koşullar
    if (yas >= ehliyet_yas && (cinsiyet == 'E' || cinsiyet == 'K')) {
        printf("Tum kriterler uygun. Basvuru yapabilirsiniz.\n");
    } else if (yas < ehliyet_yas) {
        printf("Yas kriterini saglamiyorsunuz.\n");
    } else if (cinsiyet != 'E' && cinsiyet != 'K') {
        printf("Gecersiz cinsiyet girdiniz.\n");
    }
    
    // if içinde başka if - iç içe yapı
    if (yas >= ehliyet_yas) {
        if (cinsiyet == 'E') {
            printf("Erkek adaylar icin ek belge gerekmez.\n");
        } else if (cinsiyet == 'K') {
            printf("Kadin adaylar icin ek form doldurmaniz gerekiyor.\n");
        }
    }
    
    return 0;
}
