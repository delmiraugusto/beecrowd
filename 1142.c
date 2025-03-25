#include <stdio.h>

int main()
{

    int n, n1, i, j, cont;

    cont = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", cont);
            cont++;
        }
        cont++;
        printf("PUM\n");
    }

    return 0;
}