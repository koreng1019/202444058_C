#include <stdio.h>

int main(void)
{
    int N=0,X=0;
    scanf("%d %d\n",&N, &X);

    int A[N];
    
    for(int i=0; i<N; i++) 
    {
        scanf("%d", &A[i]);
        
        if(A[i]<X)
        {
            printf("%d ",A[i]);
        }
    }
    
    return 0;


    // int N=0,X=0;
    // scanf("%d %d\n",&N, &X);

    // int A[N]; //배열 최댓값 N
    
    // for(int i=0; i<N; i++) 
    // {
    //     scanf("%d", &A[i]); //배열 A 입력
    // }
    
    // for(int i=0; i<N; i++) 
    // {
    //     printf("%d ",A[i]); //배열 확인
    // }

    // for(int i=0; i<N; i++)
    // {
    //     if(A[i]<X) // A가 X보다 작다면
    //     {
    //         printf("%d ",A[i]); //A 출력
    //     }
    // }

    // return 0;
}