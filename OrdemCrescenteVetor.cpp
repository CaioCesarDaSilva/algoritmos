#include<stdio.h>
int main (){
	int i, vet[15], j, troca;
	printf("Digite os 15 elementos do vetor: \n");
	for (i=0;i<15;i++){
		scanf("%d", &vet[i]);
	}
	for (i=0;i<15;i++){
		for (j=i+1;j<15;j++){
			if (vet[i]>vet[j]){
				troca = vet[i];
				vet[i] = vet[j];
				vet[j] = troca;
			}
		}
	}
	printf("Vetor em ordem crescente: \n");
	for (i=0;i<15;i++){
		printf("%d ", vet[i]);
	}
	return 0;	
}
