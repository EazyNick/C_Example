// 단위를 변환하는 프로그램(mile을 kilometer로)

#include <stdio.h>
#define KILO 1.609 

void main()
{
    float miles, kms;
    printf("\t nput(miles) ==>"); // \t는 escape 문자(수평으로 한 tab만큼 띄움)
    scanf("%f", &miles);
    kms = KILO * miles; // 1 mile = 1.609 km
    printf("\t %f mile = %f km \n", miles, kms);
}