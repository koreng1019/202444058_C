#include <stdio.h>

int main(void)
{
    int num1, num2, max, min;

    printf("정수 2개를 차례로 입력\n");

    printf("첫 번쨰 정수 : ____ \b\b\b\b\b");
    scanf_s("%d", &num1);

    printf("두 번쨰 정수 : ____ \b\b\b\b\b");
    scanf_s("%d", &num2);

    // max = (num1 > num2) ? num1 : num2;
    
    if(num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    printf("두 수 중에 더 큰 수는 %d입니다.", max);

    return 0;
}