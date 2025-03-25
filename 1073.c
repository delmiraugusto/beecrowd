#include <stdio.h>

int main()
{

    int x, resultado;

    scanf("%d", &x);

    for (int i = 2; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            resultado = i * i;
            printf("%d^2 = %d\n", i, resultado);
        }
    }

    return 0;
}