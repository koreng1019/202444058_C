#include <stdio.h>

int main(void)
{
    int p=4;
    for (int i = 0; i < 5; i++, p*= i)
    {
        printf("true\n");
    }
    printf("%d", p);

    return 0;
}