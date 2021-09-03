#include <stdio.h>
#include<stdarg.h>


    void display(int num, ...);

    int main()
    {
          display(4, 'A', 'B', 'C', 'D');
          return 0;
    }

    void display(int num, ...) {
          char c, c1; int j;
          va_list ptr, ptr1;
          va_start(ptr, num);
          va_start(ptr1, num);
          for(j=1; j<=num; j++)
              {
                c = va_arg(ptr, int);
                printf("%c", c);
                c1 = va_arg(ptr1, int);
                printf("%d\n", c1);
              }
    }
