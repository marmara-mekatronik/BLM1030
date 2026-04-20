#include <stdio.h>

// HATA 1: Prototip unutulmuş
// int topla(int a, int b); // Çözüm: Bu satırı aktif edin

int main() {
    // printf("Topla: %d\n", topla(3, 5)); // ❌ 'topla' tanınmıyor (Derleme Hatası)
    
    // HATA 4: void fonksiyon sonucu atanmış
    // void selamla() { printf("Merhaba!\n"); }
    // int x = selamla(); // ❌ void fonksiyondan değer alınamaz (Derleme Hatası)
    
    printf("Sik karsilasilan derleme hatalari bu dosyada yorum satiri olarak belirtilmistir.\n");
    return 0;
}

int topla(int a, int b) { return a + b; }

// HATA 5: return eksik
int kare(int n) {
    int sonuc = n * n;
    // ❌ return yazılmamış — derleyici uyarısı
    // return sonuc; // Çözüm: Bu satırı aktif edin
}
