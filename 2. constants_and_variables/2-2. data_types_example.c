/* 자료형의 개념에 관한 프로그램*/

#include <stdio.h>
#define AGE 24 // 매크로를 이용한 정수형 상수 정의
#define PI 3.141592 // 매크로를 이용한 실수형 상수 정의
#define NAME "김성준" // 매크로를 이용한 문자열 상수 정의

const int a = 10;
const float b = 10.56789;
const char c = 'K'; // CONST를 이용한 문자형 상수 정의
const char* KNOU = "서울대학교"; // CONST를 이용한 문자열 상수 정의, char KNOU[] 방법도 있음
/* 
char는 단일 문자를 저장합니다.
char*는 문자열의 시작 주소(포인터)를 저장
*/

void main()
{
    int i = 24; // 정수형 변수 정의
    float j = 4.5; // 실수형 변수 정의
    char k = 'A'; // 문자형 변수 정의
    char ch[10] = "김성준"; // 문자열 변수 정의(배열변수 이용)
    char *p = "소프트웨어공학과"; // 문자열 변수 정의(포인터변수 이용)

    printf("학교는: %s 이름은: %s 나이는: %d\n\n", KNOU, NAME, AGE); // 상수값 출력
    printf("%s %s 나이: %d 학점: %c 평점: %f\n", p, ch, i, k, j); // 변수값 출력
}


