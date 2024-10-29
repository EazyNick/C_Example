    // 소문자를 대문자로 변환하는 프로그램

#include <stdio.h>
#include <string.h>

int main(){
    char string[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned i, len;
    len = strlen(string); // strlen(): 문자열의 길이를 구하는 함수
    puts(string);
    for(i=0; i<len; i++){
        if(string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 'a' + 'A'; // 소문자를 대문자로 변환
        }
    }
    puts(string); // 변환된 문자열 출력
    return 0;
}

