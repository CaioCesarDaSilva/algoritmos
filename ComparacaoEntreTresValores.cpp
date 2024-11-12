#include<stdio.h>

int menorNumero(int num1, int num2, int num3){
	if(num1>num2){
		if(num2>num3){
			printf("O terceiro numero eh o menor");
		} else if (num2<num3){
			printf("O segundo numero eh o menor");
		}
	} else if (num2>num1){
		if(num3>num1){
			printf("O primeiro numero eh o menor");
		} else if (num1>num3){
			printf("O terceiro numero eh o menor");
		}
	}
}

int main(){
	printf("Aluno: Caio Cesar\n");
	
	int numero1, numero2, numero3;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &numero2);

	printf("Digite o terceiro valor: ");
	scanf("%d", &numero3);
	
	menorNumero(numero1, numero2, numero3);
	
	}
