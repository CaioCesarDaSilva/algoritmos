#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos da diagonal principal:\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}

