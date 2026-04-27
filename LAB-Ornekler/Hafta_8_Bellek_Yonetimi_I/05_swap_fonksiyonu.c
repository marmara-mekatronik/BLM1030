#include <stdio.h>

void swap(int *a, int *b) {
    int gecici = *a;   // a'nın gösterdiği değeri yedekle
    *a = *b;           // b'nin değerini a'ya yaz
    *b = gecici;       // yedeklenen değeri b'ye yaz
}

int main() {
    int motor1_hiz = 100, motor2_hiz = 250;
    printf("Oncesi: M1=%d, M2=%d\n", motor1_hiz, motor2_hiz);
    
    swap(&motor1_hiz, &motor2_hiz);  // Adreslerini gönder
    
    printf("Sonrasi: M1=%d, M2=%d\n", motor1_hiz, motor2_hiz);
    // Çıktı: M1=250, M2=100 — Başarıyla takas edildi!
    return 0;
}
