#include <stdio.h>

int main() {
    int N, M, i, j, x, cont = 0;
	
	printf("Informe um valor para x:\n");
	scanf("%d",&x);
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

    for (i = 0; i < N; i++) 
        for (j = 0; j < M; j++) 
            if (matriz[i][j] == x) 
                cont++;
                   
    // Exibe a quantidade de numeros igual a x
    printf("A quantidade de numeros igual a x e: %d\n", cont);

    return 0;
}
