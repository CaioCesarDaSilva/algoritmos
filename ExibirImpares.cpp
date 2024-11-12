#include <stdio.h>

void exibirImpares(int n) {
    printf("Numeros impares de 1 ate %d (excluindo multiplos de 7):\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
	printf("Aluno: Caio Cesar\n");
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    exibirImpares(numero);

    return 0;
}

