// 입력되는 두 문자열을 연결하는 프로그램

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[20]; // str1의 크기를 충분히 크게 설정
    printf("문자열 두 개를 입력하시오: \n");
    scanf("%s", str1); // 공백을 포함한 문자열 입력받기
    scanf(" %s", str2); // 두 번째 문자열 입력받기 (공백과 함께)
    
    strcat(str1, str2); // str2를 str1에 추가
    
    printf("%s \n", str1); // 연결된 문자열 출력
    
    return 0;
}
