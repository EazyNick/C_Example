// 파보나치 수열을 출력하는 프로그램

#include <stdio.h>

unsigned fibonacci(void);

int main() {
    int k;
    printf(" k | fibonacci \n");
    printf("**********\n");
    for (k = 1; k <= 10; k++)
        printf("%2d | %6u\n", k, fibonacci());

    return 0;
}

unsigned fibonacci(void) {
    static unsigned f = 0, pre_f = 1;

    unsigned re = f;
    f += pre_f;
    pre_f = re;
    
    return re;
}
