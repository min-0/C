#include <stdio.h>

int main()
{
    int dan = 1, n = 1;

    while (dan < 10)
    {
        n = 1; //�� ��° while�� ������ ���� n���� 1�� �ʱ�ȭ

        while (n < 10)
        {
            printf("%d * %d = %d \n", dan, n, dan * n);
            n++;
        }
        dan++;
    }
}