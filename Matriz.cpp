#include<stdio.h>
int main (){
int linha, coluna, M[3][3];
printf("Digite os valores da matriz:\n ");

for(linha=0;linha<3;linha++){
for(coluna=0;coluna<3;coluna++){
printf("Elemento [%d][%d]: ", linha, coluna);
scanf("%d", &M[linha][coluna]);
}
}
printf("\nMatriz digitada foi: \n");
for(linha=0;linha<3;linha++){
for(coluna=0;coluna<3;coluna++){
printf("%d ", M[linha][coluna]);
}
printf("\n");
}
return 0;
}
