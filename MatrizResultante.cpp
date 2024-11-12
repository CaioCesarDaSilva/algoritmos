#include<stdio.h>
int main(){
int linha, coluna, M[2][2];

for(linha=0;linha<2;linha++){
for(coluna=0;coluna<2;coluna++){
 if ((linha + coluna) % 2 == 0) {
                M[linha][coluna] = 1;
            } else {
                M[linha][coluna] = 0;
            }
        }
    }
    printf("Matriz resultante:\n");
    for(linha=0;linha<2;linha++){
for(coluna=0;coluna<2;coluna++){
            printf("%d ", M[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
