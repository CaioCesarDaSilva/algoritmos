#include<stdio.h>

float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main(){
	printf("Aluno: Caio Cesar\n");
		float notas [4];
		for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
		
	double media = calcularMedia(notas, 4);
	
	printf("A media eh: %.2f\n", media);
    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
