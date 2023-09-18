#include <stdio.h>

int main() {
    int N, M, i, j;

    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d""%d", &N,&M);
    int matriz[N][M];

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int menorValor = matriz[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
            }
        }
    }

    // Exibe o menor valor da matriz
    printf("O menor valor da matriz e: %d\n", menorValor);

    return 0;
}
