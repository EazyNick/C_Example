// 문자열을 복사하고, 길이를 구하는 프로그램

#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char s[50];
    strcpy(s, "COMPUTER SCIENCE"); // strcpy() 함수로 문자열을 복사
    
    printf("%s \n\n", s);
    
    len = strlen(s); // strlen() 함수로 문자열의 길이를 구함
    printf("%d \n\n", len);
    
    return 0;
}
