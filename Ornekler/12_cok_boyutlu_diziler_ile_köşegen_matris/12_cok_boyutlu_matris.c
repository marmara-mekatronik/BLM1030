  
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[20][20];
    int i,j;
//Elemanlari tanitma islemi.
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            if(i==j)
            {
                matris[i][j]=1;
            }
            else
            {
                matris[i][j]=0;

            }
        }
    }
//Elemanlari yazdirma islemi
     for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
          printf("%4d",matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}
