#include <stdio.h>

int main(){
    char times[9], semifinal1, semifinal2, final1, final2, vencedor;
    int time1, time2, timesOrd[8], semi[4], final[2];
    for(int i=0; i<8; i++){
        scanf(" %[^\n]c", &times[i]);
    }
    for(int i=0; i<4; i++){
        scanf(" %d %d", &time1, &time2);
        timesOrd[i]=time1;
        timesOrd[i+4]=time2;
        printf("Quartas de final %d: %c x %c\n", i+1, times[time1], times[time2]);
    }
    for(int i=0; i<2; i++){
        scanf(" %c %c", &semifinal1, &semifinal2);
        if(semifinal1=='A' && semifinal2=='A'){
            printf("Semifinal %d: %c x %c\n", i+1, times[timesOrd[2*i]], times[timesOrd[2*i+1]]);
            semi[2*i]=timesOrd[2*i];
            semi[2*i+1]=timesOrd[2*i+1];
        }else if(semifinal1=='A' && semifinal2=='B'){
            printf("Semifinal %d: %c x %c\n", i+1, times[timesOrd[2*i]], times[timesOrd[2*i+5]]);
            semi[2*i]=timesOrd[2*i];
            semi[2*i+1]=timesOrd[2*i+5];
        }else if(semifinal1=='B' && semifinal2=='A'){
            printf("Semifinal %d: %c x %c\n", i+1, times[timesOrd[2*i+4]], times[timesOrd[2*i+1]]);
            semi[2*i]=timesOrd[2*i+4];
            semi[2*i+1]=timesOrd[2*i+1];
        }else{
            printf("Semifinal %d: %c x %c\n", i+1, times[timesOrd[2*i+4]], times[timesOrd[2*i+5]]);
            semi[2*i]=timesOrd[2*i+4];
            semi[2*i+1]=timesOrd[2*i+5];
        }
    }
    scanf(" %c %c", &final1, &final2);
    if(final1=='X' && final2=='X'){
        printf("Final: %c x %c\n", times[semi[0]], times[semi[2]]);
        final[0] = semi[0];
        final[1] = semi[2];
    }else if(final1=='X' && final2=='Y'){
        printf("Final: %c x %c\n", times[semi[0]], times[semi[3]]);
        final[0] = semi[0];
        final[1] = semi[3];
    }else if(final1=='Y' && final2=='X'){
        printf("Final: %c x %c\n", times[semi[1]], times[semi[2]]);
        final[0] = semi[1];
        final[1] = semi[2];
    }else{
        printf("Final: %c x %c\n", times[semi[1]], times[semi[3]]);
        final[0] = semi[1];
        final[1] = semi[3];
    }
    scanf(" %c",&vencedor);
    if(vencedor=='#'){
        printf("O vencedor da competição de futebol de robôs foi %c!", times[final[0]]);
    }else if(vencedor=='%'){
        printf("O vencedor da competição de futebol de robôs foi %c!", times[final[1]]);
    }
}