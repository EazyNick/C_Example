// 주어진 문자열에서 특정문자의 개수를 구하는 프로그램

#include <stdio.h>

void main(){
    static char a[31] = "KOREA NATIONAL OPEN UNIVERSITY";
    int i, c;
    c = 0;
    for(i=0; i<30; i++)  // for 루프의 조건 수정
        if(a[i] == 'O')
            c++;
    printf("O의 개수 = %d", c);
}
