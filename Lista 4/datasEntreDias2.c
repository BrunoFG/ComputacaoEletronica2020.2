#include <stdio.h>

int main(){
    int n, aux, iguais=0;
    scanf(" %d", &n);
    int valores[n], ordenado[n];
    for(int i=0; i<n; i++){
        scanf(" %d", &valores[i]);
        ordenado[i]=valores[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (ordenado[j] > ordenado[j+1]) {
                aux = ordenado[j];
                ordenado[j] = ordenado[j+1];
                ordenado[j+1] = aux;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(valores[i]==ordenado[i]){
            iguais++;
        }
    }
    printf("%d\n", iguais);
    for(int i=0; i<n; i++){
        if(valores[i]==ordenado[i]){
            printf("%d %d\n", valores[i], i+1);
        }
    }
}