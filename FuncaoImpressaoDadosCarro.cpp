#include <stdio.h>       
#include <string.h>      
#include <locale.h>      


typedef struct {
    char modelo[50];    
    int ano;            
    double preco;       
} Carro; 


void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco; 
}


void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo); 
    printf("Ano: %d\n", c->ano);        
    printf("Preco: R$ %.2lf\n", c->preco); 
}

int main() {
		printf("Aluno: Caio Cesar\n");
    setlocale(LC_ALL, "portuguese"); 
    Carro carro1; 
    

    strcpy(carro1.modelo, "Audi"); 
    carro1.ano = 2020;             
    carro1.preco = 90000.00;       
    
    printf("Dados antes da modificacao:\n"); 
    imprimirCarro(&carro1); 
    
    modificarPreco(&carro1, 115000.00); 
    
    printf("\nDados ap�s a modificacao do preco:\n"); 
    imprimirCarro(&carro1); 
    
    return 0;
}

