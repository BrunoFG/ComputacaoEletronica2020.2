#include <stdio.h>

int main(){
    int n;
    do{
        scanf(" %d",&n);
    }while(n<0 || n>1000);
    if(n<=10){
        printf("7");
    }else{
        if(n<=30){
            printf("%d", n-3);
        }else{
            if(n<=100){
                printf("%d", (n-30)*2+27);
            }else{
                printf("%d", (n-100)*5+167);
            }
        }
    }
}