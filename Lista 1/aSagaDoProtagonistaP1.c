#include <stdio.h>
#include <math.h>

int main(){
    int a, b, passos;
    do{
        scanf(" %d %d", &a, &b);
    }while(a<1 || a>pow(10,5) || b<1 || b>pow(10,5));
    int diff = abs(a-b);
    if(diff==1){
        passos = 2;
    }else{
        if(diff==2){
            passos = 1;
        }else{
            if(diff%3==0){
                passos = diff/3;
            }else{
                passos = diff/3 +1;
            }
        }
    }
    printf("%d",passos);
}