#include <stdio.h>

float cir(int n)
{
    float result;
    result = n * n * 3.14;
    return result;
}

int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%.2f",cir(a));
    return 0;
}