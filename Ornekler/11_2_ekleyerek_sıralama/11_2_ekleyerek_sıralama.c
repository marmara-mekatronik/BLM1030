#include <stdio.h>
/* Bu sıralama algoritması sırasıyla 1 tane elemanı,
2 tane elemanı ... n tane elemanı sıralar
Örneğin { 1 , 5 , 9 , 7 , 6}

ilk 1 , 5
sonrasında 1 , 5 , 9
sonrasında 1, 5, 9, 7 burada 7 elemanı gerektiği kadar sola kaydırılır.
Ve dizi sonlanana kadar devam eder*/

int main ()
{
    int dizi[6] = { 99 , 24 , 68 , 3 , 59 , 33 } ;

  for ( int i = 1 ; i < 6 ; i++)
  {
    int yedek = dizi[i]; 
    int j = i - 1 ; 
   
      while ( j >= 0 && dizi[j] > yedek )
      {
          dizi[j + 1] = dizi[j] ;
          j = j - 1 ; 
      }
      dizi[j+1] = yedek ;
      
  }

  for ( int a = 0 ; a < 6 ; a++)
  {
        printf("%d\n",dizi[a]);
  }

    return 0;
}
