#include <stdio.h>

int main(){
    int n, maior = 0, consec = 1;
    scanf(" %d", &n);
    int valores[n];
    for(int c=0; c<n; c++){
        scanf(" %d", &valores[c]);
    }
    for(int i=1; i<n; i++){
        if(valores[i-1]==valores[i]){
            consec++;
            if(consec>maior){
                maior = consec;
            }
        }else{
            consec = 1;
        }
    }
    printf("%d", maior);
}