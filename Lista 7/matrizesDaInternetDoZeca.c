#include <stdio.h>

int main(){
    int A[3][3]={0.}, B[3][3]={0.}, C[3][3]={0.};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf(" %d", &A[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf(" %d", &B[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        C[i][0] = A[i][0]*B[0][0]+A[i][1]*B[1][0]+A[i][2]*B[2][0];
        C[i][1] = A[i][0]*B[0][1]+A[i][1]*B[1][1]+A[i][2]*B[2][1];
        C[i][2] = A[i][0]*B[0][2]+A[i][1]*B[1][2]+A[i][2]*B[2][2];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", C[i][j]);
            if(j!=2)printf(" ");
        }
        printf("\n");
    }
}
/*
C[0][0]) = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0];
C[0][1]) = A[0][0]*B[0][1]+A[0][1]*B[1][1]+A[0][2]*B[2][1];
C[0][2]) = A[0][0]*B[0][2]+A[0][1]*B[1][2]+A[0][2]*B[2][2];
C[1][0]) = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0];
C[1][1]) = A[1][0]*B[0][1]+A[1][1]*B[1][1]+A[1][2]*B[2][1];
C[1][2]) = A[1][0]*B[0][2]+A[1][1]*B[1][2]+A[1][2]*B[2][2];
C[2][0]) = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0];
C[2][1]) = A[2][0]*B[0][1]+A[2][1]*B[1][1]+A[2][2]*B[2][1];
C[2][2]) = A[2][0]*B[0][2]+A[2][1]*B[1][2]+A[2][2]*B[2][2];
*/