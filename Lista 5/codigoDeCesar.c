#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[30];
    int chave;
    scanf(" %[^\n]s", frase);
    scanf(" %d", &chave);
    for(int i=0; frase[i]!='\0'; i++){
        frase[i]=tolower(frase[i]);
        frase[i]+=chave;
        printf("%c", frase[i]);
    }
}