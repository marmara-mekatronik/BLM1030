#include <stdio.h>
#include <stdlib.h>

enum Cinsiyet {
    Kadin = 1, Erkek
};
enum Sube {
    a1 = 1, b1, c1, d1
};

struct ogrenci {
    int OgrNo, OgrNot;
    char OgrAd[10];
    enum Cinsiyet OgrCinsiyet;
    enum Sube OgrSube;
};


void ogrenciDosyaYaz(struct ogrenci Ogr, const char *dosyaAdi);

void ogrenciDosyaOku(struct ogrenci Ogr, const char *dosyaAdi);

void ogrenciEnYuksekNot(struct ogrenci Ogr, const char *dosyaAdi);
//struct ogrenci ogrenciEnDusukNot(struct ogrenci Ogr, const char *dosyaAdi);


int main() {
    const char dosyaAdi[] = "ogrenci.txt";
    struct ogrenci Ogrenci_1;

    // ogrenciDosyaYaz(Ogrenci_1, dosyaAdi);
    ogrenciDosyaOku(Ogrenci_1, dosyaAdi);
    ogrenciEnYuksekNot(Ogrenci_1, dosyaAdi);

    return 0;
}

void ogrenciDosyaOku(struct ogrenci Ogr, const char *dosyaAdi) {
    FILE *DosyaG = fopen(dosyaAdi, "r");
    if (DosyaG == NULL) {
        puts("ogrenci.txt dosyasi acilamadi. !\n");
        exit(1);
    } else {
        puts("Öğrenciye ait bilgiler:\n");
        while (!feof(DosyaG)) {
            fscanf(DosyaG, "%d %d %d %s %d",
                   &Ogr.OgrSube, &Ogr.OgrCinsiyet, &Ogr.OgrNo, Ogr.OgrAd, &Ogr.OgrNot);
            printf("Sube: %d\t Cinsiyet: %d\t No: %d\t Ad: %s\t Not:%d\n",
                   Ogr.OgrSube, Ogr.OgrCinsiyet, Ogr.OgrNo, Ogr.OgrAd, Ogr.OgrNot);
        }
    }
}


void ogrenciDosyaYaz(struct ogrenci Ogr, const char *dosyaAdi) {
    int i = 1;
    char devam_mi;
    FILE *DosyaG = fopen(dosyaAdi, "w");
    if (DosyaG == NULL)
        puts("ogrenci.txt dosyasi acilamadi. !\n");
    else
        puts("Öğrenciye ait bilgileri giriniz:\n");

    do {
        printf("%d. ogrencinin Subesini girininiz(a1=1,b1=2,c1=3,d1=4): ", i);
        scanf("%d", &Ogr.OgrSube);
        printf("%d. ogrencinin Cinsiyetini girininiz(Kadin = 1, Erkek=2): ", i);
        scanf("%d", &Ogr.OgrCinsiyet);
        printf("%d. ogrencinin numarasini girininiz: ", i);
        scanf("%d", &Ogr.OgrNo);
        printf("%d. ogrencinin adini girininiz: ", i);
        scanf(" %s", Ogr.OgrAd);
        printf("%d. ogrencinin notunu girininiz: ", i);
        scanf("%d", &Ogr.OgrNot);
        fprintf(DosyaG, "%d %d %d %s %d\n",
                Ogr.OgrSube, Ogr.OgrCinsiyet, Ogr.OgrNo, Ogr.OgrAd, Ogr.OgrNot);
        printf("Devam etmek istiyormusunuz (E/e veya H/h) ? :");
        scanf(" %c", &devam_mi);
        i++;
    } while (devam_mi == 'E' || devam_mi == 'e');
    fclose(DosyaG);
    puts("Veriler Dosyaya yazildi...");
}

void ogrenciEnYuksekNot(struct ogrenci Ogr, const char *dosyaAdi) {
    int eb1 = -1, eb2 = -1, eb3 = -1, eb4 = -1;
    FILE *DosyaG = fopen(dosyaAdi, "r");
    if (DosyaG == NULL) {
        puts("ogrenci.txt dosyasi acilamadi. !\n");
        exit(1);
    } else {
        puts("Öğrenciye ait bilgiler:\n");
        while (!feof(DosyaG)) {
            fscanf(DosyaG, "%d %d %d %s %d",
                   &Ogr.OgrSube, &Ogr.OgrCinsiyet, &Ogr.OgrNo, Ogr.OgrAd, &Ogr.OgrNot);

            if (Ogr.OgrSube == 1) {
                if (Ogr.OgrNot > eb1) eb1 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 2) {
                if (Ogr.OgrNot > eb2) eb2 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 3) {
                if (Ogr.OgrNot > eb3) eb3 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 4) {
                if (Ogr.OgrNot > eb4) eb4 = Ogr.OgrNot;
            }
        }
        printf("Sube 1 En büyük Puan : %d\n", eb1);
        printf("Sube 2 En büyük Puan : %d\n", eb2);
        printf("Sube 3 En büyük Puan : %d\n", eb3);
        printf("Sube 4 En büyük Puan : %d\n", eb4);
    }
}
