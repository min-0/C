#include <stdio.h>

int main() {

    for (int i = 0; i < 3; i++)
    {
        //- 모양을 형성
        for (int j = i; j < 2; j++)
        {
            printf("-");
        }
        //피라미드 모양을 형성
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            printf("*");
        }
        //- 모양을 형성
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
