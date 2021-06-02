#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *Dosya;
  Dosya=fopen("ogrenci.txt","w");
    char ad[10];
    int ogr_no, Not,i=1;
    char  devam_mi;
    int ek=1000, eb=-1000, toplam=0, ogr_sayisi=0;
    float ortalama=0;

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
    printf("Kayıt işlemleri tamamlandı !\n");

    Dosya=fopen("ogrenci.txt","r");
    if (Dosya==NULL) {
        printf("Başarısız dosya okuma isteği!\n");
        exit(1);
    } else {
        while (!feof(Dosya)){
            fscanf(Dosya,"%d %s %d\n", &ogr_no, ad, &Not);
            if(Not>eb) eb=Not;
            if(Not<ek) ek=Not;
            if(Not)
                ogr_sayisi++;
            toplam+=Not;
        }

    }
    printf("Dosyadaki tüm veriler okundu !\n");
    fclose(Dosya);
    ortalama=(float)toplam/ogr_sayisi;
    printf("En Yuksek Not: %2d\n", eb);
    printf("En Kucuk Not: %2d\n", ek);
    printf("Sınıf Ortalaması: %4.1f\n", ortalama);

    return 0;
}
