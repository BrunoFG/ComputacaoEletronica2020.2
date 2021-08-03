#include <stdio.h>

int main(){
    int comp, corte, x, y, conv=0;
    scanf(" %d %d", &comp, &corte);
    for (int i=0; i<comp; i++){
        scanf(" %d %d", &x, &y);
        if(x+y>=corte && x!=0 && y!=0){
            conv++;
        }
    }
    printf("%d",conv);
}