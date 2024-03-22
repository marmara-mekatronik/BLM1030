#include <stdio.h>
int main()
{
    // char dizisi oluştur
    // i+j % 2 == 0 ise X koy != 0 ise ' ' olsun
    char tahta[8][8];
    int i,j;
    printf("  --------------------------\n");
    for ( i = 0; i < 8; i++)
    {
        printf("%d |",i+1); // Kaçıncı Sütünda Olduğumuzun Bilgisi.
        for ( j = 0; j < 8; j++)
        {
            if ((i+j)%2==0)
            {
                printf("|X|"); // Siyah Kareleri Belirledik.
            }
            else
            printf("   "); // Boş Kareler.
        }
        printf("|");
        printf("\n");
    }
        printf("  --------------------------\n");
        printf("    A  B  C  D  E  F  G  H ");
    return 0;
}
