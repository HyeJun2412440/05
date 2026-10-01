#include <stdio.h>

int main(void)
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("입력한 정수는 양수입니다.\n");
    }
    else if (num < 0)
    {
        printf("입력한 정수는 음수입니다.\n");
    }
    else
    {
        printf("입력한 정수는 0입니다.\n");
    }

    return 0;
}