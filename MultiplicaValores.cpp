#include<stdio.h>

float multiplicaValores(int tamanho, float valores[]){
	float multiplica = 1;
	for(int i = 0;i<tamanho;i++){
	multiplica = multiplica * valores[i];
	}
	return multiplica;
}
int main(){
	printf("Aluno: Caio Cesar\n");
	
	int n;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    float valores[n]; 

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    float resultado = multiplicaValores(n, valores);

    printf("Resultado da multiplicacao: %.2lf\n", resultado);

    return 0;
}	
