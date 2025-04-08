#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, i;
    char linha[201];
    scanf("%d", &n);

    while (n--)
    {
        int letras[26] = {0};
        scanf(" %[^\n]", linha);

        for (i = 0; linha[i] != '\0'; i++)
        {
            if (isalpha(linha[i]))
            {
                letras[tolower(linha[i]) - 'a']++;
            }
        }

        int max = 0;
        for (i = 0; i < 26; i++)
        {
            if (letras[i] > max)
            {
                max = letras[i];
            }
        }

        for (i = 0; i < 26; i++)
        {
            if (letras[i] == max)
            {
                printf("%c", i + 'a');
            }
        }

        printf("\n");
    }

    return 0;
}