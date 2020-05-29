#include <stdio.h>
#include <strings.h>

int main() {
    char c_dizi1[9] = {'K', 'a', 'r', 'a', 'k', 't', 'e', 'r', '\0'};
    char c_dizi2[9] = "Karakter";
    char c_dizi3[2][20];
    char c_dizi4[] = "Diziler";

    int i_dizi1[10];
    int i_dizi2[2][3][4];
    int i_dizi3[] = {1, 2, 3, 4, 5, 6};

    int i1, i2, i3;


    for (i1 = 0; i1 < 10; ++i1) {
        i_dizi1[i1] = i1 * i1;
        printf("%d\n", i_dizi1[i1]);
    }

    printf("\n%s - %s", c_dizi1, c_dizi2);

    for (i1 = 0; i1 < 2; ++i1) {
        for (i2 = 0; i2 < 3; ++i2) {
            for (i3 = 0; i3 < 4; ++i3) {
                i_dizi2[i1][i2][i3] = (i1 + 2) * (i2 + 2) * (i3 + 2);
                printf("%d\n", i_dizi2[i1][i2][i3]);
            }
        }

    }

    strcpy(c_dizi3[0], "Karekter dizileri");
//   strcpy(c_dizi3[1],"Katar dizileri");

    for (i1 = 0; i1 < 19; i1++) {
        c_dizi3[1][i1] = 'A';
    }
    c_dizi3[1][i1] = '\0';

    printf("\n%s\n%s\n", c_dizi3[0], c_dizi3[1]);

    for (i1 = 0; i1 < 5; ++i1) {
        printf("%d\n", i_dizi3[i1]);
    }

    printf("%s", c_dizi4);

    return 0;
}