// *표를 이용하여 삼각형 모양을 출력하는 프로그램

#include <stdio.h>

void main(){
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){  // 내부 루프의 조건을 수정하여 삼각형 모양을 만듭니다.
            printf("*");
        }
        printf("\n");
    }
}


