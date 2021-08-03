#include <stdio.h>

int main(){
    char x, y, z, menor, maior, meio;
    scanf(" %c %c %c", &x, &y, &z);
    menor = x; maior = x;
    if (y<x && y<z){
        menor = y;
    }else if (z<x && z<y){
        menor = z;
    }
    if (y>x && y>z){
        maior = y;
    }else if (z>x && z>y){
        maior = z;
    }
    if(x != menor && x != maior){
        meio = x;
    }else if(y != menor && y != maior){
        meio = y;
    }else{
        meio = z;
    }
    int diff1 = meio - menor;
    int diff2 = maior - meio;
    int vogais = 0;
    int num = 0;
    if(menor=='A'||menor=='E'||menor=='I'||menor=='O'||menor=='U'){vogais++;}
    if(meio=='A'||meio=='E'||meio=='I'||meio=='O'||meio=='U'){vogais++;}
    if(maior=='A'||maior=='E'||maior=='I'||maior=='O'||maior=='U'){vogais++;}
    if(menor == '0'||menor == '1'||menor == '2'||menor == '3'||menor == '4'||menor == '5'||menor == '6'||menor == '7'||menor == '8'||menor == '9'||menor<65||menor>90){num++;}
    if(meio == '0'||meio == '1'||meio == '2'||meio == '3'||meio == '4'||meio == '5'||meio == '6'||meio == '7'||meio == '8'||meio == '9'||meio<65||meio>90){num++;}
    if(maior == '0'||maior == '1'||maior == '2'||maior == '3'||maior == '4'||maior == '5'||maior == '6'||maior == '7'||maior == '8'||maior == '9'||maior<65||maior>90){num++;}
    if(num!=0){
        printf("Etiquetas erradas!");
    }else if(diff1!=diff2){
        printf("Só umas letras ai...");
    }else if(diff1==1){
        if(vogais==0){
            printf("Sequência perfeita.");
        }else{
            printf("Sequência quase perfeita.");
        }
    }else if(diff1==2){
        if(vogais==0){
            printf("Bissequência perfeita.");
        }else{
            printf("Bissequência quase perfeita.");
        }
    }else if(diff1==3){
        if(vogais==0){
            printf("Trissequência perfeita.");
        }else{
            printf("Trissequência quase perfeita.");
        }
    }else{
        printf("Só umas letras ai...");
    }
}