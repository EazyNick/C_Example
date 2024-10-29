// 다음 실행 결과와 같은 모양으로 출력하는 프로그램 

#include <stdio.h>

int main(){
    int i, j;
    float m, k;
    k = 26;
    for(i=65; i<=90; i++) // 대문자 A-Z의 ASCII 코드 값이 65~90
    {
        for(m=k; m>=0; m--) // 왼쪽으로부터 26칸을 띄고 출력 시작
            printf(" ");
        k = k - 1; // 1칸씩 줄여 가면서 출력
        for(j=65; j<=i; j++)
            printf("%c", j);
        printf("\n");
    }
    return 0;
}



