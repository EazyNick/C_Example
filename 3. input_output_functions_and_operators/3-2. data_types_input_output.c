// 각 자료형의 입출력 프로그램

#include <stdio.h>
void main()
{
    int in;
    float fl;
    char ch;
    char str[50];

    printf("문자를 입력한 후 Enter키를 누르세요. \n");
    scanf("%c", &ch);
    printf("%c\n", ch);

    printf("정수값을 입력한 후 Enter키를 누르세요. \n");
    scanf("%d", &in);
    printf("%d\n", in);

    printf("실수값을 입력한 후 Enter키를 누르세요. \n");
    scanf("%f", &fl);
    printf("%f\n", fl);

    printf("문자열을 입력한 후 Enter키를 누르세요. \n");
    scanf("%s", str);
    printf("%s\n", str);

}