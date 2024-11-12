#include <stdio.h>

int main() {
    int matriz[2][2];
    int elemento, i, j;
    int encontrado = 0;

    printf("Digite os elementos da matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o elemento a ser procurado na matriz: ");
    scanf("%d", &elemento);

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(matriz[i][j] == elemento) {
                encontrado = 1;
                break;
            }
        }
        if(encontrado)
            break;
    }

    if(encontrado)
        printf("O elemento %d foi encontrado na matriz.\n", elemento);
    else
        printf("O elemento %d nao foi encontrado na matriz.\n", elemento);

    return 0;
}

