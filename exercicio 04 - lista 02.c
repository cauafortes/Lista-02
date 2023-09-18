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
	// Diagonal principal
	printf("Diagonal principal:\n");
    for (i = 0; i < N; i++){
        	printf("[%d][%d] = %d\n", i, i, matriz[i][i]);
	}
    return 0;
}
