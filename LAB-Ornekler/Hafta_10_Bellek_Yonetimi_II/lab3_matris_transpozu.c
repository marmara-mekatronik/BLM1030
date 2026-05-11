#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Laboratuvar 3: Matris Transpozu (2D Dinamik Diziler)
 * 
 * Bu program M x N boyutlarında dinamik bir matris oluşturur,
 * elemanları doldurur ve ardından transpozunu (N x M) 
 * başka bir dinamik matrise kaydeder.
 */

int main() {
    int M, N;
    printf("Satir (M) ve Sutun (N) sayilarini girin: ");
    if (scanf("%d %d", &M, &N) != 2 || M <= 0 || N <= 0) {
        printf("Gecersiz boyutlar!\n");
        return 1;
    }

    // 1. Orijinal Matris için Bellek Ayırma (Double Pointer Yöntemi)
    int **mat = (int**) malloc(M * sizeof(int*));
    if (mat == NULL) return 1;
    for (int i = 0; i < M; i++) {
        mat[i] = (int*) malloc(N * sizeof(int));
        if (mat[i] == NULL) return 1;
    }

    // 2. Transpoz Matris için Bellek Ayırma (N x M)
    int **trans = (int**) malloc(N * sizeof(int*));
    if (trans == NULL) return 1;
    for (int i = 0; i < N; i++) {
        trans[i] = (int*) malloc(M * sizeof(int));
        if (trans[i] == NULL) return 1;
    }

    // 3. Matrisi Doldurma ve Transpozunu Alma
    printf("\n--- Matris (M x N) ---\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = i + j + 1; // Örnek veri
            trans[j][i] = mat[i][j];
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Transpoz Matris (N x M) ---\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    // 4. Bellek Temizliği (Her satır ayrı ayrı silinmeli!)
    for (int i = 0; i < M; i++) free(mat[i]);
    free(mat);

    for (int i = 0; i < N; i++) free(trans[i]);
    free(trans);

    printf("\nBellek basariyla temizlendi.\n");
    return 0;
}
