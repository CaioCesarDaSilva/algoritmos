#include<stdio.h>
int main (){
	int tamanho = 0;
	printf ("Digite o tamanho do Vetor: \n");
	scanf ("%d", &tamanho);
	if (tamanho <=0){
		printf("Tamanho invalido!");
		return 1;
	}
	int menor=0, maior=0, i, vetor[tamanho];
	printf("Digite os elementos desse vetor: \n");
	for(i=0;i<tamanho;i++){
		printf("Elemento %d: ", i+1);
		scanf("%d", &vetor[i]);	
	if (vetor [i] > maior){
	maior = vetor [i];
	}	
	if (menor==0){
		menor=maior=vetor[i];
	}
	if (vetor[i] < menor){
		menor = vetor [i];
	}
	}
	printf("Os numeros sao: \n");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);	
}
		printf("\nO numero maior eh %d", maior);
		printf("\nO numero menor eh %d", menor);
	return 0;
}
