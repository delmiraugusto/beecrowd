#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char string[51];
    int i, alterna;

    while (fgets(string, sizeof(string), stdin))
    {
        alterna = 1;
        for (i = 0; string[i] != '\0'; i++)
        {
            if (isalpha(string[i]))
            {
                if (alterna)
                    string[i] = toupper(string[i]);
                else
                    string[i] = tolower(string[i]);

                alterna = !alterna;
            }
        }
        printf("%s", string);
    }

    return 0;
}