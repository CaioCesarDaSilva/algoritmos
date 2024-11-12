#include<stdio.h>

void maiorNumero(int numero1, int numero2){
if (numero1>numero2){
	printf("O primeiro numero eh maior");
	} else if(numero2>numero1){
		printf("O segundo numero eh maior");
	} else {
		printf("Os numeros sao iguais");
	}
}

int main(){
	printf("Aluno: Caio Cesar\n");
	
	int primeiroValor, segundoValor;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiroValor);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &segundoValor);
	
 	maiorNumero(primeiroValor, segundoValor);
	
}
