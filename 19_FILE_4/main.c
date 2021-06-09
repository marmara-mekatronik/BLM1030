#include <stdio.h>

int main() {

    char kaynakDosyaAdi[40];
    char hedefDosyaAdi[40];

    printf("Kopyalanacak dosyanın adını giriniz: ");
    scanf("%s",kaynakDosyaAdi);
    FILE* kaynakDosya = NULL;
    kaynakDosya = fopen(kaynakDosyaAdi,"r");
    if(kaynakDosya==NULL){
        printf("Kopyalanack Dosya Bulunamadı! \n");
        return 0;
    }
    printf("Yeni Dosya Adını Giriniz : ");
    scanf("%s",hedefDosyaAdi);
    FILE* hedefDosya = NULL;
    if((hedefDosya=fopen(hedefDosyaAdi,"w")) !=NULL) {
        int ch=fgetc(kaynakDosya);
        while(ch!=EOF){
            fputc(ch,hedefDosya);
            ch= fgetc(kaynakDosya);
        }
        printf("\nKopyalama işlemi başarı ile tamamlandı...\n");
    }else{
        printf("\n %s dosyası oluşturulurken bir hata oluştu", hedefDosya);
    }

    fclose(kaynakDosya);
    fclose(hedefDosya);

    return 0;
}
