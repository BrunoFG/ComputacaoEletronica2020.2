#include <stdio.h>

int main(){
    int num, maiorPrimo=0, div=0;
    do{
        scanf(" %d", &num);
        for(int i=2; i<num-1; i++){
            if(num%i==0){
                div++;
                break;
            }
        }
        if(div==0 && num>maiorPrimo){
            maiorPrimo=num;
        }
        div=0;
    }while(num!=404);
    if(maiorPrimo==0){
        printf("SEM PRIMOS");
    }else{
        printf("%d", maiorPrimo);
    }
}