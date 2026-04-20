#include <stdio.h>

int main() {
    // 'i' yalnızca for döngüsü bloğunda geçerlidir
    for (int i = 0; i < 5; i++) {
        int temp = i * 10;
        printf("i=%d, temp=%d\n", i, temp);
    }
    
    // ✅ Döngü sonrasında da 'j'ye erişim gerekiyorsa, dış kapsamda tanımlayın:
    int j;
    for (j = 0; j < 5; j++) { /* ... */ }
    printf("Son j: %d\n", j);   // Geçerli — j, main bloğunda tanımlı
    
    return 0;
}
