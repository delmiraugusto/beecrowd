#include <stdio.h>

int main()
{
    int coluna, i, j;
    double mat[12][12], soma = 0.0, media;
    char operacao;

    scanf("%d", &coluna);

    scanf(" %c", &operacao);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);
        }

    for (i = 0; i < 12; i++)
        soma += mat[i][coluna];

    if (operacao == 'S')
        printf("%.1lf\n", soma);
    else
    {
        media = soma / 12;
        printf("%.1lf\n", media);
    }

    return 0;
}