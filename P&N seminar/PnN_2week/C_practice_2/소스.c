#include <stdio.h>

int main()
{
    int dan = 0, n = 1;
    printf("�� ���� ���� ��������");
    scanf_s("%d", &dan);
    while (n < 10)
    {
        printf("%d * %d = %d \n", dan, n, dan * n);
        n++;
    }
}