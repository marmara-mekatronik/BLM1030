#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Lütfen en az bir sayı girin.\n");
        return 1;
    }

    int min = INT_MAX;
    int current;

    for (int i = 1; i < argc; i++) {
        current = atoi(argv[i]);

        if (current < min) {
            min = current;
        }
    }

    printf("Girilen sayıların en küçüğü: %d\n", min);
    return 0;
}
