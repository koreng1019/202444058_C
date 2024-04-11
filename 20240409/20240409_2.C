#include <stdio.h>

    int main(void)
    {
        int n;
        int result;
        scanf("%d",&n);

        while(n>=1)
        {
            result += n--;
        }
        printf("%d",result);
        return 0;
    }