/* 화씨를 섭씨로 변환하는 프로그램*/

#include <stdio.h>
#define FZ_PT 32.0  
#define S_FACTOR (5.0/9.0)

void main()
{
    float fa, ce;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fa);
    ce = (fa - FZ_PT) * S_FACTOR; // celius, 32를 빼고 5/9 곱해주기
    printf("Celsius equivalent: %.1f\n", ce);
    
    return 0;
}


