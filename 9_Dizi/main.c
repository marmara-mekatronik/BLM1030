#include <stdio.h>

int main() {
    int grafik[10]={19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int i,j;

    for (i=0; i<10; i++){
        printf("%d. elemaninin degeri : %3d  : ",i+1,grafik[i]);
        for (j=0;j < grafik[i];j++){

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
