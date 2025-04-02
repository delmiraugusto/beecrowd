#include <stdio.h>

int main()
{
    int i, j;
    double mat[12][12], soma = 0.0, media, cont = 0;
    char operacao;

    scanf(" %c", &operacao);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    for (i = 0; i < 11; i++)
        for (j = 0; j < 11 - i; j++)
        {
            soma += mat[i][j];
            cont++;
        }

    if (operacao == 'S')
        printf("%.1lf\n", soma);
    else
    {
        media = soma / cont;
        printf("%.1lf\n", media);
    }

    return 0;
}