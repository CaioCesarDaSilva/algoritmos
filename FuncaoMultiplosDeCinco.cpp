#include <stdio.h> 


int calcularResultado(int v[], int n);

int main() { 
	printf("Aluno: Caio Cesar\n");
    int vetor[5], i, resultado; 


    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2; 
    }

    resultado = calcularResultado(vetor, 5);
    
    printf("O resultado eh: %d\n", resultado);
    
    return 0;
}

int calcularResultado(int v[], int n) {
    int i, soma = 0; 

    for (i = 0; i < n; i++) {
        soma += v[i]; 
    }
    
    return soma; 
}

