#include <stdio.h>

int main()
{
    int quant, matricula, maiorMat;
    double nota, maiorNota = 0;

    scanf("%d", &quant);

    for (int i = 1; i <= quant; i++)
    {
        scanf("%d%lf", &matricula, &nota);
        if (nota > maiorNota)
        {
            maiorMat = matricula;
            maiorNota = nota;
        }
    }

    if (maiorNota >= 8)
        printf("%d\n", maiorMat);
    else
        printf("Minimum note not reached\n");

    return 0;
}