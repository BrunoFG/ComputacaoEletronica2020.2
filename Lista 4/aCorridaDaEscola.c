#include <stdio.h>

int main(){
    int N, M, menorTempo = __INT_MAX__, soma = 0, aluno;
    scanf(" %d %d", &N, &M);
    int matriz [N][M];
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            scanf(" %d", &matriz[i][j]);
        }
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            soma += matriz[i][j];
        }
        if(soma<menorTempo){
            menorTempo = soma;
            aluno = i+1;
        }
        soma = 0;
    }
    printf("%d", aluno);
}