#include<stdio.h>

void exibirPares(int numero){
    for (int i = 1; i <= numero; i++) {
		if (i%2==0)
			printf("%d ", i);
	}
	printf("\n");
}
	
	int main(){
		printf("Aluno: Caio Cesar\n");
		
		int digito = 0;
		printf("Digite um numero inteiro: ");
		scanf("%d", &digito);
		
		exibirPares(digito);
	}
