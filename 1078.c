#include <stdio.h>

int main()
{

    int x, N, resultado;

    scanf("%d", &N);

    for (int i = 1; i <= 10; i++)
    {
        resultado = i * N;
        printf("%d x %d = %d\n", i, N, resultado);
    }

    return 0;
}