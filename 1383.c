#include <stdio.h>
#include <stdbool.h>

int main()
{

    int n, i, j, it, k, isub, jsub;
    int mat[9][9];
    bool ocorreu[10];
    bool valida;

    scanf("%d", &n);

    for (it = 1; it <= n; it++)
    {

        valida = true;

        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
                scanf("%d", &mat[i][j]);

        for (i = 0; i < 9 && valida; i++)
        {
            for (k = 1; k < 10; k++)
                ocorreu[k] = false;

            for (j = 0; j < 9; j++)
            {
                int aux = mat[i][j];

                if (!ocorreu[aux])
                {
                    ocorreu[aux] = true;
                }
                else
                {
                    valida = false;
                }
            }
        }

        for (j = 0; j < 9 && valida; j++)
        {
            for (k = 1; k < 10; k++)
                ocorreu[k] = false;

            for (i = 0; i < 9; i++)
            {
                int aux = mat[i][j];

                if (!ocorreu[aux])
                {
                    ocorreu[aux] = true;
                }
                else
                {
                    valida = false;
                }
            }
        }

        for (isub = 0; isub < 9; isub += 3)
        {
            for (jsub = 0; jsub < 9; jsub += 3)
            {

                for (k = 1; k < 10; k++)
                    ocorreu[k] = false;

                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        int aux = mat[i + isub][j + jsub];

                        if (!ocorreu[aux])
                        {
                            ocorreu[aux] = true;
                        }
                        else
                        {
                            valida = false;
                        }
                    }
                }
            }
        }

        printf("Instancia %d\n", it);
        printf("%s\n\n", valida ? "SIM" : "NAO");
    }

    return 0;
}
