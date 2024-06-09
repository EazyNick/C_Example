/* 두 수의 곱을 계산하는 프로그램*/

#include <stdio.h>
int product (int x, int y);

void main()
{
    int a, b, c;
    printf("Enter a number between 1 and 100 : ");
    scanf("%d", &a);
    printf("Enter another number between 1 and 100 : ");
    scanf("%d", &b);
    c = product(a,b);
    printf("%d * %d = %d\n", a, b, c);
}

int product (int x, int y)
{
    return (x*y);
}
