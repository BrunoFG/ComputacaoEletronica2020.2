#include <stdio.h>

int main(){
    int x, y, atual, c=0;
    printf("Digite a quantidade de numeros da sequencia:");
    scanf(" %d", &x);
    printf("\nDigite o numero procurado:");
    scanf(" %d", &y);
    for (int i=0; i<x; i++){
        scanf(" %d", &atual);
        if (atual==y){
            c++;
        }
    }
    printf("\nO numero %d apareceu na sequencia %d vezes.", y, c);
}