// 입력된 정수의 짝수와 홀수 판별 프로그램

#include <stdio.h>

void main()
{
    int i;

    printf("정수를 입력하시오: ");
    scanf("%d", &i);
    printf("%d\n", (i%2)? 1:0); // %: 나머지 값을 이용하는 연산자
    // 짝수면 0, 홀수(나머지가 있으면)면 1을 출력
}