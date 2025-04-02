#include <stdio.h>

int main()
{

    int x[10], i, numero;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numero);
        numero = (numero <= 0) ? 1 : numero;
        x[i] = numero;
    }

    for (i = 0; i < 10; i++)
        printf("X[%d] = %d\n", i, x[i]);

    return 0;
}