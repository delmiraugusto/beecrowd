#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n, i, j, tamanho_s;
    char string[1001], string_inversa[1001];

    scanf(" %d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        fgets(string, sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0';

        tamanho_s = strlen(string);

        for (j = 0; j < tamanho_s; j++)
            if (isalpha(string[j]))
                string[j] = string[j] + 3;

        for (j = 0; j < tamanho_s; j++)
        {
            string_inversa[j] = string[tamanho_s - 1 - j];
        }
        string_inversa[tamanho_s] = '\0';

        for (j = tamanho_s / 2; j < tamanho_s; j++)
        {
            string_inversa[j] = string_inversa[j] - 1;
        }
        printf("%s\n", string_inversa);
    }

    return 0;
}