#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    char frase[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", frase);
        int soma = 0;
        char temp[10];
        int k = 0;

        for (j = 0; j <= strlen(frase); j++)
        {
            if (isdigit(frase[j]))
            {
                temp[k++] = frase[j];
            }
            else if (k > 0)
            {
                temp[k] = '\0';
                soma += atoi(temp);
                k = 0;
            }
        }

        if (k > 0)
        {
            temp[k] = '\0';
            soma += atoi(temp);
        }

        printf("%d\n", soma);
    }

    return 0;
}
