#include <stdio.h>

int main() {

    for (int i = 0; i < 3; i++)
    {
        //- ����� ����
        for (int j = i; j < 2; j++)
        {
            printf("-");
        }
        //�Ƕ�̵� ����� ����
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            printf("*");
        }
        //- ����� ����
        for (int j = i; j < 2; j++)
        {
            printf("-");
        }

        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("-");
        }

        for (int j = 4; j > (i * 2) + 1; j--)
        {
            printf("*");
        }
       
        for (int j = 0; j <= i; j++)
        {
            printf("-");
        }

        printf("\n");
    }
}
