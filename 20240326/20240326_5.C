#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;
    int result;
    printf("다섯 개의 숫자를 입력하시오 : ");
    scanf("%d %d %d %d %d",a,b,c,d,e);
    result = a + 3;
    printf("%d\n",result);

    result = b - 3;
    printf("%d\n",result);

    result = c * 3;
    printf("%d\n",result);

    result = d / 3;
    printf("%d\n",result);

    result = e % 3;
    printf("%d\n",result);

    return 0;
}