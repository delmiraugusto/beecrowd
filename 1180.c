#include <stdio.h>

int main()
{
    int tamanho, i, posicao, menorValor;

    scanf("%d", &tamanho);
    int x[tamanho];

    scanf("%d", &x[0]);
    menorValor = x[0];

    for (i = 1; i < tamanho; i++)
    {
        scanf("%d", &x[i]);

        if (menorValor > x[i])
        {
            menorValor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menorValor);
    printf("Posicao: %d\n", posicao);

    return 0;
}