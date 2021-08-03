#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100];
    int a=0, e=0, i=0, o=0, u=0, vogais=0;
    scanf(" %[^\n]s", frase);
    for(int j=0; frase[j]!='\0'; j++){
        frase[j]=tolower(frase[j]);
        if(frase[j]=='a'){
            a++;
            vogais++;
        }
        if(frase[j]=='e'){
            e++;
            vogais++;
        }
        if(frase[j]=='i'){
            i++;
            vogais++;
        }
        if(frase[j]=='o'){
            o++;
            vogais++;
        }
        if(frase[j]=='u'){
            u++;
            vogais++;
        }
    }
    printf("a %d\ne %d\ni %d\no %d\nu %d\n%.2f%%", a, e, i, o, u, 100.0*vogais/strlen(frase));
}