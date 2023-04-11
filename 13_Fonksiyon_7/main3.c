#include <stdio.h>

void ekrana_yazdir(int G_Dizi[], short E_Sayisi);
float ort_hesapla(int G_Dizi[], short E_Sayisi);

int main() {
    int dizi[6]={1,2,3,4,5,6};
    ekrana_yazdir(dizi, sizeof(dizi)/ sizeof(int));
    printf("ortlama : %.2f\n", ort_hesapla(dizi,sizeof(dizi)/ sizeof(int)));
    return 0;
}
void ekrana_yazdir(int G_Dizi[], short E_Sayisi){
    for (int i = 0; i < E_Sayisi; ++i){
        printf("%d. eleman degeri:%d\n", i + 1, G_Dizi[i]);
    }
}

float ort_hesapla(int G_Dizi[], short E_Sayisi){
    float toplam=0, ortalama ;
    for (int i = 0; i < E_Sayisi; ++i) {
        toplam+=G_Dizi[i];
    }
    ortalama = toplam /E_Sayisi;

    return ortalama;

}
