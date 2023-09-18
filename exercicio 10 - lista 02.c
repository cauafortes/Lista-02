#include <stdio.h>

#define MAX 501

int main() {
    int N, i;
    scanf("%d", &N);

    int matriz[MAX][MAX] = {0}; 

    // Le as coordenadas dos raios e verifica se algum raio caiu no mesmo lugar
    int raioCaiuDuasVezes = 0;
    for (i = 0; i < N; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (matriz[X][Y] == 1) {
            raioCaiuDuasVezes = 1;
            break; 
        } else {
            matriz[X][Y] = 1; 
        }
    }

    printf("%d\n", raioCaiuDuasVezes);

    return 0;
}






