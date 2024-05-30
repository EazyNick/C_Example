/*선행처리기 #include에 관련한 프로그램*/

#include <stdio.h> // scanf(), printf() 사용하기 위함
#include <conio.h> // getch() 사용하기 위함
#include <"Custom/factorial.h"> // 사용자 정의 헤더 파일 포함

void main()
{
    int x;
    scanf(%d, &x);
    printf("%d != %d", x, factorial(x));
    getch()
}


