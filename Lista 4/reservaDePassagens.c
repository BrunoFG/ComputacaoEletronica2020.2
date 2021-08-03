#include <stdio.h>

int agendamento(int matriz[37][2], int id, int voo){
    int encontrado=0;
    for(int i=0; i<37; i++){
        if(matriz[i][0]==voo && matriz[i][1]>0){
            encontrado++;
            matriz[i][1]--;
            break;
        }
    }
    if(encontrado){
        printf("%d\n", id);
    }else{
        printf("INDISPONIVEL\n");
    }
}
int main(){
    int voos[37][2], identidade, voo;
    for(int i=0; i<37; i++){
        for(int j=0; j<2; j++){
            scanf(" %d", &voos[i][j]);
        }
    }
    while(1){
        scanf(" %d", &identidade);
        if(identidade==9999)break;
        scanf(" %d", &voo);
        agendamento(voos, identidade, voo);
    }
}