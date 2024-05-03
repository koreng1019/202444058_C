#include <stdio.h>

int main(void)
{
    int num = 0;
    int sum_odd = 0;
    int i = 0;

    while(1)
    {
        scanf("%d",&num);

        if(num==0)
        {
            printf("홀수의 합 %d, 홀수의 평균 %f",sum_odd,(float)sum_odd/i);
            break;  
        }
        else if(num%2==1) 
        {
            sum_odd += num;
            i++;
        }
    }
    return 0;
}