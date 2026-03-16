#include <stdio.h>

int main() {
    int tamsayi = 20 ;
    int *isaretci = &tamsayi;
    int **isaretcinin_isaretcisi = &isaretci;

    printf("Degiskenin icerigi : %d\n", tamsayi);
    printf("Degiskenin Adresi : %p\n", isaretci);
    printf("Degiskenin Adresini Tutanan işaretcinin adresi : %p\n", isaretcinin_isaretcisi);
    printf("Degiskenin Adresini Tutanan işaretcinin adresin adresi : %p\n", &isaretcinin_isaretcisi);

    *isaretci = 30;

    printf("Degiskenin icerigi : %d\n", tamsayi);
    **isaretcinin_isaretcisi = 50;
    printf("Degiskenin icerigi : %d\n", tamsayi);

    printf("degiskenin kapladigi alan : %d \n", sizeof(tamsayi));
    printf("isaretci degiskenin kapladigi alan : %d \n", sizeof(isaretci));
    printf("isaretcinin_isaretcisi degiskenin kapladigi alan : %d ", sizeof(isaretcinin_isaretcisi));

    return 0;

}
