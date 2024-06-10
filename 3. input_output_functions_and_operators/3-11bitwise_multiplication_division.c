// 비트 연산자를 이용한 곰셈과 나눗셈 연산 프로그램

#include <stdio.h>

void main()
{
    int result;
    printf("4 X 8/16 =");
    result = 4;
    result = result << 3; // 2진수에서 3칸 좌로 시프트와 같다. 2의 3승 > 2
    result = result >> 4; // 2진수에서 4칸 우로 시프트와 같다  2의 3승 > 2의 7승
    printf("%d\n", result);
}