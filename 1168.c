#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char numero[100];
    int total;
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n] ", numero);
        total = 0;

        for (int j = 0; j < strlen(numero); j++)
        {
            total += leds[numero[j] - '0'];
        }

        printf("%d leds\n", total);
    }
    return 0;
}
