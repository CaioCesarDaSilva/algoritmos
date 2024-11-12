#include<stdio.h>
int main(){
int a, b = 42;

printf("Adivinhe o numero de 0 a 50: ");
scanf("%d", &a);

while (a!=b){
printf("O numero digitado foi errado. Tente novamente: ");
scanf("%d", &a);
}

printf("Parabens! Voce acertou");

return 0;
}

