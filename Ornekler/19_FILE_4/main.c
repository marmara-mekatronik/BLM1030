#include <stdio.h>

int main() {
 char kaynakDosyaAdi[40];
 char hedefDosyaAdi[40];
    printf("Kaynak Dosyanın Adını Giriniz: ");
    scanf("%s",kaynakDosyaAdi);

    FILE* kaynakDosya = NULL;
    kaynakDosya= fopen(kaynakDosyaAdi,"r");

    if(kaynakDosya==NULL){
        printf("İşlem yapılacak dosya bulunamadı\n");
        return 0;
    }else{
        printf("Hedef Dosya Adını Giriniz:");
        scanf("%s",hedefDosyaAdi);

        FILE* hedefDosya = NULL;
        hedefDosya = fopen(hedefDosyaAdi,"w");

        if(hedefDosya !=NULL){
            int ch= fgetc(kaynakDosya);
            while(ch!=EOF){
                fputc(ch,hedefDosya);
                ch=fgetc(kaynakDosya);
            }
            printf("\nKopyalama işlemi başarı ile tamamlandı...\n");
        }else{
            printf("\n %s dosyası oluşturulurken bir hata oluştu", hedefDosya);
        }
        fclose(hedefDosya);
    }
    fclose(kaynakDosya);
    return 0;
}

