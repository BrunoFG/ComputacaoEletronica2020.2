#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char nomeSobrenome[50];
    float vendas;
    int unidade;
    char gerente[50];
}vendedor;

void buscarMelhorPior(vendedor vetor[], int tamanho, vendedor melhorpior[]){
    int melhor = 0, pior = __INT_MAX__;
    for(int i=0; i<tamanho; i++){
        if(vetor[i].vendas>melhor){
            melhor = vetor[i].vendas;
            strcpy(melhorpior[0].nomeSobrenome, vetor[i].nomeSobrenome);
            melhorpior[0].vendas = vetor[i].vendas;
            melhorpior[0].unidade = vetor[i].unidade;
            strcpy(melhorpior[0].gerente, vetor[i].gerente);
        }
        if(vetor[i].vendas<pior){
            melhor = vetor[i].vendas;
            strcpy(melhorpior[1].nomeSobrenome, vetor[i].nomeSobrenome);
            melhorpior[1].vendas = vetor[i].vendas;
            melhorpior[1].unidade = vetor[i].unidade;
            strcpy(melhorpior[1].gerente, vetor[i].gerente);
        }
    }
    printf("Melhor vendedor: %s\n", melhorpior[0].nomeSobrenome);
    printf("Vendas: R$ %.2f\n", melhorpior[0].vendas);
    printf("Unidade: %d\n", melhorpior[0].unidade);
    printf("Gerente: %s\n\n", melhorpior[0].gerente);

    printf("Pior vendedor: %s\n", melhorpior[1].nomeSobrenome);
    printf("Vendas: R$ %.2f\n", melhorpior[1].vendas);
    printf("Unidade: %d\n", melhorpior[1].unidade);
    printf("Gerente: %s\n\n", melhorpior[1].gerente);
}

void buscarVendedor(vendedor vendedores[], int tamanho){
    int contador=0;
    char nome[50], name[50], *p;
    while(1){
        scanf(" %s", nome);
        if(!strcmp(nome, "ok"))break;
        for(int i=0; i<tamanho; i++){
            strcpy(name, vendedores[i].nomeSobrenome);
            p = strtok(name, " ");
            if(strcmp(p, nome)==0){
                printf("Nome: %s\n", vendedores[i].nomeSobrenome);
                printf("Vendas: R$ %.2f\n", vendedores[i].vendas);
                printf("Unidade: %d\n", vendedores[i].unidade);
                printf("Gerente: %s\n\n", vendedores[i].gerente);
                contador++;
            }
        }
        if(contador==0){
            printf("NAO ENCONTRADO\n\n");
        }
        contador=0;
    }
}

int main(){
    int cadastros;
    char name[50];
    vendedor melhorpior[2];
    scanf(" %d", &cadastros);
    vendedor vendedores[cadastros];
    for(int i=0; i<cadastros; i++){
        scanf(" %[^\n]s", &vendedores[i].nomeSobrenome);
        scanf(" %f", &vendedores[i].vendas);
        scanf(" %d", &vendedores[i].unidade);
        scanf(" %[^\n]s", &vendedores[i].gerente);
    }
    buscarMelhorPior(vendedores, cadastros, melhorpior);
    buscarVendedor(vendedores, cadastros);
}