#include <stdio.h>

int main()
{
    int n, i, S, B, A, S1, B1, A1, quantTotalSaque = 0, quantSucessoSaque = 0, quantTotalBloqueio = 0,
                                   quantSucessoBloqueio = 0, quantTotalAtaque = 0, quantSucessoAtaque = 0;
    char nome[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", nome);
        scanf("%d", &S);
        scanf("%d", &B);
        scanf("%d", &A);

        scanf("%d", &S1);
        scanf("%d", &B1);
        scanf("%d", &A1);

        quantTotalSaque += S;
        quantTotalBloqueio += B;
        quantTotalAtaque += A;

        quantSucessoSaque += S1;
        quantSucessoBloqueio += B1;
        quantSucessoAtaque += A1;
    }

    printf("Pontos de Saque: %.2lf %%.\n", (100.0 * quantSucessoSaque) / quantTotalSaque);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (100.0 * quantSucessoBloqueio) / quantTotalBloqueio);
    printf("Pontos de Ataque: %.2lf %%.\n", (100.0 * quantSucessoAtaque) / quantTotalAtaque);

    return 0;
}