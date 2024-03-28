#include <stdio.h>

#define SATIR 3
#define SUTUN 3

int main() {
   int matris1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int matris2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
   int sonuc[3][3]={0};
    for (int i = 0; i < SATIR ; ++i) {
        for (int j = 0; j < SUTUN ; ++j) {
            sonuc[i][j]=matris1[i][j]+matris2[i][j];
        }
    }
    for (int i = 0; i < SATIR; ++i) {
        for (int j = 0; j < SUTUN; ++j) {
            printf("%d \t",sonuc[i][j]);
        }
        printf("\n");
    }
    return 0;
}
