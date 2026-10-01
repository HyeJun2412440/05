#include <stdio.h>

int main(void)
{
    int answer = 59;
    int num;
    int count = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &num);

        count++;

        if(num > answer)
        {
            printf("high!\n");
        }
        else if (num < answer)
        {
            printf("low!\n");
        }
    }
    while (num != answer);  //num이 answer이 아닌 경우 계속 반복해라

    printf("Congratulation! trials:%d", count);

    return 0;
}