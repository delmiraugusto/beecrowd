#include <stdio.h>
#include <string.h>

int main()
{
    char risada[60], vogais[60], reverso[60];
    int i, j = 0, len;

    scanf("%s", risada);

    for (i = 0; i < strlen(risada); i++)
    {
        if (strchr("aeiou", risada[i]))
        {
            vogais[j++] = risada[i];
        }
    }
    vogais[j] = '\0';

    len = strlen(vogais);
    for (i = 0; i < strlen(vogais); i++)
    {
        reverso[i] = vogais[len - 1 - i];
    }
    reverso[strlen(vogais)] = '\0';

    printf("%s\n", strcmp(vogais, reverso) == 0 ? "S" : "N");

    return 0;
}
