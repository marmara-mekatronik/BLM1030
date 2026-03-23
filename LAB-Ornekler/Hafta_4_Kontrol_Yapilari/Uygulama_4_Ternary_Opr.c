#include <stdio.h>

int main() {
    int a, b;
    int max, min, mutlak;
    int sayi;
    
    printf("=== TERNARY OPERATOR ORNEKLERI ===\n\n");
    
    // Örnek 1: İki sayıdan büyük olanı bulma
    printf("Iki sayi giriniz: ");
    scanf("%d %d", &a, &b);
    
    max = (a > b) ? a : b;
    min = (a < b) ? a : b;
    
    printf("Sayilar: %d ve %d\n", a, b);
    printf("Buyuk olan: %d\n", max);
    printf("Kucuk olan: %d\n\n", min);
    
    // Örnek 2: Mutlak değer hesaplama
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    mutlak = (sayi >= 0) ? sayi : -sayi;
    printf("|%d| = %d\n\n", sayi, mutlak);
    
    // Örnek 3: Çift/Tek kontrolü
    printf("%d sayisi %s\n", sayi, (sayi % 2 == 0) ? "cifttir" : "tektir");
    
    // Örnek 4: Sınır kontrolü
    int deger = 150;
    int sinirli = (deger > 100) ? 100 : (deger < 0) ? 0 : deger;
    printf("\nDeger: %d, Sinirli deger: %d\n", deger, sinirli);
    
    // Örnek 5: if-else vs ternary karşılaştırması
    int not = 75;
    char *harf_notu;
    
    // if-else ile
    if (not >= 90) harf_notu = "AA";
    else if (not >= 80) harf_notu = "BA";
    else if (not >= 70) harf_notu = "BB";
    else if (not >= 60) harf_notu = "CB";
    else if (not >= 50) harf_notu = "CC";
    else harf_notu = "FF";
    printf("if-else ile: %d -> %s\n", not, harf_notu);
    
    // ternary ile (karmaşık - önerilmez!)
    harf_notu = (not >= 90) ? "AA" : 
                (not >= 80) ? "BA" : 
                (not >= 70) ? "BB" : 
                (not >= 60) ? "CB" : 
                (not >= 50) ? "CC" : "FF";
    printf("ternary ile: %d -> %s\n", not, harf_notu);
    printf("(Not: Karmasik ternary kullanimi okunabilirligi azaltir)\n");
    
    return 0;
}
