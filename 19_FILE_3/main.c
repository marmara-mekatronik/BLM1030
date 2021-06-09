#include <stdio.h>

int main() {
FILE* dosya = NULL;

dosya = fopen("bilgi.txt","r");
if(dosya!=NULL){
    printf("_________________________\n");
    printf("_______DOSYA_ICERIGI_____\n");
    printf("_________________________\n");
    int ch = fgetc(dosya);

    while(ch!=EOF){
        putchar(ch);
        ch= fgetc(dosya);
    }
    printf("\n");
    fclose(dosya);
    printf("_________________________\n");
}
// bilgi.txt
//    Aşı, hastalıklara karşı bağışıklık sağlama amacı ile insan veya hayvan vücuduna verilen,
//    zayıflatılmış hastalık virüsü, hastalık etkeninin parçaları veya salgıları ile
//    oluşturulan çözeltidir


    return 0;
}
