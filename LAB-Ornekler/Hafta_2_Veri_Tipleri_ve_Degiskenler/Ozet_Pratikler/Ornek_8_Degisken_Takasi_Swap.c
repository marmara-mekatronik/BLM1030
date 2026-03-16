#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;
    temp = a; // Yedekle
    a = b;    // A'nin uzerine 20 ezildi
    b = temp; // B, yedekten 10'u cekti
    printf("A: %d, B: %d\n", a, b);
    return 0;
}
