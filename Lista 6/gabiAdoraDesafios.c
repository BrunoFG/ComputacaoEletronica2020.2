#include <stdio.h>
#include <string.h>
#include <ctype.h>
void derivada(int *coe, int *exp){
    *coe*=*exp;
    *exp-=1;
}
int main(){
    int monomios, coeficiente, expoente;
    char incognita, polinomio[30], buffer[50], monomio[10], inco='0';
    do{
        scanf(" %d", &monomios);
        if(monomios==0) break;
        for(int i=0; i<monomios; i++){
            scanf(" %d %c %d", &coeficiente, &incognita, &expoente);
            if(incognita!='0'){
                inco = incognita;
            }
            derivada(&coeficiente, &expoente);
            if(expoente==0){
                if(coeficiente<0){
                    snprintf(monomio, 10, "%d", coeficiente);
                }else{
                    snprintf(monomio, 10, "+%d", coeficiente);
                }
                strcat(polinomio, monomio);
            }else if(expoente>0){
                if(coeficiente<0){
                    snprintf(monomio, 10, "%d%c^%d", coeficiente, incognita, expoente);
                }else{
                    snprintf(monomio, 10, "+%d%c^%d", coeficiente, incognita, expoente);
                }
                strcat(polinomio, monomio);
            }
        }
        snprintf(buffer, 50, "f'(%c)=", inco);
        strcat(buffer, polinomio);
        if(inco == '0'){
            printf("f'(0)=0\n");
        }else{
            printf("%s\n", buffer);
        }
        polinomio[0]='\0';
        buffer[0]='\0';
        monomio[0]='\0';
        inco='0';
    }while(1);
}