#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_colunas[3] = {0};
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j = 0; j < 3; j++) {
        for(i = 0; i < 3; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    printf("\nSoma dos elementos de cada coluna:\n");
    for(j = 0; j < 3; j++) {
        printf("Coluna %d: %d\n", j + 1, soma_colunas[j]);
    }

    return 0;
}
