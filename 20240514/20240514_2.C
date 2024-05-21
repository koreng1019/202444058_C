#include <stdio.h>

int loop(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("~!@#$^*()_+|\n");
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    loop(n);
    return 0;
}