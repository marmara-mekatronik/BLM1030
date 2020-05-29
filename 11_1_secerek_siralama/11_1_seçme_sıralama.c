#include <stdio.h>

/*seçme sıralama algoritması ilk etapta dizinin en küçük 
elemanını seçer ve en sola yazdırır. Bu işlem son elemana geline dek devam eder*/

int main()
{
    int dizi[7] = { 51 , 20 , 93 , 4 , 108 , 16 , 9 } ;
int enkucukeleman,yedek;

    for ( int i = 0 ; i < 6 ; i++ ) //bu işlemin kaç defa döneceğini belirliyoruz
    {
    enkucukeleman = i ;
        for ( int a = i ; a < 7 ; a++  )
        {
          if ( dizi[a] < dizi[enkucukeleman])
          {
            enkucukeleman = a ;
          }

        }
      yedek = dizi[enkucukeleman] ;
      dizi[enkucukeleman] = dizi[i] ;
      dizi[i] = yedek ; 
  
    }
for ( int b = 0 ; b < 7 ; b++)
{
  printf("%d\n",dizi[b]);
}

 return 0 ;
 }
