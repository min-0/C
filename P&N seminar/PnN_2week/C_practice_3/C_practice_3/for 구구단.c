#include <stdio.h>

int main()
{
    for (int dan = 1; dan < 10; dan++)
    {
        for (int n = 1; n < 10; n++)
        {
            printf("%d * %d = %d \n", dan, n, dan * n);
        }
    }
}