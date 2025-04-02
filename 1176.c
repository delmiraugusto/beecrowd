#include <stdio.h>

int main()
{

    int valorFibo, posicaoLida, casos, i;
    long long int x[61];

    x[0] = 0;
    x[1] = 1;

    for (i = 2; i < 61; i++)
    {
        x[i] = x[i - 1] + x[i - 2];
    }

    scanf("%d", &casos);

    for (i = 0; i < casos; i++)
    {
        scanf("%d", &posicaoLida);
        printf("Fib(%d) = %lld\n", posicaoLida, x[posicaoLida]);
    }

    return 0;
}