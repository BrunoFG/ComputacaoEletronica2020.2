#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero:");
    scanf(" %d", &n);
    printf("Algarismo das unidades: %d", n%10);
}