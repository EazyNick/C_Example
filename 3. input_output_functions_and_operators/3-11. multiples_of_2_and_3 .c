// 1부터 100까지의 정수에서 2와 3의 공배수를 구하는 프로그램

#include <stdio.h>

void main()
{
    int i;
    for(i=1; i<=100; i++)
        if(i%2 == 0 && i%3 == 0) // 2와 3의 공배수
            printf("%d ", i);
}