#include <stdio.h>

int main(void)
{
    int num;

    printf("단을 입력하시오.\n");
    scanf("%d",&num);

    for(int i=1; i<=9; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }

    return 0;
}