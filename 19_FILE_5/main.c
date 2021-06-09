#include <stdio.h>

int main() {
char *parametreDosyaAdi="parametre.txt";
char *sonucDosyaAdi="sonuc.txt";

FILE* parametreDosyasi = NULL;
parametreDosyasi= fopen(parametreDosyaAdi,"r");
if(parametreDosyasi==NULL){
    printf("parametre dosyası bulunamadı...\n");
    return 0;
}else {
    printf("%s parametre dosyası bulundu, veriler okunuyor.\n", parametreDosyaAdi);

    int kNo, Sicaklik, Kademe, AktifPasif=0;
    char SogukSicak;
    fscanf(parametreDosyasi, "%d %d %d %d %c", &kNo, &AktifPasif, &Sicaklik, &Kademe, &SogukSicak);

    FILE *sonucDosyasi = NULL;
    if ((sonucDosyasi = fopen(sonucDosyaAdi, "w")) != NULL) {
        switch (AktifPasif) {
            case 0:
                AktifPasif = 1;
                break;
            case 1:
                AktifPasif = 0;
                break;
            default:
                printf("Yanlış Parametre Bilgisi");
                return 0;
        }
    }
    if (AktifPasif == 0) {
        fprintf(sonucDosyasi, "%d nolu klima Açıkken Kapatıldı.", kNo);
    } else {
        fprintf(sonucDosyasi, "%d nolu klima Kapalıyken Kapatıldı. "
                              "Sıcaklık : %d , Kademe: %d , "
                              "Soguk/Sıcak: %c olarak SET edildi\n", kNo, Sicaklik, Kademe, SogukSicak);
        printf("Gerekli işlemler yapıldı.\n");
        
    }
    fclose(sonucDosyasi);
}
    fclose(parametreDosyasi);
    
    return 0;
}
