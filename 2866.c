#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    int c, i, j, k;
    char string[50], aux, palavra[50];

    scanf("%d", &c);

    for (i = 0; i < c; i++)
    {
        scanf(" %[^\n] ", string);
        j = strlen(string) - 1;
        k = 0;
        while (k < j)
        {
            aux = string[k];
            string[k] = string[j];
            string[j] = aux;
            k++;
            j--;
        }
        k = 0;
        for (j = 0; string[j] != '\0'; j++)
        {
            if (islower(string[j]) != 0)
            {
                palavra[k] = string[j];
                k++;
            }
        }
        palavra[k] = '\0';
        printf("%s\n", palavra);
    }

    return 0;
}