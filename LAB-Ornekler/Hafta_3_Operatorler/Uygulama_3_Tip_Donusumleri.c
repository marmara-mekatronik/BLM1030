#include <stdio.h>

int main() {
    printf("=== TAMSAYI BOLMESI ve TIP DONUSUMLERI ===\n\n");
    
    int a = 21, b = 5;
    float sonuc;
    
    // Tamsayı bölmesi
    sonuc = a / b;
    printf("1. int / int = int: %d / %d = %f (beklenen 4.2 değil!)\n", a, b, sonuc);
    printf("   Açıklama: Önce tamsayı bölmesi (21/5=4), sonra float'a atama\n\n");
    
    // Cast ile düzeltme
    sonuc = (float)a / b;
    printf("2. (float)/int = float: (float)%d / %d = %f\n", a, b, sonuc);
    
    sonuc = a / (float)b;
    printf("3. int/(float) = float: %d / (float)%d = %f\n\n", a, b, sonuc);
    
    // Mod operatörü
    int kalan = a % b;
    printf("Mod operatörü: %d %% %d = %d (kalan)\n\n", a, b, kalan);
    
    // Karışık tip ifadeleri
    int x = 5;
    double y = 2.0;
    double z = x + y;  // x otomatik double'a çevrilir
    printf("int + double = double: %d + %.1f = %.1f\n\n", x, y, z);
    
    // Büyük sayılarla taşma örneği
    int buyuk1 = 1000000;
    int buyuk2 = 1000000;
    int tasma = buyuk1 * buyuk2 / 1000000;
    printf("TAŞMA ÖRNEĞİ:\n");
    printf("%d * %d / 1000000 = %d (beklenen 1000000)\n", buyuk1, buyuk2, tasma);
    
    long long dogru = (long long)buyuk1 * buyuk2 / 1000000;
    printf("Cast ile düzeltme: (long long)%d * %d / 1000000 = %lld\n\n", buyuk1, buyuk2, dogru);
    
    return 0;
}
