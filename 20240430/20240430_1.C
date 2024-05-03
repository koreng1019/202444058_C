#include <stdio.h>

int main(void)
{
    int num;
    int result;
    int i = 1;
    scanf("%d",&num);

    while(1)
    {
        result = num - i;
        if(result>=0) printf("%d\n",i);
        else return 0;
        i++;
    }
}