#include <stdio.h>
#include <stdlib.h>
int main(){
    int l,c,n, r;
    scanf("%d %d %d", &l, &c, &n);
    int matriz[l][c];
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf(" %d", &matriz[i][j]);
        }
    }
    if(n>0){
        if((n+4)%4==0)r=0;
        if((n+4)%4==1)r=1;
        if((n+4)%4==2)r=2;
        if((n+4)%4==3)r=3;
    }else{
        n=abs(n);
        if((n+4)%4==0)r=0;
        if((n+4)%4==1)r=3;
        if((n+4)%4==2)r=2;
        if((n+4)%4==3)r=1;
    }
    if(r==0){
        for(int i=0; i<l; i++){
            for(int j=0; j<c; j++){
                printf("%d", matriz[i][j]);
                if(j<(c-1)){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else if(r==1){
        for(int i=0; i<c; i++){
            for(int j=l-1; j>=0; j--){
                printf("%d", matriz[j][i]);
                if(j>0){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else if(r==2){
        for(int i=l-1; i>=0; i--){
            for(int j=c-1; j>=0; j--){
                printf("%d", matriz[i][j]);
                if(j>0){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else{
        for(int i=c-1; i>=0; i--){
            for(int j=0; j<l; j++){
                printf("%d", matriz[j][i]);
                if(j<l-1){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}