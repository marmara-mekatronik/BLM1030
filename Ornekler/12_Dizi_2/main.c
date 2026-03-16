#include <stdio.h>
#include <string.h>

int main() {
    char c_dizi1[9] = {'K', 'a', 'r', 'a', 'k', 't', 'e', 'r', '\0'};
    char c_dizi2[9] = "Karakter";
    char c_dizi3[2][20];
    char c_dizi4[] = "Diziler";

    int i_dizi1[10];
    int i_dizi2[2][3][4]; // 3 boyutlu dizi KUP
    int i_dizi3[] = {1, 2, 3, 4, 5, 6};

    printf("%s - %s \n", c_dizi1, c_dizi2);

    strcpy(c_dizi3[0], "Karekter Dizisi 1");
    strcpy(c_dizi3[1], "karekter Dizisi 2");

    printf("%s\n", c_dizi3[0]);
    printf("%s\n", c_dizi3[1]);

    for (int i = 0; i < sizeof(c_dizi4) / sizeof(char) - 1; ++i) {
        printf("%c", c_dizi4[i]);
    }

    printf("\n");

    for (int i = 0; i < sizeof(i_dizi1) / sizeof(int); ++i) {
        i_dizi1[i] = i * i;
        printf("%d \t", i_dizi1[i]);
    }
    printf("\n");
    printf("---------\n");

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                i_dizi2[i][j][k] = (i + 2) * (j + 2) * (k + 2);
                printf("%d \t", i_dizi2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for (int i = 0; i < sizeof(i_dizi3) / sizeof(int); ++i) {
        printf("%d \t", i_dizi3[i]);
    }


    return 0;
}
