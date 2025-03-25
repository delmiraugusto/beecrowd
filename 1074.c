#include <stdio.h>

int main()
{

    int x, N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            printf("NULL\n");
        }
        else if (x % 2 == 0)
        {
            printf("EVEN ");
            if (x > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
        else
        {
            printf("ODD ");
            if (x > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }

    return 0;
}