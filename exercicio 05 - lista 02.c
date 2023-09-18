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
	// Diagonal secundaria
	printf("Diagonal secundaria:\n");
	j = M;
    for (i = 0; i < N; i++){
        	printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
        j--;
	}
    return 0;
}
