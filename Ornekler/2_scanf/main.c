#include <stdio.h>

int main ()
{
  char str [80];
  char secenek;
  int i;

  printf ("Soyadinizi Giriniz: ");
  scanf ("%79s",str);
  printf ("Yaşınızı Giriniz: ");
  scanf ("%d",&i);
  printf("Girdiginiz bilgileri onaylıyormusunuz E/H: ");
  scanf(" %c",&secenek);
  printf("Bilgileri %c girerek onayladiniz\n", secenek);
  printf ("Sayin %s , %d yasinizdasiniz.\n",str,i);
  printf ("Bir hexadecimal sayi giriniz: ");
  scanf ("%x",&i);
  printf ("Girmis oldugunuz sayi %#x (%d).\n",i,i);

  return 0;
}