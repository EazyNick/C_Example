// 문자형과 문자열 자료의 입출력 프로그램

#include <stdio.h>
#define UNIV "서울대학교"
#define DEF "소프트웨어공학과"

void main()
{
    char ch;
    char name[20];

    printf("이름을 입력하시오");
    fgets(name, sizeof(name), stdin); // 문자열 자료 입력함수로 gets 대신 fgets 사용
    //gets(name); // 문자열 자료 입력함수
    printf("학점을 입력하시오");
    ch = getchar(); // 문자형 자료를 키보드로 입력받음
    printf("\n\n");

    puts(UNIV); // 문자열 자료 출력함수
    puts(DEF);
    puts(name);
    printf("학점은");
    putchar(ch); // 문자형 자료를 화면에 출력

}