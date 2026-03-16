#include <stdio.h>

int main() {
    printf("Strings:\n");
    const char* s = "Hello";
    printf("\t>>%20s<<\n\t<<%-20s>>\n\tQ-%*s-Q\n", s, s, 20, s);

    printf("Characters:\t %c %%\n", 65);

    printf("Integers\n");
    printf("Decimal:\t%i %d %.6i %i %.0i %+i %i\n", 1, 2, 3, 0, 0, 4, -4);
    printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
    printf("Octal:\t%o %#o %#o\n", 10, 10, 4);

    printf("Floating point\n");
    printf("Rounding:\t%f %.0f %.32f\n", 1.5, 1.5, 1.3);
    printf("Padding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
    printf("Scientific:\t%E %e\n", 1.5, 10000000.5);
    printf("Hexadecimal:\t%a %A\n", 1.5, 1.5);
    return 0;
}