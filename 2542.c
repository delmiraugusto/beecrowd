#include <stdio.h>

int main()
{
    int n, m, l, mat_m[100][100], mat_l[100][100], cm, cl, a, i, j;
    int marcos, leonardo;

    while (scanf("%d", &n) != EOF)
    {

        scanf("%d%d", &m, &l);

        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &mat_m[i][j]);

        for (i = 0; i < l; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &mat_l[i][j]);

        scanf("%d%d", &cm, &cl);
        scanf("%d", &a);

        marcos = mat_m[cm - 1][a - 1];
        leonardo = mat_l[cl - 1][a - 1];

        if (marcos > leonardo)
            printf("Marcos\n");
        else if (leonardo > marcos)
            printf("Leonardo\n");
        else
            printf("Empate\n");
    }

    return 0;
}