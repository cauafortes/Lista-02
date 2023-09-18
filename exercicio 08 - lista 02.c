#include <stdio.h>

void lerMatriz(float matriz[][100], int N, int M) {
	int i, j;
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(float matriz[][100], int N, int M) {
	int i, j;
    printf("Matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Func para somar duas matrizes 
void somarMatrizes(float matriz1[][100], float matriz2[][100], float resultado[][100], int N, int M) {
	int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Func para subtrair as matrizes
void subtrairMatrizes(float matriz1[][100], float matriz2[][100], float resultado[][100], int N, int M) {
	int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// Func para adicionar uma constante a uma matriz
void adicionarConstante(float matriz[][100], int N, int M, float constante) {
	int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            matriz[i][j] += constante;
        }
    }
}

int main() {
    int N, M;
    
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d%d", &N,&M);  
    float matriz1[100][100];
    float matriz2[100][100];
    float resultado[100][100];
    float constante;   
    printf("Matriz 1:\n");
    lerMatriz(matriz1, N, M);   
    printf("Matriz 2:\n");
    lerMatriz(matriz2, N, M);
    
    char opcao; 
    
    do {
        printf("\nMenu de Opcoes:\n");
        printf("(a) Somar as duas matrizes\n");
        printf("(b) Subtrair a primeira matriz da segunda\n");
        printf("(c) Adicionar uma constante as duas matrizes\n");
        printf("(d) Imprimir as matrizes\n");
        printf("(0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);
        
        switch (opcao) {
            case 'a':
                somarMatrizes(matriz1, matriz2, resultado, N, M);
                printf("Resultado da soma:\n");
                imprimirMatriz(resultado, N, M);
                break;
            case 'b':
                subtrairMatrizes(matriz1, matriz2, resultado, N, M);
                printf("Resultado da subtração:\n");
                imprimirMatriz(resultado, N, M);
                break;
            case 'c':
                printf("Digite a constante: ");
                scanf("%f", &constante);
                adicionarConstante(matriz1, N, M, constante);
                adicionarConstante(matriz2, N, M, constante);
                printf("Matriz 1 apos a adicao da constante:\n");
                imprimirMatriz(matriz1, N, M);
                printf("Matriz 2 apos a adicao da constante:\n");
                imprimirMatriz(matriz2, N, M);
                break;
            case 'd':
                printf("Matriz 1:\n");
                imprimirMatriz(matriz1, N, M);
                printf("Matriz 2:\n");
                imprimirMatriz(matriz2, N, M);
                break;
            case '0':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
        
    } while (opcao != '0');
    
    return 0;
}
