#include <stdio.h>

int main() {
    int s, j = 0, m = 1, n = -1;
    float x = 2.5, y = 0.0;

    s = j > m;
    printf("%d\n", s);

    s = m / n < x;
    printf("%d\n", s);

    s = j <= m >= n;
    printf("%d\n", s);

    s = ++j == m != y * 2;
    printf("%d\n", s);

    return 0;
}