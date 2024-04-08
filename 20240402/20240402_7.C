#include <stdio.h>

int main(void)
{
    int num1, num2;
    char A;

    scanf("%d %c %d",&num1, &A, &num2);

    // if(A == '+') printf("%d %c %d = %d", num1, A, num2, num1+num2);
    // else if(A == '-') printf("%d %c %d = %d", num1, A, num2, num1-num2);
    // else if(A == '*') printf("%d %c %d = %d", num1, A, num2, num1*num2);
    // else if(A == '/') printf("%d %c %d = %f", num1, A, num2, (float)num1/num2);
    // else printf("정확한 정수와 기호를 입력해주십시오.");
    
    switch(A)
    {
        case '+':
            printf("%d %c %d = %d", num1, A, num2, num1+num2);
            break;
        case '-':
            printf("%d %c %d = %d", num1, A, num2, num1-num2);
            break;
        case '*':
            printf("%d %c %d = %d", num1, A, num2, num1*num2);
            break;
        case '/':
            printf("%d %c %d = %f", num1, A, num2, (float)num1/(float)num2);
            break;
        default:
            printf("정확한 정수와 기호를 입력해주십시오.");
            break;
    }   
}