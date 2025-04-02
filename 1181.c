#include <stdio.h>

int main()
{
    int linha, i, j;
    double mat[12][12], soma = 0.0, media;
    char operacao;

    scanf("%d", &linha);

    scanf(" %c", &operacao);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);
        }

    for (j = 0; j < 12; j++)
        soma += mat[linha][j];

    if (operacao == 'S')
        printf("%.1lf\n", soma);
    else
    {
        media = soma / 12;
        printf("%.1lf\n", media);
    }

    return 0;
}