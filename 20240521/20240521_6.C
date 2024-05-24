#include <stdio.h>

int main(void)
{
    int contestants[] = {1, 2, 3,};
    int *choice = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("%i\n",contestants[2]);
}