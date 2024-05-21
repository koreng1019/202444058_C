#include <stdio.h>

int main(void)
{
    int score[5] = {87, 92, 89, 98, 78};

    for(int i=0; i<sizeof(score)/sizeof(score[0]); i++)
    {
        printf("score[%d] = %d\n",i, score[i]);
    }
    
    return 0;
}