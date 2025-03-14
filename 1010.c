#include <stdio.h>

int main()
{

    int codigo, numero;
    double valor, valor2, total;

    int codigo2, numero2;

    scanf("%d %d %lf %d %d %lf", &codigo, &numero, &valor, &codigo2, &numero2, &valor2);

    total = (numero * valor) + (numero2 * valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}