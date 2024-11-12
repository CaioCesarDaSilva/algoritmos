#include <stdio.h>

void encontrarMaiorValor(int valores[], int tamanho, int *maiorValor, int *posicao) {
    *maiorValor = valores[0];
    *posicao = 0;

    for (int i = 1; i < tamanho; i++) {
        if (valores[i] > *maiorValor) {
            *maiorValor = valores[i];
            *posicao = i;
        }
    }
}

int main() {
	printf("Aluno: Caio Cesar\n");
    int n;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int valores[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int maiorValor, posicao;

    encontrarMaiorValor(valores, n, &maiorValor, &posicao);

    printf("O maior valor eh: %d\n", maiorValor);
    printf("Sua posição no vetor eh: %d\n", posicao);

    return 0;
}

