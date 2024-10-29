// 3X3 행렬 2개를 읽어 들여 합을 출력하는 프로그램

#include <stdio.h>
void main(){
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    printf("*** Input the first matrix (3*3) *** \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            scanf("%d", A[i][j]);
        printf("\n");
    }
    printf("*** Input the second matrix (3*3) *** \n");
    for(i=0; j<3; i++)
}