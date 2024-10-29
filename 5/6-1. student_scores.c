// 학생들 성적을 입력받아 총점과 평균을 구하고, 성적순으로 출력하는 프로그램

#include <stdio.h>
#define N 10

void input(int scr[], int size);
int sum2(int scr[], int size);
void sort(int scr[], int size);

void main(){
    int score[N] = {0};
    int j, sum;
    float average;

    input(score, N);
    sum = sum2(score, N);
    average = (float) sum/N;
    printf("평균 : %f\n", average);

    sort(score, N);
    printf("성적순 : ");
    for(j=0; j<N; j++)
        printf("%d ", score[j]);
    printf("\n");
}

void input(int scr[], int size){
    int j;
    for(j=0; j<size; j++){
        printf("%d번째 성적을 입력하세요 : ", j+1);
        scanf("%d", &(scr[j]));
    }
}

int sum2(int scr[], int size){
    int sum, j;
    for(sum = 0, j = 0; j<size; j++)
        sum += scr[j];
    return sum;
}

void sort(int scr[], int size){
    // 버블 정렬 알고리즘
    int j, k, temp;
    for(j=0; j<size-1; j++){
        for(k=size-1; k>j; k--){
            if(scr[k-1] > scr[k]){
                temp = scr[k-1];
                scr[k-1] = scr[k];
                scr[k] = temp;
            }
        }
    }
}