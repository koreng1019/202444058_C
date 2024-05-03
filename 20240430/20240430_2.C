#include <stdio.h>

int main(void)
{
    int num = 0;
    int odd = 0;
    int even = 0;

    while(1)
    {
        scanf("%d",&num);

        if(num==0)
        {
            printf("홀수 %d개, 짝수 %d개",odd,even);
            break;
        }
        else if(num%2==1) odd += 1;
        else if(num%2==0) even += 1;
    }
    return 0;
}