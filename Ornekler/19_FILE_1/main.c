#include <stdio.h>
#include <stdlib.h>


int main() {
  FILE *Dosya;
  Dosya=fopen("ogrenci.txt","w");
    char ad[10];
    int ogr_no, Not,i=1;
    char  devam_mi;

    if (Dosya==NULL) {
        printf("Başarısız dosya oluşturma isteği!\n");
        exit(1);
    } else {
        printf("Dosya oluşturuldu !\n");

        do {
            printf("%d. öğrencinin numarasi :", i);
            scanf("%d",&ogr_no);
            printf("%d. öğrencinin adı :", i);
            scanf("%s",ad);
            printf("%d. öğrencinin notu :", i);
            scanf("%d",&Not);
            printf("\n");
            fprintf(Dosya,"%5d %10s %3d\n", ogr_no, ad, Not);
            printf("Devam etmek istermisiniz (E/e veya H/h)?");
            scanf(" %c", &devam_mi );
            i++;
        } while (devam_mi=='E'||devam_mi=='e');
    }
    fclose(Dosya);
    printf("Kayıt işlemleri tamamlandı !");

    return 0;
}
