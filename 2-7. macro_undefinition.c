/*매크로 정의 해제 프로그램*/

#include <stdio.h>
#define SIZE 100 // 매크로 상수 SIZE를 100으로 정의

#if defined SIZE // 매크로 상수 SIZE의 정의 여부 확인
#undef SIZE // 매크로 상수 SIZE의 정의 해제
#define SIZE 200 // 매크로 상수 SIZE를 200으로 정의
#else
#define SIZE 300 // 매크로 상수 SIZE가 정의되지 않았으면 300으로 정의
#endif

void main()
{
    printf("SIZE : %d\n", SIZE);
}


