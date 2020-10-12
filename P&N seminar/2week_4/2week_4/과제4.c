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

/*
태현선배의 힘을 쪼꼼 빌렸어요 윗 피라미드만 짜주시고 밑에 반대 피라미드는 제가 했답니당
아직도 왜 j <= i 를 하면 되는 건지 모르겠어염 ㅎㅎ,,
*/