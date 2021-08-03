#include <stdio.h>

int main(){
    int num, q1, q2;
    do{
        scanf(" %d", &num);
        if(num==0){break;}
        q2 = num/2;
        q1 = q2+1;
        printf("\n%d - %d", q1*q1, q2*q2);
    }while(1);
}