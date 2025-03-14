#include <stdio.h>

int main()
{

    int numero, horas;
    double valor, salario;

    scanf("%d %d %lf", &numero, &horas, &valor);

    salario = valor * horas;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}