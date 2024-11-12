#include <stdio.h>
int main() {
    int vetor[30];
    int frequencia[30] = {0};
    int i, j, maxFrequencia = 0, elementoMaisFrequente;

    printf("Digite 30 elementos do vetor:\n");
    for (i = 0; i < 30; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        frequencia[vetor[i]]++;
    }

    for (i = 0; i < 30; i++) {
        if (frequencia[i] > maxFrequencia) {
            maxFrequencia = frequencia[i];
            elementoMaisFrequente = i;
        }
    }

    printf("\nElemento mais frequente: %d\n", elementoMaisFrequente);

    return 0;
}
