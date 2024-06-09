/*매크로 상수 정의 프로그램*/

#include <stdio.h>

#define program void main() //void main()을 program으로 치환
#define print printf // printf 를 print로 치환
#define MAX 100 // MAX 값으로 100을 치환
#define MIN 10 // 매크로명 MIN 값으로 10을 치환

void main()
{
    print("MAX = %d MIN: %d\n", MAX, MIN);
}


