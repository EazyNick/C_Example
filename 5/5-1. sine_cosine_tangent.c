// sine, cosine, tangent 값을 출력하는 프로그램(-1부터 1까지)

#include <stdio.h>
#include <math.h>

int main()
{
    double val = -1.0;

    do {
        printf("sine of %f is %f \n", val, sin(val)); // sin(): sin 값을 구하는 함수
        printf("cosine of %f is %f \n", val, cos(val)); // cos(): cosine 값을 구하는 함수
        printf("tangent of %f is %f \n", val, tan(val)); // tan(): tangent 값을 구하는 함수
        val += 0.1; // val을 0.1씩 증가
    } while (val <= 1.0);

    return 0;
}
