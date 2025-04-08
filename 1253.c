#include <stdio.h>
#include <string.h>

int main()
{
    int n, deslocamento, tam, i, k;

    scanf("%d", &n);
    getchar();

    for (k = 0; k < n; k++)
    {
        char frase[120];
        fgets(frase, sizeof(frase), stdin);

        scanf("%d", &deslocamento);
        getchar();

        tam = strlen(frase);
        if (frase[tam - 1] == '\n')
            frase[tam - 1] = '\0';

        for (i = 0; i < tam; i++)
        {
            if (frase[i] >= 'A' && frase[i] <= 'Z')
            {
                char letra = frase[i] - deslocamento;
                if (letra < 'A')
                {
                    letra = 'Z' - ('A' - letra) + 1;
                }
                frase[i] = letra;
            }
        }

        printf("%s\n", frase);
    }

    return 0;
}
