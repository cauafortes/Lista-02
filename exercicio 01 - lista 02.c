#include <stdio.h>

int main() {
    int N, M, i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);
    int matriz[N][M];

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int maiorValor = matriz[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
        }
    }

    // Exibe o maior valor da matriz
    printf("O maior valor da matriz e: %d\n", maiorValor);

    return 0;
}
