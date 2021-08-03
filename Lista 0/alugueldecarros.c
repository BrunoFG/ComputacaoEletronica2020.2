#include <stdio.h>

int main(){
    int dias, km;
    printf("Digite a quantidade de dias de locacao:");
    scanf(" %d", &dias);
    printf("Digite a quantidade de km rodados:");
    scanf(" %d", &km);
    printf("Valor a pagar pelo aluguel: R$ %f", (dias*30+km*0.01)*0.9);
}