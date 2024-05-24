#include <stdio.h>

int main(void)
{
    int suNo;
    scanf("%d",&suNo);

    int A[suNo+1];
    int S[suNo+1];

    for(int i=1; i<=suNo; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=1; i<=suNo; i++)
    {
        S[i] = S[i-1] + A[i];
    }

    for(int i=1; i<=suNo; i++)
    {
        printf("%d ",S[i]);
    }
    return 0;
}