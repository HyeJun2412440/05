#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    char c;

    printf("enter the calculation: ");
    scanf("%d %c %d", &num1, &c, &num2);

    if ( c== '+')
    {
        printf("= %d\n", num1 + num2);
    }
    else if (c == '-')
    {
        printf("= %d\n",num1 - num2);
    }
    else if ( c == '*')
    {
       printf("= %d\n", num1 * num2);
    }
    else if ( c == '/')
    {
       printf("= %d\n", num1 / num2);
    } 
    else if ( c == '%')
    {
       printf(" = %d\n", num1 % num2);
    }

    return 0;
}
    