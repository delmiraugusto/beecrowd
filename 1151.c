#include <stdio.h>

int main()
{
    int N, n1 = 0, n2 = 1, fibo = 0;

    scanf("%d", &N);

    printf("%d %d", n1, n2);
    for (int i = 2; i < N; i++)
    {
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
        printf(" %d", fibo);
    }

    printf("\n");

    return 0;
}