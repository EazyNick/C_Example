// 문자열의 길이를 구하는 프로그램

#include <stdio.h>
#include <string.h>

int main()
{
    char string[200];
    printf("문장을 입력한 후, Enter 키를 치세요! \n");
    printf("아무것도 입력하지 않으면 프로그램은 종료됩니다!\n");

    do {
        fgets(string, sizeof(string), stdin); // fgets()로 문자열을 입력받음
        string[strcspn(string, "\n")] = '\0'; // 개행 문자(\n)을 널 문자(\0)로 대체하여 제거

        if (strlen(string) == 0) {
            break;
        }
        printf("문자열의 길이는 %zu입니다. \n", strlen(string)); // %zu로 문자열 길이 출력 (size_t 타입이기 때문)
    } while(1);

    return 0;
}
