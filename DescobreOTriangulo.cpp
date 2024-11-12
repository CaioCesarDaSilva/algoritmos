#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    
    printf("Digite o comprimento do lado 1: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do lado 2: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do lado 3: ");
    scanf("%f", &lado3);

   
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Os lados formam um triangulo.\n");

        
        if (lado1 == lado2 && lado2 == lado3) {
            printf("E um triangulo equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("E um triangulo isosceles.\n");
        } else {
            printf("E um triangulo escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
