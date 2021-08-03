#include <stdio.h>
#include <math.h>
int bissexto(int ano){
    if(ano%400==0 || (ano%4==0 && ano%100!=0)) return 1;
    else return 0;
}
int bissextos(int ano1, int ano2){
    int bissextos=0;
    for(int ano=ano1; ano<=ano2; ano++){
        if(bissexto(ano)==1){
            bissextos++;
        }
    }
    return bissextos;
}
int diadoano(int dia, int mes, int ano){
    int dias;
    int bis = bissexto(ano);
    switch (mes){
        case 1: dias=dia; break;
        case 2: dias=dia+31; break;
        case 3: dias=dia+59; break;
        case 4: dias=dia+90; break;
        case 5: dias=dia+120; break;
        case 6: dias=dia+151; break;
        case 7: dias=dia+181; break;
        case 8: dias=dia+212; break;
        case 9: dias=dia+243; break;
        case 10: dias=dia+273; break;
        case 11: dias=dia+304; break;
        default: dias=dia+334;
    }
    if(mes>2 && bis==1){
        dias++;
    }
    return dias;
}
int diaMes(int mes, int ano){
    int diaMes;
    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12) diaMes=31;
    else if(mes==4||mes==6||mes==9||mes==11) diaMes=30;
    else{
        if(bissexto(ano)){
            diaMes=29;
        }else{
            diaMes=28;
        }
    }
    return diaMes;
}
int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2, n, diasEntre, hora, dias;
    scanf(" %d/%d/%d %d/%d/%d", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);
    int dias1;
    if(bissexto(ano1)){
        dias1 = 366-diadoano(dia1, mes1, ano1);
    }else{
        dias1 = 365-diadoano(dia1, mes1, ano1);
    }
    if(ano2-ano1==0){
        diasEntre = diadoano(dia2, mes2, ano2) - diadoano(dia1, mes1, ano1);
    }else if(ano2-ano1==1){
        diasEntre = dias1 + diadoano(dia2, mes2, ano2);
    }else{
        diasEntre = dias1 + diadoano(dia2, mes2, ano2) + (365*(ano2-(ano1+1))) + bissextos(ano1+1, ano2-1);
    }
    if(diasEntre%2==0){
        hora = 0;
        dias = diasEntre/2;
    }else{
        hora = 1;
        dias = (diasEntre-1)/2;
    }
    for(; dias>=1; dias--){
        dia1++;
        if(dia1>diaMes(mes1, ano1)){
            dia1 = 1;
            mes1++;
        }
        if(mes1>12){
            mes1 = 1;
            ano1++;
        }
    }
    if(dia1<10 && mes1<10){
        printf("0%d/0%d/%d", dia1, mes1, ano1);
    }else if(dia1<10 && mes1>=10){
        printf("0%d/%d/%d", dia1, mes1, ano1);
    }else if(mes1<10){
        printf("%d/0%d/%d", dia1, mes1, ano1);
    }else{
        printf("%d/%d/%d", dia1, mes1, ano1);
    }
    if(hora){
        printf(" 12:00");
    }else{
        printf(" 00:00");
    }
}