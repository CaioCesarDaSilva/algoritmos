#include <stdio.h>

float somarValores(float valores[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += valores[i];
    }
    return soma;
}

int main() {
	printf("Aluno: Caio Cesar\n");
    int n;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    float valores[n]; 

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    float soma = somarValores(valores, n);

    float media = soma / n;

    printf("Soma dos valores: %.2f\n", soma);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}

