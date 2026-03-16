#include <stdio.h>
#include <stdlib.h>

int main() {
    //int matris[2][3];
    int **mat;
    int n,m;
    printf("satir sayisini giriniz : ");
    scanf("%d",&n);
    printf("sütün sayisini giriniz : ");
    scanf("%d",&m);

    mat = (int**) malloc(n* sizeof(int));

    if(mat==NULL){
        printf("%s:%d>Dizi için gerekli bellek ayrılamamıştır.\n", __FILE__, __LINE__);
        exit(0);
    } else {

        for (int i = 0; i < n; ++i) {
            mat[i] = (int *) malloc(m * sizeof(int));
        }
        for (int k = 0; k < n; ++k) {
            printf("%d satir bellek adresi : %p\n", k+1,mat[k]);
        }
    }
    return 0;
}
