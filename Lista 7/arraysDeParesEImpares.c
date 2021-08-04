#include <stdio.h>

int main(){
    int n, pares[5]={0.}, impares[5]={0.}, p=0, i=0;
    for(int c=0; c<15; c++){
        scanf(" %d", &n);
        if(n%2==0){
            pares[p]=n;
            p++;
        }else{
            impares[i]=n;
            i++;
        }
        if(p==5){
            for(int j=0; j<5; j++){
                printf("par[%d] = %d\n", j, pares[j]);
            }
            p=0;
            for(int j=0; j<5; j++){
                pares[j]='\0';
            }
        }
        if(i==5){
            for(int j=0; j<5; j++){
                printf("impar[%d] = %d\n", j, impares[j]);
            }
            i=0;
            for(int j=0; j<5; j++){
                impares[j]='\0';
            }
        }
    }
    for(int c=0; impares[c]!='\0'; c++){
        printf("impar[%d] = %d\n", c, impares[c]);
    }
    for(int c=0; pares[c]!='\0'; c++){
        printf("par[%d] = %d\n", c, pares[c]);
    }
}