#include <stdio.h>

// Func para calcular a area com a rede de pesca
int calcularAreaRedePesca(int N, int redes[][4]) {
    int areaTotal = 0, i;

    for (i = 0; i < N; i++) {
        int xi = redes[i][0];
        int xf = redes[i][1];
        int yi = redes[i][2];
        int yf = redes[i][3];

        areaTotal += (xf - xi + 1) * (yf - yi + 1);
    }

    return areaTotal;
}

int main() {
    int N,i;
    scanf("%d", &N);

    int redes[N][4];

    for (i = 0; i < N; i++) {
        scanf("%d %d %d %d", &redes[i][0], &redes[i][1], &redes[i][2], &redes[i][3]);
    }

    int areaTotal = calcularAreaRedePesca(N, redes);

    printf("%d\n", areaTotal);

    return 0;
}




