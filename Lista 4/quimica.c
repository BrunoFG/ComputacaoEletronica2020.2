#include <stdio.h>
#include <math.h>

int main(){
    double x = 2.3, y = -7, ph;
    ph = (-1)*log10(x*pow(10, y));
    printf("%d",ph);
}