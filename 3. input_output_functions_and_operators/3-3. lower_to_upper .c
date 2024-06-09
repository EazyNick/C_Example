// 문자형 자료의 입출력 프로그램(소문자를 대문자로 변환)

#include <stdio.h>
void main()
{
    char c;
    printf("소문자 한 개를 입력하시오 \n"); 
    c=getchar(); // 문자형 자료 입력함수
    c=c-32; // 소문자를 대문자로 변환(ASCII 코드값 사용)
    putchar(c); // 문자형 자료 출력함수

}