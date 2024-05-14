#include <stdio.h>

int print_reverse(int n);

int main(void)
{
    int num;
    scanf("%d",&num);
    print_reverse(num);
}

int print_reverse(int n)
{
    if(n <= 0)
        return 0;
    else
    {
        printf("%d\n",n);
    }
    return print_reverse(n-1);
}