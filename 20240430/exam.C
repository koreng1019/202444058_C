#include <stdio.h>

int main(void)
{
    int num;
    int result;
    int i = 1;
    
    scanf("%d",&num);

    if(num==0) return 1;
    
    while(1)
    {
        result = num * i;
        printf("%d * %d = %d\n",num,i,result);
        i++;
        if(i>9) break;
    }
}