#include <stdio.h>

int main(void)
{
    int num;

    printf("정수 하나를 입력하시오: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    printf("절댓값은 %d입니다.\n", num);

    return 0;
}