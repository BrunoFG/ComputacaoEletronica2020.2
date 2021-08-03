#include <stdio.h>
float CalculaMulta(int x){
    if(x<=50){
        printf("0.00");
    }else if(x<=55){
        printf("230.00");
    }else if(x<=60){
        printf("340.00");
    }else{
        printf("%.2f", (x-50)*19.28);
    }
}
int main(){
    int vel;
    scanf(" %d", &vel);
    CalculaMulta(vel);
}