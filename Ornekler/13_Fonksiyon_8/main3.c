#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int find_min(int count, ...) {
    int min = INT_MAX;
    int current;

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        current = va_arg(args, int);

        if (current < min) {
            min = current;
        }
    }

    va_end(args);
    return min;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Lütfen en az bir sayı girin.\n");
        return 1;
    }

    int numbers[argc - 1];
    for (int i = 1; i < argc; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }

    int min = find_min(argc - 1, numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]); // Örnek için 5 sayı

    printf("Girilen sayıların en küçüğü: %d\n", min);
    return 0;
}
