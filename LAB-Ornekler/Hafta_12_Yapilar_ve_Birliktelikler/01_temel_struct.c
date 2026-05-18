#include <stdio.h>

struct Robot {
    int id;
    int pil;
};

int main() {
    struct Robot r1;
    r1.id = 101;
    r1.pil = 85;
    
    printf("Robot ID: %d, Pil: %%%d\n", r1.id, r1.pil);
    return 0;
}
