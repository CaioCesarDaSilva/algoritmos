#include<stdio.h>
int main(){
	int tamanho=0;
	printf ("Digite o tamanho do vetor: \n");
	scanf("%d", &tamanho);
	if(tamanho <=0){
		printf("Tamanho invalido!");
		return 1;
	}
	int i=0, vetor[tamanho];
	printf("Digite os elementos do vetor:\n");
	for (i = 0; i < tamanho; i++) {
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i < tamanho; i++) {
	printf("%d ", vetor[i]);
}

	return 0;
}
