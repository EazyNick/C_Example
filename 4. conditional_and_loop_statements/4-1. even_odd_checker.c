// 입력된 정수의 짝수와 홀수 판별 프로그램

#include <stdio.h>

void main()
{
    int a;

    printf("정수를 입력하시오: ");
    scanf("%d", &a);

    if(a%2 == 0)
        printf("%d 은(는) 짝수. \n", a);
    if(a%2 == 1)
        printf("%d 은(는) 홀수. \n", a)l

}