#include<stdio.h>
int main(){
	int tamanho;
	printf("Digite o tamanho do Vetor: \n");
	scanf("%d", &tamanho);
	if (tamanho<=0){
		printf ("Tamanho invalido!");
		return 1;
	}
	int i=0, vetor[tamanho];
	printf("Digite os elementos do seu vetor: \n");
	for (i=0;i<tamanho;i++){
		printf("Elemento %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("A ordem inversa dos elementos digitados eh: \n");
	for (i=tamanho-1;i>=0;i--){
		printf("%d ", vetor[i]);
}	
	return 0;
}
