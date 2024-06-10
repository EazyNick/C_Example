// 입력된 두 정수 중 큰 수를 출력하는 프로그램

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("첫 번째 숫자를 입력하시오 \n");
    scanf("%d", &a);
    printf("두 번째 숫자를 입력하시오 \n");
    scanf("%d", &b);
    c = (a < b)? b:a;
    printf("큰 수는 %d 입니다 \n", c);
}