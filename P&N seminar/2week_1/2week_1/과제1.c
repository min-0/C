#include <stdio.h>

int main()
{
    for (int n = 1; n <= 9; n++)
    {
        printf("\n");

        for (int dan = 1; dan < 10; dan++)
        {
            printf("%d * %d = %d ", dan, n, dan * n);
        }
    }
}
/* 
첫번째 for문으로 n 1 과 두번째 for문으로 dan 1~9 까지 출력되게 한 다음 \n 줄 바꿈 하면
n은 1 다음인 2부터 다시 반복문이 실행되고 두번째 for문이 마치면 다시 줄 바꿈하면서 계속 반복되어
가로로 출력되는 구구단이 된다.
*/