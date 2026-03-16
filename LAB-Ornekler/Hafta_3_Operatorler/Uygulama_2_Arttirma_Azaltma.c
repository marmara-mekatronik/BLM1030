#include <stdio.h>

int main() {
    printf("=== PRE-INCREMENT vs POST-INCREMENT ===\n\n");
    
    int i = 5, j = 5;
    int sonuc1, sonuc2;
    
    printf("Başlangıç: i = %d, j = %d\n", i, j);
    
    // Post-increment
    sonuc1 = i++;
    printf("sonuc1 = i++ -> sonuc1 = %d, i = %d (i sonra arttı)\n", sonuc1, i);
    
    // Pre-increment
    sonuc2 = ++j;
    printf("sonuc2 = ++j -> sonuc2 = %d, j = %d (j önce arttı)\n\n", sonuc2, j);
    
    // Döngü içinde kullanım
    printf("Döngü örnekleri:\n");
    printf("Post-increment ile:\n");
    i = 1;
    while (i <= 3) {
        printf("i = %d (kullanım anı), ", i++);
        printf("i'nin yeni değeri: %d\n", i);
    }
    
    printf("\nPre-increment ile:\n");
    j = 1;
    while (j <= 3) {
        printf("j = %d (kullanım anı), ", ++j);
        printf("j'nin yeni değeri: %d\n", j);
    }
    
    // UYARI: Aynı ifadede birden fazla yan etki
    printf("\n=== UYARI: TANIMSIZ DAVRANIŞ ===\n");
    int k = 5;
    // int belirsiz = k++ + ++k;  // YORUM SATIRINDAN ÇIKARMAYIN! (undefined behavior)
    printf("k++ + ++k gibi ifadeler tanımsızdır. Derleyiciye göre değişir!\n");
    
    return 0;
}
