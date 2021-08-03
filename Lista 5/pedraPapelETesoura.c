#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int N, K=0, V=0;
    scanf(" %d", &N);
    for(int i=0; i<N; i++){
        char kyara[8], vinicius[8];
        scanf(" %s %s", kyara, vinicius);
        for(int j=0; j<8; j++){
            kyara[j] = tolower(kyara[j]);
            vinicius[j] = tolower(vinicius[j]);
        }
        if(strcmp(kyara, "pedra")==0 && strcmp(vinicius, "papel")==0){V++;}
        else if(strcmp(kyara, "pedra")==0 && strcmp(vinicius, "tesoura")==0){K++;}
        else if(strcmp(kyara, "papel")==0 && strcmp(vinicius, "pedra")==0){K++;}
        else if(strcmp(kyara, "papel")==0 && strcmp(vinicius, "tesoura")==0){V++;}
        else if(strcmp(kyara, "tesoura")==0 && strcmp(vinicius, "papel")==0){K++;}
        else if(strcmp(kyara, "tesoura")==0 && strcmp(vinicius, "pedra")==0){V++;}
    }
    if(K==V){
        printf("OS DOIS VÃO LAVAR A LOUÇA JUNTOS!");
    }else if(K<V){
        printf("KYARA VAI LAVAR A LOUÇA!");
    }else{
        printf("VINICIUS VAI LAVAR A LOUÇA!");
    }
}