#include <stdio.h>

int main()
{

    int n, i, numero, totalc = 0, totalr = 0, totals = 0, total = 0;
    char animal;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        scanf("%d %c", &numero, &animal);

        switch (animal)
        {

        case 'C':

            totalc = totalc + numero;
            break;

        case 'R':

            totalr = totalr + numero;
            break;

        case 'S':

            totals = totals + numero;
            break;
        }

        total = total + numero;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalc);
    printf("Total de ratos: %d\n", totalr);
    printf("Total de sapos: %d\n", totals);
    printf("Percentual de coelhos: %.2f %%\n", (float)totalc / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)totalr / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)totals / total * 100);

    return 0;
}