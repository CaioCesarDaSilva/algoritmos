#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo, i = 2;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("O termo de Fibonacci e: %d\n", primeiro);
    else if (n == 1)
        printf("O termo de Fibonacci e: %d\n", segundo);
    else {
        while (i <= n) {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
            i++;
        }
        printf("O termo de Fibonacci e: %d\n", proximo);
    }

    return 0;
}
