#include <stdio.h>

int main() {
    enum filmTur {
        dram = 1,
        komedi,
        gerilim,
        korku
    };

    struct sinemaFilmi {
        char ad[100];
        int yapimYili;
        float imdb;
        enum filmTur Tur;
    };
    // struct sinemaFilmi filmx[5] = {{"Titanic", 1997, 7.8, dram}, {"Togo", 2019, 8.2, dram}};
    struct sinemaFilmi film1 = {"Titanic", 1997, 7.8, dram};
    struct sinemaFilmi film2 = {"Togo", 2019, 8.2, dram};
    struct sinemaFilmi film3 = {"Green Book", 2018, 8.3, komedi};
    struct sinemaFilmi film4 = {"Alien", 1979, 8.1, korku};
    char *dosyaAdi = "film.db";
    FILE *dosya = NULL;
    dosya = fopen(dosyaAdi, "wb+");
    if (dosya == NULL) {
        printf("%s dosyasi oluşturulamadı/açılamadı\n", dosyaAdi);
        return 0;
    } else {
        fwrite(&film1, sizeof(film1), 1, dosya);
        fwrite(&film2, sizeof(film2), 1, dosya);
        fwrite(&film3, sizeof(film3), 1, dosya);
        fwrite(&film4, sizeof(film4), 1, dosya);
        fclose(dosya);
    }

    struct sinemaFilmi filmoku;

    dosya = fopen(dosyaAdi, "rb+");
    if(dosya==NULL){
        printf("%s dosyasi oluşturulamadı/açılamadı\n", dosyaAdi);
        return 0;
    }else{
        rewind(dosya);
        printf("->film.db Dosyasından okunan film bilgileri<-\n");
        printf("____________________________________\n");
        for (int i = 0; i < 4; ++i) {
            fread(&filmoku, sizeof(film1), 1, dosya);
            puts(filmoku.ad);
            printf("%d\n",filmoku.yapimYili);
            printf("%.2f\n",filmoku.imdb);
            printf("Dosya Konum Bilgisi: %ld . byte \n", ftell(dosya));
            printf("____________________________________\n");
        }
        fclose(dosya);
    }
    return 0;
}
