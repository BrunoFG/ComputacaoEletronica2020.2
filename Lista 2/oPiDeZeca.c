#include <stdio.h>
#include <math.h>

double equ1(int n){
    double pi1 = 0;
    for(int x=0; x<n; x++){
        pi1 += pow(-1,x)/(2*x+1);
    }
    pi1 *= 4;
    return pi1;
}
double equ2(int n){
    double pi2 = 0;
    for(double x=0; x<n; x++){
        pi2 += 2/((4*x+1)*(4*x+3));
    }
    pi2 *= 4;
    return pi2;
}
double equ3(int n){
    double pi3 = 3;
    for(int x=0; x<n; x++){
        if(x==0){continue;}
        pi3 += pow(-1,x)*(-4)/((2*x)*(2*x+1)*(2*x+2));
    }
    return pi3;
}
int main(){
    int it;
    scanf(" %d", &it);
    printf("%lf - %lf\n%lf - %lf\n%lf - %lf", equ1(it), equ1(it)/M_PI, equ2(it), equ2(it)/M_PI, equ3(it), equ3(it)/M_PI);
}