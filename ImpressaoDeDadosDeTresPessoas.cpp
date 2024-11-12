#include <stdio.h>
int main() {
    int numero = 0, i = 0, j = 0;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &numero); 
    int matriz[numero][numero];
    for(i = 0; i < numero; i++) {
        for(j = 0; j < numero; j++) {
            if (i < j) {
                matriz[i][j] = 0;
            } else if (i == j) {
                matriz[i][j] = i + 1;
            } else {
                matriz[i][j] = j + 1;
            }
        }
    }
    printf("Matriz resultante:\n");
    for (i = 0; i < numero; i++) {
        for (j = 0; j < numero; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
