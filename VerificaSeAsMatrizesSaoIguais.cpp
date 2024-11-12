 #include <stdio.h>

int main() {
    int matriz1[2][2], matriz2[2][2];
    int i, j;
    int sao_iguais = 1;

    printf("Digite os elementos da primeira matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(matriz1[i][j] != matriz2[i][j]) {
                sao_iguais = 0;
                break;
            }
        }
        if(!sao_iguais)
            break;
    }

    if(sao_iguais)
        printf("\nAs matrizes fornecidas sao iguais.\n");
    else
        printf("\nAs matrizes fornecidas nao sao iguais.\n");

    return 0;
}
