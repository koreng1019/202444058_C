#include <stdio.h>

int main(void)
{
    int N;
    int result=0;
    scanf("%d",&N);
    
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    
    int M = 0;
    
    for(int j=N-1; j>=0; j--)
    {
        if(M<A[j])
        {
            M = A[j];
            result += 1;
        }
    }

    printf("%d",result);

    return 0;
}