#include <stdio.h>

int main()
{

    double m[12][12], soma = 0, media;
    int i, j, cont = 0;
    char o;

    scanf("%c", &o);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);

    for (i = 11; i >= 7; i--)
    {
        for (j = 12 - i; j < i; j++)
        {
            soma += m[i][j];
            cont++;
        }
    }
    if (o == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        media = soma / cont;
        printf("%.1lf\n", media);
    }

    return 0;
}