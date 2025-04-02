#include <stdio.h>

int main()
{

    long double valorDividido, entrada, x[100];
    int i;

    scanf("%Lf", &entrada);
    x[0] = entrada;

    for (i = 1; i < 100; i++)
    {
        valorDividido = entrada / 2;
        x[i] = valorDividido;
        entrada = valorDividido;
    }

    for (i = 0; i < 100; i++)
        printf("N[%d] = %.4Lf\n", i, x[i]);

    return 0;
}