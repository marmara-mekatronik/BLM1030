#include <stdio.h>

int main() {
    FILE *DosyaG;
    int OgrNo,OgrNot,i=0;
    char OgrAd[10];
    const int OgrSayi=2;

    DosyaG = fopen("ogrenci.txt", "w");
    if(DosyaG==NULL)
        puts("ogrenci.txt dosyasi acilamadi. !\n");
    else
        puts("Öğrenciye ait bilgileri giriniz:\n");

while(i++<OgrSayi) {

    printf("%d. ogrencinin numarasini girininiz: ", i);
    scanf("%d", &OgrNo);
    printf("%d. ogrencinin adini girininiz: ", i);
    scanf(" %s", OgrAd);
    printf("%d. ogrencinin notunu girininiz: ", i);
    scanf("%d", &OgrNot);

    fprintf(DosyaG , "%d.\t Ogrenci No: %d\t Ogrenci Adi:%s\t Ogrenci Notu:%d\n",
           i, OgrNo, OgrAd, OgrNot);
}
    fclose(DosyaG);
    puts("Veriler Dosyaya yazildi...");
    return 0;
}
