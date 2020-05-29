#include <stdio.h>

int *minBul( int a[],int boyut){
	int ekd=a[0];
	int *eka=&a[0];
	int i;
	for (i=1;i<boyut;i++){
		if(a[i]<ekd){
			ekd=a[i];
			eka=&a[i];
		}
	}
	return eka;

}
int main(){
	int x[5]={25,8,9,6,15};
	int *p;
	p=minBul(x,5);

	printf("En kucuk deger =%d\n",*p);
	printf("En kucuk degerin adresi =%p\n",p);
	printf("En kucuk degerin indis bilgisi  =%d\n",(int)(p-&x[0]));
 }