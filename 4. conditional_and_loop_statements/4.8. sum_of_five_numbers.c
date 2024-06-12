// 다섯 개의 정숫값을 입력받아 총합을 구하는 프로그램

#include <stdio.h>

void main()
{
    int count; // 횟수 카운트를 하기 위한 변수
    int tmp; // 정숫값을 읽을 임시 변수
    int total = 0; // 읽은 정숫값을 합산하기 위한 변수

    for(count=1; count<=5; count++)
    {
        printf("%d번째 정숫값을 입력한 후 Enter키를 누르세요. ", count);
        scanf("%d", &tmp);
        total += tmp;
    }
    printf("읽은 정수의 총합은 %d입니다. \n", total);
}


