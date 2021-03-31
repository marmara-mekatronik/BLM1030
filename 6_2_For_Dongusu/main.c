#include<stdio.h>

int main (){
	int sayac, baslangic, bitis;
	int toplam = 0 ;
	
	printf("Baslangic sayisini giriniz : ");
	scanf("%d", &baslangic);
	
	printf("Bitis sayisini giriniz : ");
	scanf("%d", &bitis);
	
	if(baslangic<bitis){

	for(sayac = baslangic; sayac<= bitis ;++sayac){
		toplam +=sayac;	
	}
	
	printf("Toplam : %d\n",toplam);
	
	
		}
		
	else 
		printf("Lutfen baslangic degerini bitisten dusuk giriniz.");
		
	return 0 ;
}
