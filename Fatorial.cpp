#include <stdio.h>

int main() {
    int n, fatorial;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo\n");
    } 
    else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d e: %d\n", n, fatorial);
    }

    return 0;
}
