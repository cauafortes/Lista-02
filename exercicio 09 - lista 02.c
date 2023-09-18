#include <stdio.h>

int main() {
    int M[2][3], N[3][2], Mult[2][2];
    int i, j, k;

    printf("Digite os elementos da matriz M (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite os elementos da matriz N (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &N[i][j]);
        }
    }

    // Inicializando a matriz Mult com zeros
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            Mult[i][j] = 0;
        }
    }

    // Realizando a multiplicação das matrizes
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                Mult[i][j] += M[i][k] * N[k][j];
            }
        }
    }

    printf("Resultado da multiplicacao:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", Mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
