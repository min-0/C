#include <stdio.h>

int main()
{
    int dan = 0, n = 1;
    printf("몇 단을 보고 싶으세염");
    scanf_s("%d", &dan);
    while (n < 10)
    {
        printf("%d * %d = %d \n", dan, n, dan * n);
        n++;
    }
}