#include <stdio.h>

int main() {
    char *parametreDosyaAdi = "parametre.txt";
    char *sonucDosyaAdi = "sonuc.txt";

    FILE *parametreDosyasi = NULL;
    parametreDosyasi = fopen(parametreDosyaAdi, "r");

    if (parametreDosyasi == NULL) {
        printf("parametre dosyası bulunamadı...\n");
        return 0;
    } else {
        printf("%s parametre dosyası bulundu, veriler okunuyor...\n", parametreDosyaAdi);

        int kNo, Sicaklik, Kademe, AktifPasif;
        char SogukSicak;
        fscanf(parametreDosyasi, "%d %d %d %d %c", &kNo, &AktifPasif, &Sicaklik,
               &Kademe, &SogukSicak);

        fclose(parametreDosyasi);

        FILE *sonucDosyasi = NULL;
        sonucDosyasi = fopen(sonucDosyaAdi, "w");
        if (sonucDosyasi != NULL) {
            switch (AktifPasif) {
                case 0:
                    AktifPasif = 1;
                    fprintf(sonucDosyasi, "%d nolu klima Açıkken Kapatıldı.", kNo);
                    break;
                case 1:
                    AktifPasif = 0;
                    fprintf(sonucDosyasi, "%d nolu klima Kapalıyken Açıldı."
                                          "Sıcaklık: %d , Kademe: %d , "
                                          "Soğuk/Sıcak: %c olarak "
                                          "SET edildi\n", kNo, Sicaklik, Kademe, SogukSicak);
                    break;
                default:
                    printf("Yanlış Parametre Bilgisi");
                    fclose(sonucDosyasi);
                    return 0;
            }
            printf("\nYapılan işlemler %s dosyasına yazıldı", sonucDosyaAdi);
            fclose(sonucDosyasi);
        } else {
            printf("sonuc dosyası oluşturulamadı/açılamadı\n");
            return 0;
        }
    }
    return 0;
}
