#include <stdio.h>

int main()
{
    int n, m, i, j, k, x, y, valor;
    int tabuleiro[100][100];

    while (scanf("%d %d", &n, &m) != EOF)
    {

        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                tabuleiro[i][j] = 0;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &valor);

                if (valor == 1)
                {
                    tabuleiro[i][j] = 9;

                    int dx[] = {-1, 1, 0, 0};
                    int dy[] = {0, 0, -1, 1};

                    for (k = 0; k < 4; k++)
                    {
                        x = i + dx[k];
                        y = j + dy[k];

                        if (x >= 0 && x < n && y >= 0 && y < m && tabuleiro[x][y] != 9)
                        {
                            tabuleiro[x][y]++;
                        }
                    }
                }
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
