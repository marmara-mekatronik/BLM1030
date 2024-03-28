#include <stdio.h>

#define SATIR 3
#define SUTUN 3

int main() {
   int matris1[SATIR][SUTUN]={{1,2,3},{4,5,6},{7,8,9}};
   int matris2[SATIR][SUTUN]={{9,8,7},{6,5,4},{3,2,1}};
   int sonuc[SATIR][SUTUN]={0};
   
   // Matris çarpımı hesaplama
    for (int i = 0; i < SATIR ; ++i) {
        for (int j = 0; j < SUTUN ; ++j) {
            for (int k = 0; k < SUTUN; ++k) {
                sonuc[i][j]+=matris1[i][k]*matris2[k][j];
            }
        }
    }
    
    // Sonucu ekrana yazdırma
    printf("Matris Çarpımı:\n");
    for (int i = 0; i < SATIR; ++i) {
        for (int j = 0; j < SUTUN; ++j) {
            printf("%d\t",sonuc[i][j]);
        }
        printf("\n");
    }
    return 0;
}
