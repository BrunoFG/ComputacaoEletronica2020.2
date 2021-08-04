#include <stdio.h>
#include <string.h>

int main(){
    char carta[106], zelda[]={"zelda"};
    scanf(" %[^\n]s", carta);
    for(int i=0; carta[i]!='\0'; i++){
        carta[i]=tolower(carta[i]);
    }
    if(strstr(carta, zelda)==NULL){
        printf("Link Tranquilo");
    }else{
        printf("Link Bolado");
    }
}