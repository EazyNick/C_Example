// 입력된 점수에 대한 학점 평가 프로그램

#include <stdio.h>

void main()
{
    int score;

    printf("점수를 입력하시오:");
    scanf("%d", &score);

    if (score >= 90)
        printf("%d A \n", score);
    else if(score >= 80)
        printf("%d B \n", score);
    else if(score >= 70)
        printf("%d C \n", score);
    else if(score >= 60)
        printf("%d D \n", score);
    else
        printf("%d F \n", score);

}