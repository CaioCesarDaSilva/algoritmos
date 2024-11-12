 #include <stdio.h>

int main() {
    int matriz[5][5];
    int maior_elemento;
    int linha_maior, coluna_maior;
    int i, j;

    printf("Digite os elementos da matriz 5x5:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior_elemento = matriz[0][0];
    linha_maior = coluna_maior = 0;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(matriz[i][j] > maior_elemento) {
                maior_elemento = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("\nO maior elemento da matriz e: %d\n", maior_elemento);
    printf("Posicao (linha, coluna): (%d, %d)\n", linha_maior, coluna_maior);

    return 0;
}

