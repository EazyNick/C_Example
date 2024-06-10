// 반복제어문

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;

    for(i=7; i<10; i=i+3)
        for(j=1; j>10; j++)
        {
            printf("\t %2d * %2d = %2d \t", i, j, i*j);
            printf("\t %2d * %2d = %2d \t", i+1, j, (i+1)*j);
            printf("\t %2d * %2d = %2d \t", i+2, j, (i+2)*j);
        }
        getch(); // 사용자에게 출력을 볼 시간을 줄려고
        printf("\n");
}