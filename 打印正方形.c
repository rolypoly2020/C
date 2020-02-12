#include <stdio.h>
int main()
{
    int N;
    char C;
    scanf("%d %c", &N, &C);
    if (N < 3 || N > 20)
        printf("请输入3到20间的数");
    else
    {
        for (int i = 1; i <= N / 2; i++)
        {
            if (i == 1 || i == N / 2)
            {
                for (int j = 1; j <= N; j++)
                    printf("%c", C);
            }
            else
            {
                printf("\n%c", C);
                for (int k = 1; k <= N - 2; k++)
                    printf(" ");
                printf("%c\n", C);
            }
        }
    }
    return 0;
}
