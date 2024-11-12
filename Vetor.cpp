#include<stdio.h>
int main(){
	int i=0, vetor[8];
	printf("Digite 8 valores:\n");
	
	for(i=0;i<8;i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=7;i>=0;i--){
	printf("%d ",vetor[i]);
}
	return 0;
}
