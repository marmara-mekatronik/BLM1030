#include <stdio.h>

int main() {
   FILE* dosya =NULL;
   dosya = fopen("bilgi.txt","r");
   if(dosya!=NULL){
       printf("Dosya Okunuyor...\n");
       printf("_________________________\n");
       printf("_______DOSYA_ICERIGI_____\n");
       printf("_________________________\n");

       int ch = fgetc(dosya);
       while(ch!=EOF){
           putchar(ch);
           ch = fgetc(dosya);

       }
       printf("\n");
       printf("_________________________\n");

   } else {
       printf("Dosya açılamadı...\n");
   }


    return 0;
}

//bilgi.txt dosya içeriği
//Aşı, hastalıklara karşı bağışıklık sağlama amacı ile insan veya hayvan vücuduna verilen,
//zayıflatılmış hastalık virüsü, hastalık etkeninin parçaları veya salgıları ile
//oluşturulan çözeltidir.
