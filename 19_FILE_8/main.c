#include <stdio.h>
#include <stdlib.h>

enum Cinsiyet {
    Kadin = 1, Erkek
};
enum Sube {
    a1 = 1, b1, c1, d1
};
struct ogrenci {
    int OgrNo;
    float OgrNot;
    char OgrAd[10];
    enum Cinsiyet OgrCinsiyet;
    enum Sube OgrSube;
};

void ogrenciDosyaYaz(struct ogrenci Ogr, const char *dosyaAdi);

void ogrenciDosyaOku(struct ogrenci Ogr, const char *dosyaAdi);

void ogrenciEnYuksekNot(struct ogrenci Ogr, const char *dosyaAdi);

void ogrenciEnDusukNot(struct ogrenci Ogr, const char *dosyaAdi);

int main() {
    const char dosyaAdi[] = "ogrenci.txt";
    struct ogrenci Ogrenci_1;

    ogrenciDosyaYaz(Ogrenci_1, dosyaAdi);
    ogrenciDosyaOku(Ogrenci_1, dosyaAdi);
    ogrenciEnYuksekNot(Ogrenci_1, dosyaAdi);
    ogrenciEnDusukNot(Ogrenci_1, dosyaAdi);

    return 0;
}

void ogrenciDosyaOku(struct ogrenci Ogr, const char *dosyaAdi) {
    FILE *DosyaG = fopen(dosyaAdi, "r");
    if (DosyaG == NULL) {
        puts("ogrenci.txt dosyasi acilamadi. !\n");
        exit(1);
    } else {
        puts("Ogrenciye ait bilgiler:\n");
        while (fscanf(DosyaG, "%d %d %d %s %f",
                     &Ogr.OgrSube, &Ogr.OgrCinsiyet, &Ogr.OgrNo, Ogr.OgrAd, &Ogr.OgrNot) == 5) {
            printf("Sube: %d\t Cinsiyet: %s\t No: %d\t Ad: %s\t Not:%.2f\n",
                   Ogr.OgrSube, Ogr.OgrCinsiyet == Erkek ? "Erkek" : "Kadin", Ogr.OgrNo, Ogr.OgrAd, Ogr.OgrNot);
        }
    }
    fclose(DosyaG);
}


void ogrenciDosyaYaz(struct ogrenci Ogr, const char *dosyaAdi) {
    int i = 1;
    char devam_mi;
    FILE *DosyaG = fopen(dosyaAdi, "w");
    if (DosyaG == NULL)
        puts("ogrenci.txt dosyasi acilamadi. !\n");
    else
        puts("Ogrenciye ait bilgileri giriniz:\n");

    do {
        printf("%d. Ogrencinin subesini girininiz(a1=1,b1=2,c1=3,d1=4): ", i);
        scanf("%d", &Ogr.OgrSube);
        printf("%d. Ogrencinin cinsiyetini girininiz(Kadin = 1, Erkek=2): ", i);
        scanf("%d", &Ogr.OgrCinsiyet);
        printf("%d. Ogrencinin numarasini girininiz: ", i);
        scanf("%d", &Ogr.OgrNo);
        printf("%d. Ogrencinin adini girininiz: ", i);
        scanf(" %s", Ogr.OgrAd);
        printf("%d. Ogrencinin notunu girininiz: ", i);
        scanf("%f", &Ogr.OgrNot);
        getchar();
        printf("Devam etmek istiyor musunuz (E/e veya H/h) ? :");
        scanf(" %c", &devam_mi);
        fprintf(DosyaG, "%d %d %d %s %f\n",
                Ogr.OgrSube, Ogr.OgrCinsiyet, Ogr.OgrNo, Ogr.OgrAd, Ogr.OgrNot);

        i++;
    } while (devam_mi == 'E' || devam_mi == 'e');
    fclose(DosyaG);
    puts("Veriler Dosyaya yazildi...\n");
}

void ogrenciEnYuksekNot(struct ogrenci Ogr, const char *dosyaAdi) {
    float eb1 = -1, eb2 = -1, eb3 = -1, eb4 = -1;
    FILE *DosyaG = fopen(dosyaAdi, "r");
    if (DosyaG == NULL) {
        puts("ogrenci.txt dosyasi acilamadi. !\n");
        exit(1);
    } else {
        puts("\nSubelere ait en buyuk not bilgileri:\n");
        while (!feof(DosyaG)) {
            fscanf(DosyaG, "%d %d %d %s %f",
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
        if(eb1==-1) printf("Sube 1 de ogrenci kaydi bulunamadi!\n");
        else  printf("Sube 1 En buyuk Puan : %.2f\n", eb1);

        if(eb2==-1) printf("Sube 2 de ogrenci kaydi bulunamadi!\n");
        else printf("Sube 2 En buyuk Puan : %.2f\n", eb2);

        if(eb3==-1) printf("Sube 3 de ogrenci kaydi bulunamadi!\n");
        else printf("Sube 3 En buyuk Puan : %.2f\n", eb3);

        if(eb4==-1) printf("Sube 4 de ogrenci kaydi bulunamadi!\n");
        else printf("Sube 4 En buyuk Puan : %.2f\n", eb4);
    }
    fclose(DosyaG);
}

void ogrenciEnDusukNot(struct ogrenci Ogr, const char *dosyaAdi) {
    float ek1 = 101, ek2 = 101, ek3 = 101, ek4 = 101;
    FILE *DosyaG = fopen(dosyaAdi, "r");
    if (DosyaG == NULL) {
        puts("ogrenci.txt dosyasi acilamadi. !\n");
        exit(1);
    } else {
        puts("\nSubelere ait en kucuk not bilgileri:\n");
        while (!feof(DosyaG)) {
            fscanf(DosyaG, "%d %d %d %s %f",
                   &Ogr.OgrSube, &Ogr.OgrCinsiyet, &Ogr.OgrNo, Ogr.OgrAd, &Ogr.OgrNot);

            if (Ogr.OgrSube == 1) {
                if (Ogr.OgrNot < ek1) ek1 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 2) {
                if (Ogr.OgrNot < ek2) ek2 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 3) {
                if (Ogr.OgrNot < ek3) ek3 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 4) {
                if (Ogr.OgrNot < ek4) ek4 = Ogr.OgrNot;
            }
        }
        if(ek1==101) printf("Sube 1 de ogrenci kaydi bulunamadi!\n");
        else  printf("Sube 1 En dusuk Puan : %.2f\n", ek1);

        if(ek2==101) printf("Sube 2 de ogrenci kaydi bulunamadi!\n");
        else printf("Sube 2 En dusuk Puan : %.2f\n", ek2);

        if(ek3==101) printf("Sube 3 de ogrenci kaydi bulunamadi!\n");
        else printf("Sube 3 En dusuk Puan : %.2f\n", ek3);

        if(ek4==101) printf("Sube 4 de ogrenci kaydi bulunamadi!\n");
        else printf("Sube 4 En dusuk Puan : %.2f\n", ek4);
    }
    fclose(DosyaG);
}
