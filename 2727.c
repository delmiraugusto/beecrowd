#include <stdio.h>
#include <string.h>

int main()
{
    int n, j, i, grupos, pontos;
    char codigo[100], letra;

    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf(" %[^\n]", codigo);
            grupos = 1;
            pontos = 0;

            for (j = 0; codigo[j]; j++)
            {
                if (codigo[j] == ' ')
                    grupos++;
            }

            for (j = 0; codigo[j] && codigo[j] != ' '; j++)
            {
                pontos++;
            }

            letra = 'a' + (grupos - 1) * 3 + (pontos - 1);
            printf("%c\n", letra);
        }
    }

    return 0;
}
