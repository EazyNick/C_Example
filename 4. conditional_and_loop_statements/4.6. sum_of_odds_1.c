// 1부터 100까지 홀수의 합을 구하는 프로그램 1

#include <stdio.h>

void main()
{
    int i;
    int sum = 0;

    // 1부터 100까지 1씩 카운트(총 100회)
    for(i=1; i<=100; i=i+1) 
    {
        if(i % 2) // % 연산을 이용하여 홀수 판별
        {
            sum = sum + i;
        }
    }   

    printf("1~100까지의 홀수의 합: %d \n", sum);
}


