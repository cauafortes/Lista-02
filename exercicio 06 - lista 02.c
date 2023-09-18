#include <stdio.h>
#include "matrizLib.h"

int main(){
	int matrizA[100][100], matrizB[100][100], resultado[100][100];
	int i, j, s, linhas, cols;
	
	printf("Informe quantas linhas e colunas tem as matrizez:\n");
	scanf("%d%d",&linhas, &cols);	
	geraMatriz(matrizA, linhas, cols);
	printf("Digite uma tecla para gerar as matrizez:\n");
	getch(); // pausa para gerar outra matriz
	geraMatriz(matrizB, linhas, cols);
	printf("Matriz A\n");
	printMatriz(matrizA, linhas, cols);
	printf("Matriz B\n");
	printMatriz(matrizB, linhas, cols);
	
	 // Calculando a soma das matrizes
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    
    printf("A matriz resultante da soma e:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}
