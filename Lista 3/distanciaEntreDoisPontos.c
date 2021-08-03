#include <stdio.h>
#include <math.h>

void coord(int x1, int y1, int x2, int y2){
    float dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%f", dist);
}
int main(){
    int a, b, c, d;
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    coord(a, b, c, d);
}