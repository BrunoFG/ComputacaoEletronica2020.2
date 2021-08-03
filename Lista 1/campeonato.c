#include <stdio.h>

int main(){
    int Cv, Ce, Cs, Fv, Fe, Fs, Pc, Pf;
    do{
        scanf(" %d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
    }while(Cv<0 || Cv>100 || Ce<0 || Ce>100 || Fv<0 || Fv>100 || Fe<0 || Fe>100 || Cs<-1000 || Cs>1000 || Fs<-1000 || Fs>1000);
    Pc = Cv*3+Ce;
    Pf = Fv*3+Fe;
    if(Pc>Pf){
        printf("C");
    }else{
        if(Pf>Pc){
            printf("F");
        }else{
            if(Cs>Fs){
                printf("C");
            }else{
                if(Fs>Cs){
                    printf("F");
                }else{
                    printf("=");
                }
            }
        }
    }
}