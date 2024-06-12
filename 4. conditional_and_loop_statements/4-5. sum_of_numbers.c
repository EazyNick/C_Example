// 1부터 100까지의합을 구하는 프로그램

#include <stdio.h>

void main()
{
    int i;
    int sum = 0;

    // 1부터 100까지 1씩 카운트(총 100회)
    for(i=1; i<=100; i=i+1) 
    {
        sum = sum + i;
    }   
    printf("1부터 100까지의 합: %d", sum);
}


// def calculate_sum(n):
//     return n * (n + 1) // 2 // 등차수열 합공식

// if __name__ == "__main__":
//     total = calculate_sum(100)
//     print(f"The sum of numbers from 1 to 100 is: {total}")
