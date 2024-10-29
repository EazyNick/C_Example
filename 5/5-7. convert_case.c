// 입력되는 소문자를 대문자로, 대문자를 소문자로 변환하는 프로그램

#include<stdio.h>
#include <ctype.h>

int main()
{
    char ch, ch1, ch2;
    printf("문자를 입력하시오: \n");
    ch = getchar();
    
    if (isupper(ch)) // 입력된 문자가 대문자인 경우
    {
        printf("%c is an uppercase \n", ch); // 세미콜론 추가
        ch1 = tolower(ch); // 소문자로 변환
        printf("%c is a lowercase \n", ch1); // 세미콜론 추가
    }
    else if (islower(ch)) // 입력된 문자가 소문자인 경우
    {
        printf("%c is a lowercase \n", ch);
        ch2 = toupper(ch); // 대문자로 변환
        printf("%c is an uppercase \n", ch2); // 대문자로 변환된 문자 출력
    }
    else    
    {
        printf("%c is not an alphabet character \n", ch); // 알파벳 문자가 아닌 경우
    }

    return 0;
}
