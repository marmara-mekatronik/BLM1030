#include <stdio.h>


int main() {

    int i, j;
    for (i = 0; i < 20; i++) {
        for (j = 0; j < i + 20; j++) {
            printf(">");
        }
        printf("\n");
    }

    for (i = 20; i > 0; i--) {
        for (j = 0; j < i + 20; j++) {
            printf("<");
        }
        printf("\n");
    }
    return 0;
}
