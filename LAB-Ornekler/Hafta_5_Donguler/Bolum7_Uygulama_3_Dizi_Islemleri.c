#include <stdio.h>

int main() {
    int n = 5;
    int dizi[] = {4, 2, 5, 1, 3};

    printf("Orijinal dizi: ");
    for(int i=0; i<n; i++) printf("%d ", dizi[i]);
    printf("\n");

    // Diziyi ters çevirme (Swap yöntemi)
    for (int i = 0; i < n / 2; i++) {
        int gecici = dizi[i];
        dizi[i] = dizi[n - 1 - i];
        dizi[n - 1 - i] = gecici;
    }

    printf("Ters cevrilmis: ");
    for(int i=0; i<n; i++) printf("%d ", dizi[i]);
    printf("\n");

    // Bubble Sort - O(n²) sıralama algoritması
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }

    printf("Siralanmis dizi: ");
    for(int i=0; i<n; i++) printf("%d ", dizi[i]);
    printf("\n");

    return 0;
}
