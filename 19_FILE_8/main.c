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
    int ek1 = -1, ek2 = -1, ek3 = -1, ek4 = -1;
    FILE *DosyaG = fopen(dosyaAdi, "r");
    if (DosyaG == NULL) {
        puts("ogrenci.txt dosyasi acilamadi. !\n");
        exit(1);
    } else {
        puts("Şubelere ait en büyük not bilgileri:\n");
        while (!feof(DosyaG)) {
            fscanf(DosyaG, "%d %d %d %s %d",
                   &Ogr.OgrSube, &Ogr.OgrCinsiyet, &Ogr.OgrNo, Ogr.OgrAd, &Ogr.OgrNot);

            if (Ogr.OgrSube == 1) {
                if (Ogr.OgrNot > ek1) ek1 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 2) {
                if (Ogr.OgrNot > ek2) ek2 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 3) {
                if (Ogr.OgrNot > ek3) ek3 = Ogr.OgrNot;
            } else if (Ogr.OgrSube == 4) {
                if (Ogr.OgrNot > ek4) ek4 = Ogr.OgrNot;
            }
        }
        printf("Sube 1 En büyük Puan : %d\n", ek1);
        printf("Sube 2 En büyük Puan : %d\n", ek2);
        printf("Sube 3 En büyük Puan : %d\n", ek3);
        printf("Sube 4 En büyük Puan : %d\n", ek4);
    }
}

void ogrenciEnDusukNot(struct ogrenci Ogr, const char *dosyaAdi) {
    int ek1 = 101, ek2 = 101, ek3 = 101, ek4 = 101;
    FILE *DosyaG = fopen(dosyaAdi, "r");
    if (DosyaG == NULL) {
        puts("ogrenci.txt dosyasi acilamadi. !\n");
        exit(1);
    } else {
        puts("Şubelere ait en küçük not bilgileri:\n");
        while (!feof(DosyaG)) {
            fscanf(DosyaG, "%d %d %d %s %d",
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
        printf("Sube 1 En küçük Puan : %d\n", ek1);
        printf("Sube 2 En küçük Puan : %d\n", ek2);
        printf("Sube 3 En küçük Puan : %d\n", ek3);
        printf("Sube 4 En küçük Puan : %d\n", ek4);
    }
}
