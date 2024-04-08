#include <stdio.h>

int main(void)
{
        int input, year;

        printf("연도 입력 : ---- \b\b\b\b\b");
        scanf_s("%d,", &input);

        year = ((input % 4 == 0) && !(input % 100 == 0) || (input % 400 == 0));

        if(year == 0)
        {
            printf("입력한 %d년은 평년에 해당합니다.\n", input);
        }
        else
        {
            printf("입력한 %d년은 윤년에 해당합니다.\n", input);
        }

        return 0;
}