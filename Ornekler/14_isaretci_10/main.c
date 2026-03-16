#include <stdio.h>

void func(int);

int main() {

    void (*fp)(int);
    fp=func;
    printf("%p\n", fp);
    fp(55);
    (*fp)(66);

    return 0;
}

void func(int arg){
    printf("%d\n",arg);
}

