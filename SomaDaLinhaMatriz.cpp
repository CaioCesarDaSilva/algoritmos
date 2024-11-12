#include <stdio.h>

int main() {
    int matriz[4][4];
    int linha_escolhida, soma = 0;
    int i, j;

    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o n�mero da linha para calcular a soma dos elementos (0 a 3): ");
    scanf("%d", &linha_escolhida);

    if(linha_escolhida < 0 || linha_escolhida >= 4) {
        printf("Linha inv�lida!\n");
        return 1;
    }

    for(j = 0; j < 4; j++) {
        soma += matriz[linha_escolhida][j];
    }

    printf("A soma dos elementos da linha %d eh: %d\n", linha_escolhida, soma);

    return 0;
}

