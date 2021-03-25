#include <stdio.h>

int main()
{
    int dan = 1, n = 1;

    while (dan < 10)
    {
        n = 1; //두 번째 while을 돌리기 위해 n값을 1로 초기화

        while (n < 10)
        {
            printf("%d * %d = %d \n", dan, n, dan * n);
            n++;
        }
        dan++;
    }
}