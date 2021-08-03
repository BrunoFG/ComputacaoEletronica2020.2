#include <stdio.h>

int main(){
    int a, b, divisores, pa=2, pm=3, ps, primosZeca=0;
    printf("Digite os valores inicial e final do intervalo: ");
    scanf("%d %d", &a, &b);
    for(int i=5; i<2000; i++){
        divisores=0;
        for(int j=i-1; j>1; j--){
            if(i%j==0){
                divisores++;
                break;
            }
        }
        if(divisores==0){
            ps=i;
            if((pa+ps)/2==pm && pm>=a && pm<=b){
                primosZeca++;
            }
            pa=pm;
            pm=ps;
        }
    }
    printf("Total de primos de Zeca no intervalo dado: %d", primosZeca);
}