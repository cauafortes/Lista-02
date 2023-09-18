#include <stdio.h>

int main() {
    int N, M, i, j; 
    float matriz[100][100]; 
    float escalar;

    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d%d", &N,&M);
    printf("Digite os elementos da matriz:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Digite o valor do escalar: ");
    scanf("%f", &escalar);

    // Multiplicando a matriz pelo escalar
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("Matriz resultante:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
