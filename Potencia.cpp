#include<stdio.h>
#include<math.h>
int main(){
	int a=0, i=1, conta=0, soma=0;
	printf("Digite um valor inteiro: ");
	scanf("%d", &a);
	printf("Os resultados desse numero digitado elevado a potencia de 1 a 9 eh:\n ");
	for(i=1;i<=9;i++){
		
		conta= pow(a,i);
		
		
		printf("%d ", conta);
		soma = soma + conta;
		}
	printf("\nE a soma desses numeros eh: %d", soma);
	
	
	return 0;
}
