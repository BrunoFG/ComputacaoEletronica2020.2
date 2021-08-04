#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct{
    char nomeSobrenome[50];
    char numero[15];
    int vinculo;
}contato;

int main(){
    int n, contador=0;
    char nome[50], *p, vinc[9], name[50];
    scanf(" %d", &n);
    contato contatos[n];
    for(int i=0; i<n; i++){
        scanf(" %[^\n]s", &contatos[i].nomeSobrenome);
        scanf(" %[^\n]s", &contatos[i].numero);
        scanf(" %d", &contatos[i].vinculo);
    }
    while(1){
        scanf("%s", nome);
        if(!strcmp(nome, "#"))break;
        for(int i=0; i<n; i++){
            strcpy(name, contatos[i].nomeSobrenome);
            p = strtok(name, " ");
            if(strcmp(p, nome)==0){
                printf("Nome: %s\n", contatos[i].nomeSobrenome);
                printf("Numero: %s\n", contatos[i].numero);
                if(contatos[i].vinculo==1){
                    strcpy(vinc, "Familia");
                }else if(contatos[i].vinculo==2){
                    strcpy(vinc, "Faculdade");
                }else{
                    strcpy(vinc, "Amigo");
                }
                printf("Vinculo: %s\n\n", vinc);
                vinc[0]='\0';
                contador++;
            }
        }
        if(contador==0){
            printf("%s nao foi cadastrado\n\n", nome);
        }
        contador=0;
    }
}