#include <stdio.h>

void tahta_ciz(int satir,int sutun);
int main() {
    tahta_ciz(8,8);
    return 0;
}

void tahta_ciz(int satir,int sutun){
    int k=1;
    for (int i = satir; i > 0 ; --i) {
        for (int j = sutun; j > 0 ; --j) {
            if(k==1){
                printf(" [ ] ");
            }
                else{
                printf(" [X] ");
            }
                k*=-1;
        }

        if(sutun%2==0){
            k*=-1;
        }
        printf(" \n ");
    }

}
