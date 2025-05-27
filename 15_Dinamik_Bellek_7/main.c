    #include <stdio.h>
    #include <stdlib.h>

    int main() {

    int s1[]={10,20,30,40};
    int s2[]={50,60,70,80};
    int s3[]={11,22,33,44};


    int* diziPtr[3]={s1,s2,s3};

    for (int i = 0; i < 3; i++)
    {
        printf("%p\n",diziPtr[i]);
    }

    int **Arr = diziPtr;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d\t",*(*(Arr+i)+j));
            
        }
        printf("\n");
    }
            return 0;
            }
