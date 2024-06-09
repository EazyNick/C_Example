// 단항 연산자 프로그램(++, --)

#include <stdio.h>

void main()
{
    int x = 1;

    printf("x=%d\n", x++); // x = 1을 출력한 후 1 증가
    printf("x=%d\n", x++);// x = 2을 출력한 후 1 증가
    printf("x=%d\n", ++x); // 1이 증가하고, x = 4를 출력
    printf("x=%d\n", x--); // x = 4을 출력한 후 1 감소
    printf("x=%d\n", x--); // x = 3을 출력한 후 1 감소
    printf("x=%d\n", --x); // 1이 먼저 감소하고, x = 1을 출력
}