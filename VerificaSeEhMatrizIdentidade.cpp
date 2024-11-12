#include <stdio.h>
#include <stdbool.h>

bool ehMatrizIdentidade(int matriz[3][3]) {
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i != j && matriz[i][j] != 0) {
                return false;
            }
        }
    }

    for(i = 0; i < 3; i++) {
        if(matriz[i][i] != 1) {
            return false;
        }
    }

    return true;
}

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

    if(ehMatrizIdentidade(matriz)) {
        printf("\nA matriz fornecida e uma matriz identidade.\n");
    } else {
        printf("\nA matriz fornecida nao e uma matriz identidade.\n");
    }

    return 0;
}
