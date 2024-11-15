 #include <stdio.h>

int main() {
    int matriz[2][2];
    int escalar;
    int i, j;

    printf("Digite os elementos da matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o numero escalar para multiplicar os elementos da matriz: ");
    scanf("%d", &escalar);

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("\nMatriz resultante da multiplicacao por %d:\n", escalar);
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

