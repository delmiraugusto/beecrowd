#include <stdio.h>

int main()
{

    int x[10], i, numero, numeroMultiplicado;

    scanf("%d", &numero);
    x[0] = numero;

    for (i = 1; i < 10; i++)
    {
        numeroMultiplicado = numero * 2;
        x[i] = numeroMultiplicado;
        numero = numeroMultiplicado;
    }

    for (i = 0; i < 10; i++)
        printf("N[%d] = %d\n", i, x[i]);

    return 0;
}