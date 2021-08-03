#include <stdio.h>

int main(){
    float N[6], Maior, Menor, nota;
    do{
        scanf(" %f %f %f %f %f", &N[0], &N[1], &N[2], &N[3], &N[4]);
    }while(N[0]<5 || N[0]>10 || N[1]<5 || N[1]>10 || N[2]<5 || N[2]>10 || N[3]<5 || N[3]>10 || N[4]<5 || N[4]>10);
    Maior = N[0]; Menor = N[0];
    for(int i=1; i<5; i++){
        if(N[i]>Maior){
            Maior = N[i];
        }
        if(N[i]<Menor){
            Menor = N[i];
        }
    }
    nota = N[0]+N[1]+N[2]+N[3]+N[4]-Maior-Menor;
    printf("%.1f", nota);
}