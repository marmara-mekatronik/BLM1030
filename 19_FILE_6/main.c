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
    struct sinemaFilmi film = {"Titanic", 1997, 7.8, dram};
    char *dosyaAdi = "film.db";
    FILE *dosya = NULL;
    dosya = fopen(dosyaAdi, "wb+");
    if (dosya == NULL) {
        printf("%s dosyasi oluşturulamadı/açılamadı\n", dosyaAdi);
        return 0;
    } else {
        fwrite(&film, sizeof(film), 1, dosya);
        fclose(dosya);
    }

    struct sinemaFilmi film2;

    dosya = fopen(dosyaAdi, "rb+");
    if(dosya==NULL){
        printf("%s dosyasi oluşturulamadı/açılamadı\n", dosyaAdi);
        return 0;
    }else{
        fread(&film2, sizeof(film), 1, dosya);
        fclose(dosya);
        printf("->film.db Dosyasından okunan film bilgileri<-\n");
        printf("____________________________________\n");
        puts(film2.ad);
        printf("%d\n",film2.yapimYili);
        printf("%f\n",film2.imdb);
    }


    return 0;
}
