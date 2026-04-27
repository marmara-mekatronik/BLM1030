#include <stdio.h>

int main() {
    printf("sizeof(int)    = %lu byte\n", sizeof(int));     // 4
    printf("sizeof(float)  = %lu byte\n", sizeof(float));   // 4
    printf("sizeof(double) = %lu byte\n", sizeof(double));  // 8

    printf("sizeof(int*)   = %lu byte\n", sizeof(int*));    // 8 (64-bit)
    printf("sizeof(float*) = %lu byte\n", sizeof(float*));  // 8 (64-bit)
    printf("sizeof(char*)  = %lu byte\n", sizeof(char*));   // 8 (64-bit)
    // Tüm pointer boyutları AYNI!

    return 0;
}
