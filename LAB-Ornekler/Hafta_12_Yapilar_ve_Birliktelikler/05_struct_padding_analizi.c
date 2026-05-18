#include <stdio.h>

typedef struct {
    char a;     // 1 byte
    int b;      // 4 byte
} Test_t;

// ❌ KÖTÜ: Büyükten küçüğe sıralanmamış
typedef struct {
    char  c;     // 1 B  → adres 0x00
    // [3 B padding]          0x01-0x03  ← BOŞA GİDEN ALAN!
    int   i;     // 4 B  → adres 0x04
    short s;     // 2 B  → adres 0x08
    // [2 B padding]          0x0A-0x0B  ← BOŞA GİDEN ALAN!
} Kotu_t;        // sizeof = 12 B  (sadece 7 B kullanılır, 5 B kayıp)

// ✅ İYİ: Büyükten küçüğe sıralanmış (padding minimize)
typedef struct {
    int   i;     // 4 B  → adres 0x00
    short s;     // 2 B  → adres 0x04
    char  c;     // 1 B  → adres 0x06
    // [1 B padding]          0x07       ← sadece 1 B kayıp!
} Iyi_t;         // sizeof = 8 B  (7 B kullanılır, 1 B kayıp)

int main() {
    printf("=== Bellek Hizalama (Alignment) ve Padding Analizi ===\n\n");
    
    printf("sizeof(Test_t) (char + int)      : %zu bayt (Beklenen: 5, Gerçek: 8)\n", sizeof(Test_t));
    printf("sizeof(Kotu_t) (char+int+short)  : %zu bayt (Kötü sıralama, Padding fazla)\n", sizeof(Kotu_t));
    printf("sizeof(Iyi_t) (int+short+char)   : %zu bayt (İyi sıralama, Padding az)\n\n", sizeof(Iyi_t));
    
    printf("--- Bellek Tasarrufu Oranı ---\n");
    printf("Aynı üyelerle iyi sıralama sayesinde bellekte %%%.0f kazanç sağlandı!\n", 
           ((12.0 - 8.0) / 12.0) * 100.0);
           
    return 0;
}
