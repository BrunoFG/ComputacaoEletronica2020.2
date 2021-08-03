#include <stdio.h>

int main(){
    float PGalao, PLitro, Cotacao;
    scanf(" %f %f %f", &PGalao, &PLitro, &Cotacao);
    float Greal = PGalao*Cotacao/3.8;
    printf("Gasolina EUA: R$ %.2f\n", Greal);
    printf("Gasolina Brasil: R$ %.2f\n", PLitro);
    if(Greal<PLitro){
        printf("Mais barata nos EUA");
    }else{
        if(Greal==PLitro){
            printf("Igual");
        }else{
            printf("Mais barata no Brasil");
        }
    }
}