#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int igual=1;
    char texto[500], palavra1[20], palavra2[20];
    fflush(stdin);scanf(" %[^\n]s", texto);
    fflush(stdin);scanf(" %[^\n]s", palavra1);
    fflush(stdin);scanf(" %[^\n]s", palavra2);
    for(int i=0; i<strlen(texto); i++){
        if(texto[i]==palavra1[0]){
            for(int j=1; j<strlen(palavra1); j++){
                if(texto[i+j]!=palavra1[j]){
                    break;
                }else{
                    igual++;
                }
            }
            if(igual==strlen(palavra1)){
                for(int c=0; c<strlen(palavra2); c++){
                    printf("%c", palavra2[c]);
                }
                i+=strlen(palavra1);
            }
            igual=1;
        }
        printf("%c", texto[i]);
    }
}