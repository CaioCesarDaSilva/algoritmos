#include <stdio.h>

float calcularMedia(int num1, int num2, int num3) {
    return (numero1 + numero2 + numero3) / 3.0; 
}

int main() {
		printf("Aluno: Caio Cesar\n");
    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    float media = calcularMedia(numero1, numero2, numero3);

    printf("A m�dia eh: %.2f\n", media);

    return 0;
}

