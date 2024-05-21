#include <stdio.h>

int big(int x, int y)
{
    return(x>y)? x : y;
}

int main(void)
{
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d",big(a,b));
    return 0;
}